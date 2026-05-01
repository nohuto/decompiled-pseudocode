/*
 * XREFs of ??$get_activation_factory@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@winrt@@YA?AUIToastNotificationManagerStatics2@Notifications@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180583664
 * Callers:
 *     ??$call@P6A?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@2345@@Z@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics2@2345@@impl@winrt@@QEAA?AUToastNotificationHistory@Notifications@UI@Windows@2@$$QEAP6A?AU34562@AEBUIToastNotificationManagerStatics2@4562@@Z@Z @ 0x1805834C4 (--$call@P6A-AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationMan.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805839C0 (--$get_runtime_activation_factory@UIToastNotificationManagerStatics2@Notifications@UI@Windows@wi.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
