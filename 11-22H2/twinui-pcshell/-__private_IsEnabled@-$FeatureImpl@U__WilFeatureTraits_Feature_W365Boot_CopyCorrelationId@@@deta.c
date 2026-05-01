/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@@QEAA_NXZ @ 0x18027882C
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008A48C (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180706530 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802778EC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelation.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180278578 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_CopyCorrelationId>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
