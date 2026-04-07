/*
 * XREFs of ??1?$ComPtr@VUdwmTopVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800970B4
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180034138 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     _CWindowList::GetGlobalLightSetForDesktop_::_1_::dtor$0 @ 0x1800646F0 (_CWindowList--GetGlobalLightSetForDesktop_--_1_--dtor$0.c)
 *     _CGlobalLightSet::Create_::_1_::dtor$0 @ 0x180064702 (_CGlobalLightSet--Create_--_1_--dtor$0.c)
 *     _CClientArea::CloneVisualTree_::_1_::dtor$4 @ 0x1800648BC (_CClientArea--CloneVisualTree_--_1_--dtor$4.c)
 *     _CAnimationEngine::OnTick_::_1_::dtor$1 @ 0x180064F14 (_CAnimationEngine--OnTick_--_1_--dtor$1.c)
 *     _CTopLevelWindow::EnsureClientAreaNode_::_1_::dtor$0 @ 0x180064F26 (_CTopLevelWindow--EnsureClientAreaNode_--_1_--dtor$0.c)
 *     _CWindowBorder::CloneVisualTree_::_1_::dtor$0 @ 0x180065020 (_CWindowBorder--CloneVisualTree_--_1_--dtor$0.c)
 *     _CClientArea::CloneVisualTree_::_1_::dtor$0 @ 0x18006542A (_CClientArea--CloneVisualTree_--_1_--dtor$0.c)
 *     _CClientArea::CloneVisualTree_::_1_::dtor$6 @ 0x180065460 (_CClientArea--CloneVisualTree_--_1_--dtor$6.c)
 *     _CAccent::_EnsureBorderShadowAtlas_::_1_::dtor$0 @ 0x1800985DD (_CAccent--_EnsureBorderShadowAtlas_--_1_--dtor$0.c)
 *     _CAnimatedTransitionVisual::UpdateBackgroundWithClip_::_1_::dtor$1 @ 0x18009F971 (_CAnimatedTransitionVisual--UpdateBackgroundWithClip_--_1_--dtor$1.c)
 *     _CAnimatedTransitionVisual::_Ensure3DRenderData_::_1_::dtor$1 @ 0x18009FEE8 (_CAnimatedTransitionVisual--_Ensure3DRenderData_--_1_--dtor$1.c)
 *     _CAnimatedTransitionVisual::_Ensure3DRenderData_::_1_::dtor$2 @ 0x18009FEF4 (_CAnimatedTransitionVisual--_Ensure3DRenderData_--_1_--dtor$2.c)
 *     _CAnimatedTransitionVisual::_ValidateDCompVisual_::_1_::dtor$0 @ 0x1800A0C76 (_CAnimatedTransitionVisual--_ValidateDCompVisual_--_1_--dtor$0.c)
 *     _CDesktopThumbnailCVIVisual::SetVisual_::_1_::dtor$0 @ 0x1800B314F (_CDesktopThumbnailCVIVisual--SetVisual_--_1_--dtor$0.c)
 *     _CScreenRotation::UpdateBackgroundInstructionsAndSize_::_1_::dtor$0 @ 0x1800D3B2B (_CScreenRotation--UpdateBackgroundInstructionsAndSize_--_1_--dtor$0.c)
 *     _CSystemBackdropVisual::CloneVisualTree_::_1_::dtor$0 @ 0x1800E0FDC (_CSystemBackdropVisual--CloneVisualTree_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<UdwmTopVisual>::~ComPtr<UdwmTopVisual>(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
