/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAA_NXZ @ 0x180707C6C
 * Callers:
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180706378 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscove.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1807074F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
