/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045270
 * Callers:
 *     ?Release@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEAAKXZ @ 0x180045260 (-Release@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1.c)
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@UEAAKXZ @ 0x180045310 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::NonDelegatingRelease(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v4; // r8

  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference(a1);
  if ( !v2 )
  {
    v4 = _InterlockedExchange64(a1 + 1, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v4);
  }
  return v2;
}
