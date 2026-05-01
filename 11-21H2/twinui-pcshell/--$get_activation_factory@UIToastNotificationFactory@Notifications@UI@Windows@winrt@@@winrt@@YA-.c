/*
 * XREFs of ??$get_activation_factory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@winrt@@YA?AUIToastNotificationFactory@Notifications@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180583620
 * Callers:
 *     ??$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?AUToastNotification@Notifications@UI@Windows@2@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@Z @ 0x180583368 (--$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@-$factory_cache_entry@UToastNotification.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805836EC (--$get_runtime_activation_factory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@im.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationFactory>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationFactory>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
