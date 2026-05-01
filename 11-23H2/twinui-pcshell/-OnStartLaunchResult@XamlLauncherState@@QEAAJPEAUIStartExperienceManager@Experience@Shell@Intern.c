/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1801B6170
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18002CB84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180053CC0 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18009FA5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1800B68FC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800BAB98 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180112920 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1801FE5F4 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x1801FE6AC (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18020211C (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180202184 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInvokeTIPTestFix@@@details@wil@@QEAA_NXZ @ 0x18020328C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_StartInvokeTIPTestFix@@@details@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        unsigned int a3)
{
  int v5; // r15d
  unsigned int v6; // r14d
  __int64 *v7; // rdi
  __int64 v8; // rcx
  char IsEnabled; // al
  __int64 *v10; // rcx
  int v11; // eax
  int started; // eax
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  char v24; // [rsp+80h] [rbp-80h]
  _BYTE v25[320]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v5 = *((_DWORD *)this + 16);
  LODWORD(v20) = v5;
  *((_QWORD *)&v20 + 1) = this;
  LODWORD(v21) = a3;
  v22 = v20;
  v23 = v21;
  v24 = 1;
  v6 = a3 >> 31;
  v7 = (__int64 *)((char *)this + 952);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 119) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                            v7,
                            &v17)
             + 274LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v17);
  }
  if ( !(_BYTE)v6 )
  {
    if ( *((_BYTE *)this + 1047) )
    {
      started = XamlLauncherState::ShowStartView((__int64)this + 24, 1u, 4u);
      v8 = (__int64)retaddr;
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D5,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)started);
      *((_BYTE *)this + 1047) = 0;
    }
    goto LABEL_24;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInvokeTIPTestFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_StartInvokeTIPTestFix>::GetImpl'::`2'::impl);
  v10 = v7;
  if ( !IsEnabled )
    goto LABEL_7;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v7) )
  {
    v10 = v7;
LABEL_7:
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                             v10,
                             &v17)
              + 280LL) = a3;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v17);
  }
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 120) )
  {
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                             (char *)this + 960,
                             &v17)
              + 288LL) = a3;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(&v17);
    tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((char *)this + 960);
  }
  SetExistingEvent(L"ShellStartReadyEvent");
  if ( *((_DWORD *)this + 16) == 1 || *((_DWORD *)this + 16) == 3 || *((_DWORD *)this + 16) == 4 )
    goto LABEL_16;
  if ( *((_DWORD *)this + 16) == 15 )
  {
    *((_DWORD *)this + 16) = 0;
LABEL_18:
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 312,
      (struct wil::details::IFailureCallback *)v25);
    XamlLauncherState::CompleteStartShowTelemetry(this, a3, (struct CommonStartTelemetry::LauncherInvokeActivity *)v25);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v25);
    goto LABEL_24;
  }
  if ( *((_DWORD *)this + 16) == 18 || (v8 = (unsigned int)(*((_DWORD *)this + 16) - 20), (unsigned int)v8 <= 1) )
  {
LABEL_16:
    *((_DWORD *)this + 16) = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8AD,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v11);
    goto LABEL_18;
  }
LABEL_24:
  v13 = LauncherTelemetryLogging::Provider(v8);
  if ( *(_DWORD *)v13 > 5u && tlgKeywordOn((__int64)v13, 0x200000000000LL) )
  {
    v18 = a3;
    v19 = *((_DWORD *)this + 16);
    v17 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (int)&unk_18085C16A,
      v14,
      v15,
      (__int64)&v17,
      (__int64)&v19,
      (__int64)&v18);
  }
  return 0LL;
}
