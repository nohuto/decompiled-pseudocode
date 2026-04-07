/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F864C
 * Callers:
 *     ??1?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x1800F79A0 (--1-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F7A14 (_lambda_c60948a4075e9d25cd4406f3dd63722d_--operator().c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x180045348 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference((__int64)v1);
  if ( !(_DWORD)result )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
