/*
 * XREFs of _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__ @ 0x180009A90
 * Callers:
 *     <none>
 * Callees:
 *     ??0mutex@std@@QEAA@XZ @ 0x180176F08 (--0mutex@std@@QEAA@XZ.c)
 */

int dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__()
{
  std::mutex::mutex((std::mutex *)&StartupAppMonitor::s_showNotificationMapMutex);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMapMutex__);
}
