/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20
 * Callers:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000FEC0 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x1800255E0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800A12DC (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7D48 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7F44 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2914 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800D85BC (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6E8C (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5170 (-DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
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
