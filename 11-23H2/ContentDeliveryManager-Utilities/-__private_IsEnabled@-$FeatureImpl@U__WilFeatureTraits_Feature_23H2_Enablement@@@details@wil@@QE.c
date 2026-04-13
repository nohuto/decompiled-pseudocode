/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18004345C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180034044 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@d.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033118 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@detail.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E630 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_23H2_Enablement@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_23H2_Enablement>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_23H2_Enablement>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_23H2_Enablement>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
