/*******************************************************************************
* Copyright 2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "dnnl_memory.hpp"
#include "dnnl_reorder.hpp"

int dnn_mem_t::reorder(const dnn_mem_t &rhs, const_dnnl_primitive_attr_t attr) {
    if (this == &rhs) return OK;
    return execute_reorder(rhs, *this, attr);
}
