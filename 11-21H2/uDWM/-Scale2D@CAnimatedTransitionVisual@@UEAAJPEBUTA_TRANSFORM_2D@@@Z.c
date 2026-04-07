/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180006970
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800D2248 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 191) != v2
    || *((float *)this + 192) != *((float *)a2 + 6)
    || *((float *)this + 194) != *((float *)a2 + 9)
    || *((float *)this + 195) != *((float *)a2 + 10) )
  {
    v3 = *((_BYTE *)this + 974) == 0;
    *((float *)this + 191) = v2;
    *((_DWORD *)this + 192) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 193) = 1065353216;
    if ( v3 )
    {
      *((_DWORD *)this + 194) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 780) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}
