/*
 * XREFs of ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@AEAA_NXZ @ 0x180555B14
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x180550300 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 */

bool __fastcall VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(
        VirtualDesktopGestureWindow *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v4; // eax
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  pvParam = 16;
  v7 = 0LL;
  v8 = 0;
  v4 = SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0);
  if ( v4 )
    LOBYTE(v4) = (v7 & 1) == 0;
  return v4;
}
