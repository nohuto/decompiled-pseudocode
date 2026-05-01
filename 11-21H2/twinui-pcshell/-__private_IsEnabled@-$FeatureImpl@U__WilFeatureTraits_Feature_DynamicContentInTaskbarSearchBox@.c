/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1801A22D0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18019ECAC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18019E854 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DynamicContentInTaskbarS.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801A057C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox@@@detail.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DynamicContentInTaskbarSearchBox>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
