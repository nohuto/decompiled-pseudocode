/*
 * XREFs of _lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator() @ 0x18014CFBC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x18014CFA0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator()(CImmersiveApp **a1)
{
  char v2; // al
  __int64 v3; // rdx
  CImmersiveApp *v4; // rax
  CImmersiveApp *v5; // rdi
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)*a1 + 14) + 408LL))((__int64)*a1 + 112);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = a1[1];
    v5 = *a1;
    if ( *((_QWORD *)v4 + 22) )
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)v4 + 21) + 32LL))(**((_QWORD **)v4 + 21), 0LL);
    v8 = v3;
    v7 = 8;
    CImmersiveApp::_ScheduleApplicationNotifications(v5, (const struct APP_CHANGE_INFO *const)&v7, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
