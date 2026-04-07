/*
 * XREFs of ??_EWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F9404
 * Callers:
 *     ??_E?$heap_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800665A0 (--_E-$heap_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F9198 (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::`vector deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::~WindowJointResizeTransitionHandler(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
