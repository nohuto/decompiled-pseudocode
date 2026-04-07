/*
 * XREFs of _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F9288
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Invoke @ 0x1800F9860 (winrt--impl--delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_c60948a4075e_ea_1800F9860.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7A54 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1974 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800FAB50 (-get@-$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_c60948a4075e9d25cd4406f3dd63722d_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp+10h] BYREF
  __int64 v8; // [rsp+38h] [rbp+18h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
      &v7);
    v3 = v7;
    if ( v7 )
      v3 = v7 - 8;
    v2 = v3;
    v4 = v3;
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  v8 = v3;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v4 + 176))-- != 1 )
      goto LABEL_15;
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 1, &v7);
    v6 = v7;
    if ( v7 )
      winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(&v7);
  }
  else
  {
    winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(a1 + 1, &v7);
    v6 = v7;
    if ( v7 )
      winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(&v7);
  }
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
LABEL_15:
  if ( v3 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref(&v8);
}
