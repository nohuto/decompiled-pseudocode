/*
 * XREFs of ?Release@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEAAKXZ @ 0x1800EDFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?subtract_reference@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@IEAAIXZ @ 0x18006ED90 (-subtract_reference@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transition.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::Release(
        __int64 a1)
{
  volatile __int64 *v1; // rbx
  unsigned int v2; // edi

  v1 = (volatile __int64 *)(a1 + 16);
  v2 = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::subtract_reference(a1 + 16);
  if ( !v2 )
  {
    _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      (*(void (__fastcall **)(volatile __int64 *, _QWORD))(*v1 + 8))(v1, v2 + 1);
  }
  return v2;
}
