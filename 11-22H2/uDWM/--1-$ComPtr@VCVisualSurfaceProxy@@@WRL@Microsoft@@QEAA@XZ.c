/*
 * XREFs of ??1?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A2878
 * Callers:
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$0 @ 0x1800673B2 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$0.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$10 @ 0x18006740C (_CWindowBorder--CreateBorderStructure_--_1_--dtor$10.c)
 *     _CWindowList::MoveTransitionAndTouchVisualToFront_::_1_::dtor$0 @ 0x1800678D2 (_CWindowList--MoveTransitionAndTouchVisualToFront_--_1_--dtor$0.c)
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x180068031 (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800686F4 (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CGlobalLightSet::RemoveInteropVisualFromTree_::_1_::dtor$0 @ 0x1800C185A (_CGlobalLightSet--RemoveInteropVisualFromTree_--_1_--dtor$0.c)
 *     _CVisual::CloneVisualTree_::_1_::dtor$0 @ 0x1801057F9 (_CVisual--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x180108CF9 (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::~ComPtr<CVisualSurfaceProxy>(CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(a1);
}
