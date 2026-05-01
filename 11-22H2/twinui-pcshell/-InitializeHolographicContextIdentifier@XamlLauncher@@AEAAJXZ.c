/*
 * XREFs of ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x1800F3BE0
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x1800A4DE0 (--$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x18016468C (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::function_void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)___lambda_0e377e64aae41d271781dea56205f73a__void_ @ 0x1801FB300 (wistd--function_void___cdecl(enum_Windows--Internal--Shell--Holographic--UserDisplayContext_cons.c)
 *     _lambda_0e377e64aae41d271781dea56205f73a_::_lambda_0e377e64aae41d271781dea56205f73a_ @ 0x1801FE2B0 (_lambda_0e377e64aae41d271781dea56205f73a_--_lambda_0e377e64aae41d271781dea56205f73a_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::InitializeHolographicContextIdentifier(XamlLauncher *this)
{
  XamlLauncher *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details **v7; // rdi
  XamlLauncher *v9; // [rsp+20h] [rbp-59h] BYREF
  wil::details *v10; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v12[128]; // [rsp+40h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = 0LL;
  v9 = 0LL;
  if ( this )
  {
    v2 = this;
    v9 = this;
    Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(&v9);
  }
  v3 = lambda_0e377e64aae41d271781dea56205f73a_::_lambda_0e377e64aae41d271781dea56205f73a_(v11, this, &v9);
  wistd::function_void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::function_void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const______lambda_0e377e64aae41d271781dea56205f73a__void_(
    v12,
    v3);
  v5 = wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
         v4,
         (__int64)v12,
         0,
         &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v5,
      (int)v9);
  v7 = (wil::details **)((char *)this + 168);
  if ( v7 == &v10 )
  {
    if ( v10 )
      wil::details::delete_wnf_subscription_state(v10, v6);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v7,
      v10);
  }
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v12);
  if ( v2 )
    winrt::com_ptr<XamlLauncher>::unconditional_release_ref(&v9);
  return 0LL;
}
