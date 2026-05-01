/*
 * XREFs of ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180127B90
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E9D30 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0d1b8a6620457c9a80c81ea79532f28a__void_ @ 0x1800EA2D4 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_0d1b8a6620457c9a80c81e.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange(wil::details **this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  int AgileReference; // edi
  wil::details **v5; // rax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details **v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-69h] BYREF
  wil::details *v11; // [rsp+28h] [rbp-61h] BYREF
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = (unsigned __int64)(this + 18) & -(__int64)(this != 0LL);
  v13 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))((unsigned __int64)(this + 18) & -(__int64)(this != 0LL));
  v3 = 0LL;
  v10 = 0LL;
  AgileReference = 0;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    AgileReference = RoGetAgileReference(0LL, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, v2, &v10);
    v3 = v10;
  }
  v10 = 0LL;
  v12 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( AgileReference < 0 )
  {
    v9 = 188LL;
    goto LABEL_16;
  }
  v10 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_0d1b8a6620457c9a80c81ea79532f28a__void_(
    (__int64)v14,
    &v10);
  v5 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                          &v11,
                          (__int64)&WNF_DWM_COMPOSITIONCAPABILITIES,
                          (__int64)v14,
                          0);
  v7 = v5;
  if ( this + 43 != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 43,
      *v5);
    *v7 = 0LL;
  }
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v6);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v14);
  if ( !this[43] )
  {
    AgileReference = -2147024882;
    v9 = 199LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)AgileReference,
      v10);
    goto LABEL_14;
  }
  AgileReference = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return (unsigned int)AgileReference;
}
