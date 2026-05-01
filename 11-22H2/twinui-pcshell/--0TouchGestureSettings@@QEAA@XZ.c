/*
 * XREFs of ??0TouchGestureSettings@@QEAA@XZ @ 0x1800E8310
 * Callers:
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18008A290 (--0TouchGestureComponent@@QEAA@XZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800A5020 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180172AE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
TouchGestureSettings *__fastcall TouchGestureSettings::TouchGestureSettings(TouchGestureSettings *this)
{
  wil::details **v2; // rsi
  wil::details **wnf; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details **v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  wil::details *v9[3]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[15]; // [rsp+48h] [rbp-90h] BYREF

  v9[1] = this;
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &winrt::impl::heap_implements<TouchGestureSettings>::`vftable'{for `winrt::impl::producers_base<TouchGestureSettings,std::tuple<ITouchGestureSettings>>'};
  *((_QWORD *)this + 1) = &TouchGestureSettings::`vftable'{for `winrt::impl::root_implements<TouchGestureSettings,ITouchGestureSettings>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 7;
  *((_QWORD *)this + 12) = 0LL;
  v2 = (wil::details **)((char *)this + 104);
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  v11[0] = off_1807A2B60;
  v11[1] = this;
  v11[13] = v11;
  wnf = (wil::details **)wil::make_wnf_subscription<unsigned long>(
                           v9,
                           (__int64)&WNF_SHEL_LOCKSCREEN_ACTIVE,
                           (__int64)v10);
  v5 = wnf;
  if ( v2 != wnf )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v2,
      *wnf);
    *v5 = 0LL;
  }
  if ( v9[0] )
    wil::details::delete_wnf_subscription_state(v9[0], v4);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v10);
  LOBYTE(v6) = 3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v7,
    v6);
  return this;
}
