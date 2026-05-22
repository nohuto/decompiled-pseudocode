/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800589F8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180058700 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx15@@@details@wil.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005838C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058898 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestUx14@@@details@wil@@QEAAX_NW4Reporti.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestUx14>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
