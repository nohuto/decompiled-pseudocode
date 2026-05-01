/*
 * XREFs of _lambda_4fae964a0789c82928c2c47e65ba2907_::operator() @ 0x1801AD2DC
 * Callers:
 *     _lambda_4fae964a0789c82928c2c47e65ba2907_::_lambda_invoker_cdecl_ @ 0x1801ACD30 (_lambda_4fae964a0789c82928c2c47e65ba2907_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??B?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEBA_NXZ @ 0x18012E644 (--B-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEBA_NXZ.c)
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??$StartDidntOpenIn30Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z @ 0x18044E2C4 (--$StartDidntOpenIn30Seconds@I@CommonStartTelemetry@@SAX$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_4fae964a0789c82928c2c47e65ba2907_::operator()(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  LODWORD(v10) = *(_DWORD *)(a3 + 64);
  CommonStartTelemetry::StartDidntOpenIn30Seconds<unsigned int>((__int64 *)va);
  v4 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data((_QWORD *)(a3 + 944));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v8,
    v4);
  if ( tip::tip_test<_tip_StartMenuInvokeTest>::operator bool(v8) )
    tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v8);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  v6 = *(_QWORD *)(a3 + 960);
  if ( v6 && tip::details::test_common_data<1>::is_running(v6 + 8) )
    tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)(a3 + 960));
  v7 = ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)a3, (void *)3);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>((__int64)v8);
}
