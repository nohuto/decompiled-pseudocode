/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006C058
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__void________wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x14006BE3E (_std--_List_node_emplace_op2_std--allocator_std--_List_node_wil--com_ptr_t_CLocalMmcssWorkQueue_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x18uLL);
}
