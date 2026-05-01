/*
 * XREFs of ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E2138
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0d1b8a6620457c9a80c81ea79532f28a__void_ @ 0x1800A2E30 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_0d1b8a6620457c9a80c81e.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E3EC0 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange(AcrylicPolicyManager *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  int AgileReference; // esi
  AcrylicPolicyManager *v5; // rax
  AcrylicPolicyManager *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v13[128]; // [rsp+40h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = ((unsigned __int64)this + 144) & -(__int64)(this != 0LL);
  v12 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 144) & -(__int64)(this != 0LL));
  v3 = 0LL;
  v9 = 0LL;
  AgileReference = 0;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_e44a983b_30a7_416c_b8a5_04d032bd352d, v2, &v9);
    v3 = v9;
  }
  v9 = 0LL;
  v11 = v3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  if ( AgileReference < 0 )
  {
    v8 = 188LL;
    goto LABEL_14;
  }
  v9 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_0d1b8a6620457c9a80c81ea79532f28a__void_(
    (__int64)v13,
    &v9);
  v5 = (AcrylicPolicyManager *)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                 v10,
                                 &WNF_DWM_COMPOSITIONCAPABILITIES,
                                 v13,
                                 0LL);
  v6 = v5;
  if ( (AcrylicPolicyManager *)((char *)this + 344) != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 344,
      *(_QWORD *)v5);
    *(_QWORD *)v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v10);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v13);
  if ( !*((_QWORD *)this + 43) )
  {
    AgileReference = -2147024882;
    v8 = 199LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_12;
  }
  AgileReference = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  return (unsigned int)AgileReference;
}
