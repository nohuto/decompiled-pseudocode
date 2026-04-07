/*
 * XREFs of ??1?$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@34@@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F0A8C
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper_::_1_::dtor$0 @ 0x180065C0A (_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper--AnimatedTransitionVi.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::~AnimatedTransitionVisualWrapper_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference(a1 + 16);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
