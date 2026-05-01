/*
 * XREFs of ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180707744
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801ADA70 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A6608 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@QEAA_NXZ @ 0x1801158DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x18070201C (--$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x180711904 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToLogon(
        wil::details **this)
{
  winrt::hstring *CorrelationId; // rax
  wil::details **v3; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details **v5; // rbx
  const char *v6; // r9
  wil::details *v7; // [rsp+20h] [rbp-A8h] BYREF
  const unsigned __int16 *v8; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v10[15]; // [rsp+38h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::GetImpl'::`2'::impl) )
    {
      CorrelationId = (winrt::hstring *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                          &v7,
                                          &c_bootSystemId);
      v8 = winrt::hstring::c_str(CorrelationId);
      CloudPCTelemetryCore::SubscribedToLogonCompleteEvent<unsigned short const *>((__int64 *)&v8);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v7);
    }
    v10[0] = off_1807CAF00;
    v10[1] = this;
    v10[13] = v10;
    v3 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                            &v7,
                            (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                            (__int64)v9,
                            0);
    v5 = v3;
    if ( this + 14 != v3 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        this + 14,
        *v3);
      *v5 = 0LL;
    }
    if ( v7 )
      wil::details::delete_wnf_subscription_state(v7, v4);
    wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFD,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v6);
  }
}
