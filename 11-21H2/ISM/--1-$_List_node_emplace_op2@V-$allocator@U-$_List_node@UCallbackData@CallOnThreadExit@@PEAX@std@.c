/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180126320
 * Callers:
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180126268 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012635C (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    CallOnThreadExit::CallbackData::~CallbackData((CallOnThreadExit::CallbackData *)(v2 + 16));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x60uLL);
  }
}
