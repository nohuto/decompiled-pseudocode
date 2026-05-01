/*
 * XREFs of _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0
 * Callers:
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::_lambda_invoker_cdecl_ @ 0x1801ACD40 (_lambda_751c3952807d6b9c6862705cee6a52fd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005A23C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C5858 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700 (--1-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ.c)
 *     ??C?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA?AV?$test_data_control@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@1@XZ @ 0x18044A5A0 (--C-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA-AV-$test_data_control@U_.c)
 *     ??C?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEAA?AV?$test_data_control@U_tip_StartMenuInvokeTest@@@1@XZ @ 0x1804500E8 (--C-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEAA-AV-$test_data_control@U_tip_StartMenuInvokeT.c)
 */

void lambda_751c3952807d6b9c6862705cee6a52fd_::operator()(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // edi
  int v5; // esi
  const struct _tlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v19 = a2;
  v3 = *(_DWORD *)(a3 + 64);
  v5 = 1000 * *(_DWORD *)(a3 + 68);
  v6 = LauncherTelemetryLogging::Provider(a1, a2, a3);
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    LODWORD(v20) = v3;
    LODWORD(v19) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      byte_1806B5506,
      0LL,
      v8,
      (__int64)&v19,
      (__int64)va);
  }
  v9 = (_QWORD *)tip::tip_test<_tip_StartMenuInvokeTest>::operator->(a3 + 944, v17);
  v10 = *v9 == 0LL;
  v11 = *v9 + 156LL;
  if ( v10 )
    v11 = 12LL;
  *(_BYTE *)v11 = 1;
  tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>(v17);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    1u,
    3u,
    v12);
  v13 = *(_QWORD *)(a3 + 960);
  if ( v13 && tip::details::test_common_data<1>::is_running(v13 + 8) )
  {
    v14 = (_QWORD *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::operator->(a3 + 960, v17);
    v10 = *v14 == 0LL;
    v15 = *v14 + 171LL;
    if ( v10 )
      v15 = 27LL;
    *(_BYTE *)v15 = 1;
    tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>(v17);
  }
  v16 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)a3, (void *)2);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v16);
}
