/*
 * XREFs of ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180126268
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180126408 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$?0$$V@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@@Z @ 0x1801261F4 (--$-0$$V@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEA.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180126320 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 */

_QWORD *__fastcall std::list<CallOnThreadExit::CallbackData>::_Emplace<>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-10h]

  if ( *((_QWORD *)&xmmword_180242FC0 + 1) == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
    &v6,
    (__int64)&xmmword_180242FC0);
  ++*((_QWORD *)&xmmword_180242FC0 + 1);
  v3 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v3;
  v4 = v7;
  v7 = 0LL;
  *(_QWORD *)(a2 + 8) = v4;
  *v3 = v4;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(&v6);
  return v4;
}
