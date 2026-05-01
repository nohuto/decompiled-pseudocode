/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ @ 0x1802487F8
 * Callers:
 *     ?IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023FEC8 (-IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180697554 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023A9D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180241D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r9
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::ReportUsage(a1, v5 & 1, 3u, v3);
  return v2;
}
