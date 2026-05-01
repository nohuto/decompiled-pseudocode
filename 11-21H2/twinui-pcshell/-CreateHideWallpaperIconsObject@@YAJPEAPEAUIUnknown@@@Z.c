/*
 * XREFs of ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x1805F3628
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1804A44E4 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180 (-Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1805F34E4 (--$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 */

__int64 __fastcall CreateHideWallpaperIconsObject(struct IUnknown **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Microsoft::WRL::Details::MakeAndInitialize<HideWallpaperIconsObject,IUnknown,>(a1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shell\\lib\\hidewallpapericons.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
