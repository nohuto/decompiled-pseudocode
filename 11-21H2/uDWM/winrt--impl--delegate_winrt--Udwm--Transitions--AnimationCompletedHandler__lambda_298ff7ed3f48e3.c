/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x180007910
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800079D8 (-unconditional_release_ref@-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180012304 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v1; // rcx
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v2; // rbx
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v4; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler **)(a1 + 8);
  if ( v1 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *, __int64 *, winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler **))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
      &v4);
    v1 = v4;
    if ( v4 )
      v1 = (winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)v4 - 16);
    v4 = 0LL;
    v2 = v1;
  }
  else
  {
    v2 = 0LL;
  }
  v5 = v1;
  if ( v2 )
  {
    winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(v1);
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::unconditional_release_ref(&v5);
  }
  return 0LL;
}
