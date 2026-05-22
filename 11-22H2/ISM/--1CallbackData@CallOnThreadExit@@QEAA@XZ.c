/*
 * XREFs of ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18014EA74
 * Callers:
 *     ?_Tidy@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@AEAAXXZ @ 0x18005615C (-_Tidy@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadExit@@@std@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014EA38 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800E12D0 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

void __fastcall CallOnThreadExit::CallbackData::~CallbackData(CallOnThreadExit::CallbackData *this, __int64 a2)
{
  struct _TP_WAIT *v3; // rcx
  char *v4; // rcx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 9);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  v4 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this, a2);
}
