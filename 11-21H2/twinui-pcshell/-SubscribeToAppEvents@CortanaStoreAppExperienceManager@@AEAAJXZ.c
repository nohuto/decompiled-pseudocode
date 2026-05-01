/*
 * XREFs of ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800E32E0
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x18014DCF4 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800E4560 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164B98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259@@@details@w.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2883540b7e891457e3ad1d7f25f37c17__void_ @ 0x1801976BC (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_2883540b7e891457e3ad1d.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToAppEvents(
        CortanaStoreAppExperienceManager *this,
        __int64 a2)
{
  CortanaStoreAppExperienceManager *v3; // rax
  CortanaStoreAppExperienceManager *v4; // rbx
  CortanaStoreAppExperienceManager *v5; // rax
  CortanaStoreAppExperienceManager *v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v10[15]; // [rsp+38h] [rbp-31h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaWNF_24838259>::GetImpl'::`2'::impl,
    a2);
  v10[0] = off_180642AE8;
  v10[1] = this;
  v10[13] = v10;
  v3 = (CortanaStoreAppExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                             v8,
                                             &WNF_AI_USER_PACKAGEINSTALL,
                                             v9,
                                             0LL);
  v4 = v3;
  if ( (CortanaStoreAppExperienceManager *)((char *)this + 368) != v3 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 368,
      *(_QWORD *)v3);
    *(_QWORD *)v4 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v8);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v9);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2883540b7e891457e3ad1d7f25f37c17__void_(
    v9,
    this);
  v5 = (CortanaStoreAppExperienceManager *)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                             v8,
                                             &WNF_AI_USER_PACKAGEUNINSTALL,
                                             v9,
                                             0LL);
  v6 = v5;
  if ( (CortanaStoreAppExperienceManager *)((char *)this + 376) != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 376,
      *(_QWORD *)v5);
    *(_QWORD *)v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(v8);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v9);
  return 0LL;
}
