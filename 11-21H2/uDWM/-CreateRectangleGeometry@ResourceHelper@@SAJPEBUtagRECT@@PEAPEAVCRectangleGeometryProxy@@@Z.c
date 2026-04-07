/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180098414 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F77C (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F984 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE5B4 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D3950 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6720 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800EF140 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBUtagSIZE@@_N@Z @ 0x1800F58C0 (-UpdateBackgroundInstructionsAndSize@ScreenRotationRejuvTransitionHandler@implementation@Private.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct tagRECT *a1,
        struct CRectangleGeometryProxy **a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // r9d
  int v5; // r10d
  LONG top; // edx
  LONG left; // ecx

  v2 = 0;
  v3 = a1->bottom - a1->top;
  v4 = 0;
  v5 = a1->right - a1->left;
  top = a1->top;
  left = a1->left;
  if ( v3 >= 0 )
    v4 = v3;
  if ( v5 >= 0 )
    v2 = v5;
  return ResourceHelper::CreateRectangleGeometry(left, top, v2, v4, a2);
}
