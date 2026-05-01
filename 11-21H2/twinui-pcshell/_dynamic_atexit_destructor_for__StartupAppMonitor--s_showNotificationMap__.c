/*
 * XREFs of _dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMap__ @ 0x180224930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMap__()
{
  std::map<std::wstring,STARTUPAPPINFO>::~map<std::wstring,STARTUPAPPINFO>((void **)&StartupAppMonitor::s_showNotificationMap);
}
