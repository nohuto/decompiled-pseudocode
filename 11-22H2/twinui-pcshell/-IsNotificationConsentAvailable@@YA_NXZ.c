/*
 * XREFs of ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1806ADDA0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1806A3594 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@Z @ 0x18064196C (--$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?CreateToastNotifier@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180643EEC (-CreateToastNotifier@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToast.c)
 */

// Hidden C++ exception states: #wind=2
bool IsNotificationConsentAvailable(void)
{
  void (__fastcall ***v0)(_QWORD, __int64 *, __int64 *); // rcx
  signed int v1; // eax
  bool v2; // bl
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-18h] BYREF

  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"Windows.SystemToast.PinConsent", 30);
  v5[0] = v6;
  v5[1] = &qword_180991DC8;
  _InterlockedIncrement64(&qword_180991DC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>,
      &v4,
      v6);
    _InterlockedDecrement64(&qword_180991DC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991DC8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_9963adada1db90a1e471b6d32fa55098_ &>(
      v0,
      (__int64)&v4,
      v5);
  }
  v7 = 0;
  v1 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 64LL))(v4, &v7);
  if ( v1 < 0 )
    winrt::throw_hresult(v1);
  v2 = v7 == 0;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  return v2;
}
