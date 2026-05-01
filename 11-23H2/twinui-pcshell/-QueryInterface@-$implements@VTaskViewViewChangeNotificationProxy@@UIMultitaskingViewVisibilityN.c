/*
 * XREFs of ?QueryInterface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DB300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::query_interface(
           a1 + 8,
           a2,
           a3);
}
