/*
 * XREFs of ?CreateToastNotifier@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180643EEC
 * Callers:
 *     ??$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@Z @ 0x18064196C (--$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x180643F44 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180644CB0 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1806ADDA0 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
