/*
 * XREFs of ?Release@?$produce_base@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x18005EFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::Release(
        unsigned __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)((a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64));
  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)v1);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return v2;
}
