/*
 * XREFs of ?_Tidy@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@AEAAXXZ @ 0x1800553CC
 * Callers:
 *     CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__ @ 0x1800700E0 (CallOnThreadExit--_dynamic_atexit_destructor_for__s_callbacks__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x1801409C4 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 */

void __fastcall std::list<CallOnThreadExit::CallbackData>::_Tidy(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      CallOnThreadExit::CallbackData::~CallbackData((CallOnThreadExit::CallbackData *)(v3 + 2));
      std::_Deallocate<16,0>(v3, 0x60uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x60uLL);
}
