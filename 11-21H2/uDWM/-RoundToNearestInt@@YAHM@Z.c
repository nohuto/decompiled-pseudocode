/*
 * XREFs of ?RoundToNearestInt@@YAHM@Z @ 0x180018180
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017AAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180018690 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18009E378 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F77C (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F984 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800E3090 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800E3330 (-Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 * Callees:
 *     _o_ceilf_0 @ 0x180060EB0 (_o_ceilf_0.c)
 *     floorf @ 0x180060ED4 (floorf.c)
 */

__int64 __fastcall RoundToNearestInt(float a1)
{
  float v1; // xmm0_4

  if ( a1 < 0.0 )
    v1 = o_ceilf_0(a1 - 0.5);
  else
    v1 = floorf(a1 + 0.5);
  return (unsigned int)(int)v1;
}
