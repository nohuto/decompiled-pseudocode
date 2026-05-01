/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801D6870
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartScreenManagerAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801D4E4C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowServiceForStartSc.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D1358 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RegisterWindowServiceWit.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D5388 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RegisterWindowServiceWithOptions>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
