/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180024724
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180024710 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180029780 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18001E910 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002368C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180024830 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002497C (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180071298 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  int v3; // edi
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[48]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 248LL))(*((_QWORD *)this + 19));
  if ( v2 != *((_BYTE *)this + 201) )
  {
    *((_BYTE *)this + 201) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0, 0);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 20));
  }
  v3 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         this,
         (struct APPLICATION_VIEW_DATA_UPDATE *)v7);
  if ( v3 >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 19) + 272LL))(*((_QWORD *)this + 19), &v6) >= 0
      && (_BYTE)v6 != *((_BYTE *)this + 203) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 264LL))(
             *((_QWORD *)this + 19),
             (unsigned int)-((_BYTE)v6 == 0));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E44,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v5,
          v6);
      *((_BYTE *)this + 203) = v6;
    }
    CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
      this,
      v7,
      (unsigned int)((*((_DWORD *)this + 53) & 2) != 0) + 1);
  }
  return (unsigned int)v3;
}
