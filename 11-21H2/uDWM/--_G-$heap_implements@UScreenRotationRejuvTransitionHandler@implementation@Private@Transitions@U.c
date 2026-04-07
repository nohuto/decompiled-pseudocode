/*
 * XREFs of ??_G?$heap_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F3890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F3660 (--1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *a1,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::~ScreenRotationRejuvTransitionHandler(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
