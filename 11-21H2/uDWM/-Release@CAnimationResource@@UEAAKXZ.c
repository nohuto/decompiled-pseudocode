/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x180002660
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180001FA4 (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180012304 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180047488 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F73F4 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??1CAnimationResource@@IEAA@XZ @ 0x1800026BC (--1CAnimationResource@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    CAnimationResource::~CAnimationResource(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
