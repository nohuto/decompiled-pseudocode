/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18005C018
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x18005C23C (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wistd::function_void___cdecl(_SEB_EVENT_HEADER_const_&)_::function_void___cdecl(_SEB_EVENT_HEADER_const_&)___lambda_4a5b095ff0d9349924b6274c14ba96ea__void_ @ 0x1800A2DE0 (wistd--function_void___cdecl(_SEB_EVENT_HEADER_const_-)_--function_void___cdecl(_SEB_EVENT_HEADE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(AcrylicPolicyManager *this)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // rbx
  int AgileReference; // esi
  __int64 v6; // rdx
  AcrylicPolicyManager *wnf; // rax
  AcrylicPolicyManager *v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-69h] BYREF
  char *v11; // [rsp+30h] [rbp-61h] BYREF
  char v12[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v14[128]; // [rsp+48h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( this )
  {
    v2 = (char *)this + 136;
    v3 = (char *)this + 136;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  v11 = v2;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = 0LL;
  v10 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    AgileReference = RoGetAgileReference(0LL, &GUID_18661d31_3944_41b1_bd96_da3defc2c268, v2, &v10);
    v4 = v10;
  }
  v10 = 0LL;
  v13 = v4;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)AgileReference,
      v10);
  }
  else
  {
    v10 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    wistd::function_void___cdecl__SEB_EVENT_HEADER_const____::function_void___cdecl__SEB_EVENT_HEADER_const______lambda_4a5b095ff0d9349924b6274c14ba96ea__void_(
      v14,
      &v10);
    wnf = (AcrylicPolicyManager *)wil::make_wnf_subscription<_SEB_EVENT_HEADER>(v12, v6, v14);
    v8 = wnf;
    if ( (AcrylicPolicyManager *)((char *)this + 336) != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        (char *)this + 336,
        *(_QWORD *)wnf);
      *(_QWORD *)v8 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v12);
    wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>(v14);
    AgileReference = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return (unsigned int)AgileReference;
}
