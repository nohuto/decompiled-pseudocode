/*
 * XREFs of ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7F40
 * Callers:
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7968 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x1800F7E30 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_298ff7ed3f48e3.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18002FA40 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F87F8 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  signed int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)this + 32);
  if ( !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4, &v5) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 152LL))(*(_QWORD *)v1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    if ( v1 != (winrt::Windows::Foundation::IUnknown *)&v5 )
    {
      if ( *(_QWORD *)v1 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
      *(_QWORD *)v1 = 0LL;
    }
  }
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset((char *)this + 64);
  v4 = (_QWORD *)((char *)this + 40);
  if ( (__int64 *)((char *)this + 40) != &v5 )
  {
    if ( *v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)this + 40));
    *v4 = 0LL;
  }
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CompleteState(this);
}
