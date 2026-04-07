/*
 * XREFs of ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180044D14
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x180063960 (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@E.c)
 * Callees:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044E00 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::Udwm::Transitions::implementation::TransitionState *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vector deleting destructor'(
        winrt::Udwm::Transitions::implementation::TransitionState *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::implementation::TransitionState *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
