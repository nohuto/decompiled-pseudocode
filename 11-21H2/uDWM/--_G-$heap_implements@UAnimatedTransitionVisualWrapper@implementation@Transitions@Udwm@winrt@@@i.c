/*
 * XREFs of ??_G?$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180044EBC
 * Callers:
 *     ??_E?$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800638E0 (--_E-$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@i.c)
 * Callees:
 *     ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044F0C (--1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::~AnimatedTransitionVisualWrapper(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
