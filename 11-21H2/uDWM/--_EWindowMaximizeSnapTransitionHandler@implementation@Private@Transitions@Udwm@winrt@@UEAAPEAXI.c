/*
 * XREFs of ??_EWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F7500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F73F4 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

CAnimationResource **__fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::`vector deleting destructor'(
        CAnimationResource **this,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::~WindowMaximizeSnapTransitionHandler(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
