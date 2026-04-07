/*
 * XREFs of ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044E00 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044F0C (--1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?NonDelegatingRelease@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045270 (-NonDelegatingRelease@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transiti.c)
 *     ?Release@?$produce_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x18005EFC0 (-Release@-$produce_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@U.c)
 *     ??1?$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@34@@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F0A8C (--1-$AnimatedTransitionVisualWrapper_base@UAnimatedTransitionVisualWrapper@implementation@Transi.c)
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F79BC (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F864C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong(2 * v1);
}
