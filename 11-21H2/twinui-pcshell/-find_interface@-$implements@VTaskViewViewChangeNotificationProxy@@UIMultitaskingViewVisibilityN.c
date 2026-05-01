/*
 * XREFs of ?find_interface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F7C10
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::find_interface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // al
  __int64 v5; // r8

  v4 = winrt::operator==(a2, &winrt::impl::guid_v<IMultitaskingViewVisibilityNotification>, a1, a4);
  return (v5 - 8) & -(__int64)(v4 != 0);
}
