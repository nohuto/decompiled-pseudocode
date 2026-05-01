/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAA_NXZ @ 0x180215D40
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180618530 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180215630 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@de.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802157E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlightUdk@@@details@wil@@QEAAX_.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlightUdk>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
