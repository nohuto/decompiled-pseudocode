/*
 * XREFs of ??_G?$heap_implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800F4C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F4B90 (--1ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *a1,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::~ScreenRotationResponsiveTransitionHandler(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
