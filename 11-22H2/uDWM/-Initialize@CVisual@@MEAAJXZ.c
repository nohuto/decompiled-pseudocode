/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800
 * Callers:
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x180002FE0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180008B30 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000E6C0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180016820 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18001E834 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180043060 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180046D90 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180047020 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180047310 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A7E0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x1800583A0 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x1800A0B90 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A35E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BF0 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800C00A0 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4D50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5680 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800CD240 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CD520 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CD9A0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x1800D5BD0 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800D8D60 (-Initialize@CSolidRectangleVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800E3D60 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800E7C60 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8AC0 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x1800E9A80 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x180105300 (-Initialize@CGlobalTimeTrackVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180022770 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::Initialize(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 16);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x4Du, 0LL);
  return v2;
}
