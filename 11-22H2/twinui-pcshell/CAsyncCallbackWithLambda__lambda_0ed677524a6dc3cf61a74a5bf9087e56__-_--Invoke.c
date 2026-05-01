/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180027AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56____::Invoke(__int64 a1)
{
  CImmersiveApp *v2; // rbx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  HWND ApplicationWindow; // [rsp+28h] [rbp-10h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL) + 408LL))(*(_QWORD *)(a1 + 48) + 112LL) )
  {
    v2 = *(CImmersiveApp **)(a1 + 48);
    v4 = 8;
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(*(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 56));
    CImmersiveApp::_ScheduleApplicationNotifications(v2, (const struct APP_CHANGE_INFO *const)&v4, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
