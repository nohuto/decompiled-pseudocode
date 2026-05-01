/*
 * XREFs of ?GetTemplateContent@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@Windows@3@AEBW4ToastTemplateType@Notifications@UI@83@@Z @ 0x180586904
 * Callers:
 *     ??$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUXmlDocument@Dom@Xml@Data@Windows@2@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@Z @ 0x1805830B0 (--$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::GetTemplateContent(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
