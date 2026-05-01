/*
 * XREFs of ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800A4F14
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801AFAF4 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A6608 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_205a72f4ba184ca7ab2ac139b0798297__void_ @ 0x1801E48DC (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_205a72f4ba184ca7ab2ac1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToAppEvents(CortanaStoreAppExperienceManager *this)
{
  CortanaStoreAppExperienceManager *v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  CortanaStoreAppExperienceManager *v4; // rbx
  CortanaStoreAppExperienceManager *v5; // rax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  CortanaStoreAppExperienceManager *v7; // rbx
  wil::details *v9[2]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[15]; // [rsp+38h] [rbp-31h] BYREF

  v11[0] = off_1807C5000;
  v11[1] = this;
  v11[13] = v11;
  v2 = (CortanaStoreAppExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                             v9,
                                             &WNF_AI_USER_PACKAGEINSTALL,
                                             v10,
                                             0LL);
  v4 = v2;
  if ( (CortanaStoreAppExperienceManager *)((char *)this + 368) != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 368,
      *(_QWORD *)v2);
    *(_QWORD *)v4 = 0LL;
  }
  if ( v9[0] )
    wil::details::delete_wnf_subscription_state(v9[0], v3);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v10);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_205a72f4ba184ca7ab2ac139b0798297__void_(
    v10,
    this);
  v5 = (CortanaStoreAppExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                             v9,
                                             &WNF_AI_USER_PACKAGEUNINSTALL,
                                             v10,
                                             0LL);
  v7 = v5;
  if ( (CortanaStoreAppExperienceManager *)((char *)this + 376) != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 376,
      *(_QWORD *)v5);
    *(_QWORD *)v7 = 0LL;
  }
  if ( v9[0] )
    wil::details::delete_wnf_subscription_state(v9[0], v6);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v10);
  return 0LL;
}
