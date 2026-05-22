/*
 * XREFs of ??$?0$$V@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@@Z @ 0x180140858
 * Callers:
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x1801408D0 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x18005240C (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  size_t size_of; // rax
  char *v4; // rax
  _QWORD *v5; // rbx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<96>(1uLL);
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v4;
  v5 = v4 + 16;
  memset_0(v4 + 16, 0, 0x50uLL);
  v5[7] = 0LL;
  v5[8] = 0LL;
  v5[9] = 0LL;
  return a1;
}
