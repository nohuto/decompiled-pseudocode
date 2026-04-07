/*
 * XREFs of ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@UEAAKXZ @ 0x180045310
 * Callers:
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@W7EAAKXZ @ 0x180063A20 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345_ea_180063A20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,Udwm::Transitions::ITransitionStateNative,Udwm::Transitions::ITransitionStateNativePrivate>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::NonDelegatingRelease((volatile __int64 *)(a1 + 24));
}
