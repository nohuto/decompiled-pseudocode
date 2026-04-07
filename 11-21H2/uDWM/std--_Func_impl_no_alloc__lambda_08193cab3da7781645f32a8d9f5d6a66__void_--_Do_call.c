/*
 * XREFs of std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call @ 0x1800FFCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800FFAC8 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_08193cab3da7781645f32a8d9f5d6a66__void_::_Do_call(__int64 a1)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v1; // rcx
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v2; // rbx
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v3; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(winrt::Udwm::Transitions::implementation::UserResizeVisual **)(a1 + 8);
  if ( v1 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(winrt::Udwm::Transitions::implementation::UserResizeVisual *, __int64 *, winrt::Udwm::Transitions::implementation::UserResizeVisual **))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>,
      &v3);
    v1 = v3;
    if ( v3 )
      v1 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)((char *)v3 - 8);
    v3 = 0LL;
    v2 = v1;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = v1;
  if ( v2 )
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(v1);
    winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref((__int64 *)&v4);
  }
}
