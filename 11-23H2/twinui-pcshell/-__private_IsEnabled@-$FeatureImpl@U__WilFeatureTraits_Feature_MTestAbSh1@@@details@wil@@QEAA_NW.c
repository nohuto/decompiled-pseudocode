/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18052E8D4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180522E2C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180185DE0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180185EE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
