/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18020C208
 * Callers:
 *     _anonymous_namespace_::GetRelaunchPolicyFromActivationResult @ 0x18020A554 (_anonymous_namespace_--GetRelaunchPolicyFromActivationResult.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180209898 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@AE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18020B564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
