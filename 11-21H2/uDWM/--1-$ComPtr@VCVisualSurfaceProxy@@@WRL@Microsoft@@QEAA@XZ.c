/*
 * XREFs of ??1?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180099894
 * Callers:
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x180064898 (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _UdwmTopVisual::RenderRecursive_::_1_::dtor$0 @ 0x180064C30 (_UdwmTopVisual--RenderRecursive_--_1_--dtor$0.c)
 *     _UdwmTopVisual::RenderRecursive_::_1_::dtor$1 @ 0x180064C50 (_UdwmTopVisual--RenderRecursive_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$0 @ 0x18006539A (_CWindowBorder--CreateBorderStructure_--_1_--dtor$0.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$10 @ 0x1800653D0 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$10.c)
 *     _CVisual::CloneVisualTree_::_1_::dtor$0 @ 0x180065C8C (_CVisual--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800662D2 (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CGlobalLightSet::RemoveUdwmDCompVisualFromUdwmTree_::_1_::dtor$0 @ 0x1800BD760 (_CGlobalLightSet--RemoveUdwmDCompVisualFromUdwmTree_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x180101A10 (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::~ComPtr<CVisualSurfaceProxy>(CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(a1);
}
