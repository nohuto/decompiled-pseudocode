/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806FC5E8
 * Callers:
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB2F8 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806FA648 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotif.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806FC0D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
