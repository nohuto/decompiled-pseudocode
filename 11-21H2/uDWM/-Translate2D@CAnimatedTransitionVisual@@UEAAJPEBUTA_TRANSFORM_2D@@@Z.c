/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007640
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D3794 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F56FC (-UpdateAngle@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 188) != v2 || *((float *)this + 189) != *((float *)a2 + 6) )
  {
    *((float *)this + 188) = v2;
    *(_QWORD *)((char *)this + 756) = *((unsigned int *)a2 + 6);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}
