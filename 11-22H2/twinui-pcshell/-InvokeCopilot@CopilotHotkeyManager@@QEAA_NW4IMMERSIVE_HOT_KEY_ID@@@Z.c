/*
 * XREFs of ?InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264704
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273AE0 (CopilotHotkeyManager--TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802606A4 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260F00 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802610A0 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261138 (--1-$test_watcher@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1802613A4 (--C-$tip_test@V-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x1802654D0 (-IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InvokeCopilotHotkey@AEAW4IMMERSIVE_HOT_KEY_ID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1806FD1BC (--$InvokeCopilotHotkey@AEAW4IMMERSIVE_HOT_KEY_ID@@@CopilotHotkeyManagerTelemetry@@SAXAEAW4IMMERS.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CopilotHotkeyManager::InvokeCopilot(void *a1, int a2)
{
  char v2; // di
  volatile signed __int32 *v3; // rcx
  CopilotHotkeyManager *v4; // rcx
  bool IsCopilotPWAInstalled; // bl
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rdx
  HRESULT v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v14; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v15[56]; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  void *v17; // [rsp+90h] [rbp+20h] BYREF
  int v18; // [rsp+98h] [rbp+28h] BYREF
  volatile signed __int32 *v19; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+38h] BYREF

  v18 = a2;
  v17 = a1;
  v2 = 0;
  CopilotHotkeyManagerTelemetry::InvokeCopilotHotkey<enum IMMERSIVE_HOT_KEY_ID &>(&v18);
  v3 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>>((struct wil::details::IFailureCallback *)v15)
                                  + 6);
  v19 = v3;
  if ( v3 )
    _InterlockedIncrement(v3 + 68);
  tip2::test_watcher<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::~test_watcher<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>((__int64)v15);
  IsCopilotPWAInstalled = CopilotHotkeyManager::IsCopilotPWAInstalled(v4);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::operator->(
                (__int64)&v19,
                (__int64 *)&v17)
           + 264) = IsCopilotPWAInstalled;
  tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>(
    &v17,
    v6);
  v7 = *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::operator->(
                     (__int64)&v19,
                     (__int64 *)&ppv)
                + 264);
  tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>(
    &ppv,
    v8);
  if ( v7 )
  {
    ppv = 0LL;
    v9 = CoCreateInstance(
           &CLSID_ApplicationActivationManager,
           0LL,
           1u,
           &GUID_2e941141_7f97_4756_ba1d_9decde894a3d,
           &ppv);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      LODWORD(v17) = 0;
      v9 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, _QWORD, _QWORD, void **))(*(_QWORD *)ppv + 24LL))(
             ppv,
             L"Microsoft.Copilot_8wekyb3d8bbwe!App",
             0LL,
             0LL,
             &v17);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        v2 = 1;
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::operator->(
                      (__int64)&v19,
                      (__int64 *)&v14)
                 + 265) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>>(
          &v14,
          v12);
        goto LABEL_10;
      }
      v11 = 365LL;
    }
    else
    {
      v11 = 362LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_10:
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&ppv);
  }
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v19);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHotkeyInvokedTest,_tip_CopilotHotkeyInvokedTest>,wil::err_returncode_policy>((void **)&v19);
  return v2;
}
