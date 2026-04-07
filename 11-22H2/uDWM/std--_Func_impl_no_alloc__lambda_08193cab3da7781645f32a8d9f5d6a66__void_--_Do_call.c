/*
 * XREFs of std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x180104F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800E7A54 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransitionHandler@implementation@Private@.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104C18 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v6; // rbx
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v7; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(winrt::Udwm::Transitions::implementation::UserResizeVisual **)(a1 + 8);
  if ( v3 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(winrt::Udwm::Transitions::implementation::UserResizeVisual *, __int64 *, winrt::Udwm::Transitions::implementation::UserResizeVisual **))(*(_QWORD *)v3 + 24LL))(
      v3,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>,
      &v7);
    v3 = v7;
    if ( v7 )
      v3 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)((char *)v7 - 8);
    result = (__int64)v3;
    v7 = 0LL;
    v4 = (__int64)v3;
    v6 = v3;
  }
  else
  {
    v4 = 0LL;
    result = 0LL;
    v6 = 0LL;
  }
  v8 = v3;
  if ( v4 )
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(v3, v4, a3);
    result = (__int64)v6;
  }
  if ( result )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::unconditional_release_ref((__int64 *)&v8);
  return result;
}
