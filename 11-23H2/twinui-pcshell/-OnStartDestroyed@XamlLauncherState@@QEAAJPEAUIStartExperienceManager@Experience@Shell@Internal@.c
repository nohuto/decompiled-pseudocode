/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180160C70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18002CB84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180053CC0 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800BAB98 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180161430 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801615E0 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1801FE5F4 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x1801FE6AC (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18020211C (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180202184 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x180507374 (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v12; // [rsp+60h] [rbp-A8h]
  _BYTE v13[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v4 = *((_DWORD *)this + 16);
  LODWORD(v11[0]) = v4;
  *((_QWORD *)&v11[0] + 1) = this;
  v11[1] = v11[0];
  v12 = 1;
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    StartWindowTelemetry::StartViewDestroyedWhileVisible();
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
    if ( !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
      && !*((_BYTE *)this + 1043)
      && !*((_BYTE *)this + 1044) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7FC,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v5);
    }
    *((_DWORD *)this + 16) = 0;
    v6 = *((_QWORD *)this + 13);
    if ( v6 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v10) >= 0 && v10 )
      *((_BYTE *)this + 1047) = 1;
  }
  else if ( v4 == 1
         || v4 == 2
         || v4 == 3
         || v4 == 4
         || v4 == 15
         || v4 == 18
         || v4 == 19
         || (v6 = (unsigned int)(v4 - 20), (unsigned int)v6 <= 1) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                            (char *)this + 952,
                            v11)
             + 269LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v11);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 120) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                              (char *)this + 960,
                              v11)
               + 284LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(v11);
      tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((char *)this + 960);
    }
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 312,
      (struct wil::details::IFailureCallback *)v13);
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v13);
    if ( *((_DWORD *)this + 16) != 15 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    *((_DWORD *)this + 16) = 0;
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
  }
  v7 = LauncherTelemetryLogging::Provider(v6);
  if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
  {
    v10 = *((_DWORD *)this + 16);
    LODWORD(v11[0]) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_18085C1EE,
      0LL,
      v8,
      (__int64)v11,
      (__int64)&v10);
  }
  return 0LL;
}
