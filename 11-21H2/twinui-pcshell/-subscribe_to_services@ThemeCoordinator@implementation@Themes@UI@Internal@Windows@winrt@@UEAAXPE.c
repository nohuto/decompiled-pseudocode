/*
 * XREFs of ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800B4660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x18005C210 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1800B4CD0 (--4-$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvid.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800E44D8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E4540 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E47C8 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::subscribe_to_services(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this,
        struct IServiceProvider *a2)
{
  __int64 (__fastcall **v3)(char *, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 v5; // rbx
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *wnf_subscription; // rax
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-69h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v12[15]; // [rsp+48h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((char *)this + 88, a2);
  v9[0] = 0LL;
  v3 = (__int64 (__fastcall **)(char *, GUID *, __int64 *))*((_QWORD *)this - 1);
  v8 = 0LL;
  v4 = (*v3)((char *)this - 8, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v8);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, v9);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70B,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v4);
  v9[1] = (__int64)this - 8;
  v5 = v9[0];
  if ( v9[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
  v12[0] = &wistd::__function::__func<_lambda_44650c9621fd3a33d583d03ae4e77f70_,void (unsigned long const &)>::`vftable';
  v12[1] = (char *)this - 8;
  v10 = 0LL;
  v12[2] = v5;
  v12[13] = v12;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v10);
  wnf_subscription = (winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                                                 &v8,
                                                                                                 &WNF_SHEL_PACKAGE_SERVICING_STATUS,
                                                                                                 v11);
  v7 = wnf_subscription;
  if ( (winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 96) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 96,
      *(_QWORD *)wnf_subscription);
    *(_QWORD *)v7 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(&v8);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v11);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v9);
}
