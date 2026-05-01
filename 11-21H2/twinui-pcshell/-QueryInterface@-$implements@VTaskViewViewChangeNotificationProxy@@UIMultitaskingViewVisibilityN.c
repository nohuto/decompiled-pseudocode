/*
 * XREFs of ?QueryInterface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::query_interface(a1 + 8);
}
