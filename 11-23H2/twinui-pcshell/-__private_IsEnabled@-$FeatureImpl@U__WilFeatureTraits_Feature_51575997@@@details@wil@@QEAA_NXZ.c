/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@QEAA_NXZ @ 0x1801F2690
 * Callers:
 *     ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x18048EBC0 (-GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801F2194 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F2350 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_51575997>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_51575997>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_51575997>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
