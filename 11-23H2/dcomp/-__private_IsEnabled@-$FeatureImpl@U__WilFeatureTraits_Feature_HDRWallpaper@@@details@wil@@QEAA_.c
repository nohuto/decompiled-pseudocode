/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0
 * Callers:
 *     ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0 (-Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z.c)
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800999D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180099F54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
