/*
 * XREFs of ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x1800A4A18
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?make_weak_ref@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800A4BD8 (-make_weak_ref@-$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5A8C (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A5ACC (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SubscribeEvents(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  wil::details *v2; // rax
  int v3; // eax
  __int64 v4; // rax
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v5; // rax
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v7; // rdi
  wil::details *weak_ref; // rax
  int v9; // eax
  __int64 v10; // rax
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v12; // rdx
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-69h] BYREF
  wil::details *v15; // [rsp+28h] [rbp-61h] BYREF
  wil::details *v16; // [rsp+30h] [rbp-59h] BYREF
  void **pExceptionObject; // [rsp+38h] [rbp-51h] BYREF
  const char *v18; // [rsp+40h] [rbp-49h]
  __int64 v19; // [rsp+48h] [rbp-41h]
  _BYTE v20[8]; // [rsp+50h] [rbp-39h] BYREF
  void **v21; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-29h]
  void ***v23; // [rsp+C0h] [rbp+37h]

  v2 = (wil::details *)((__int64 (*)(void))winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref)();
  if ( !v2 )
  {
    v19 = 0LL;
    v18 = "bad allocation";
    pExceptionObject = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)&pExceptionObject;
  }
  v15 = v2;
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v14);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v15);
  v4 = v14;
  v14 = 0LL;
  v21 = &wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::`vftable';
  v22 = v4;
  v23 = &v21;
  v5 = (SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                                                    &v16,
                                                                    &WNF_ENTR_ENABLETOUCHKEYBOARDAUTOINVOKE_POLICY_VALUE_CHANGED,
                                                                    v20,
                                                                    0LL);
  v7 = v5;
  if ( (SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)((char *)this + 96) != v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 96,
      *(_QWORD *)v5);
    *(_QWORD *)v7 = 0LL;
  }
  if ( v16 )
    wil::details::delete_wnf_subscription_state(v16, v6);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v20);
  if ( v14 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
  weak_ref = (wil::details *)winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::make_weak_ref(this);
  if ( !weak_ref )
  {
    v19 = 0LL;
    v18 = "bad allocation";
    pExceptionObject = &std::bad_alloc::`vftable';
    throw (std::bad_alloc *)&pExceptionObject;
  }
  v16 = weak_ref;
  v14 = 0LL;
  v9 = (*(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v14);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v16);
  v10 = v14;
  v14 = 0LL;
  v21 = &wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::`vftable';
  v22 = v10;
  v23 = &v21;
  wnf_subscription = (SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)wil::make_wnf_subscription_nothrow<unsigned long>(
                                                                                  &v15,
                                                                                  &WNF_TKBN_DESKTOP_MODE_AUTO_IHM,
                                                                                  v20);
  v13 = wnf_subscription;
  if ( (SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *)((char *)this + 104) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (char *)this + 104,
      *(_QWORD *)wnf_subscription);
    *(_QWORD *)v13 = 0LL;
  }
  if ( v15 )
    wil::details::delete_wnf_subscription_state(v15, v12);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v20);
  if ( v14 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v14);
}
