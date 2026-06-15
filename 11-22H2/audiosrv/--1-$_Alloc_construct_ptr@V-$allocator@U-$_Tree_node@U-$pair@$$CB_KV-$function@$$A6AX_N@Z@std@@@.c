/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E7658
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____void________std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____const_&__::_1_::dtor$0 @ 0x18007C2D6 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_CAudioSessionInstanceId_co.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned___int64_const__std::function_void___cdecl(bool)____void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_unsigned___int64_const__std::function_void___cdecl(bool)____void________std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_&&__std::tuple_____::_1_::dtor$1 @ 0x1800F4896 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_unsigned___int64_const__std--func.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::function<void (bool)>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x68uLL);
}
