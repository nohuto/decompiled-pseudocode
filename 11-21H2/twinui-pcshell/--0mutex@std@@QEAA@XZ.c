/*
 * XREFs of ??0mutex@std@@QEAA@XZ @ 0x180176F08
 * Callers:
 *     _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__ @ 0x180009A90 (_dynamic_initializer_for__StartupAppMonitor--s_showNotificationMapMutex__.c)
 * Callees:
 *     <none>
 */

std::mutex *__fastcall std::mutex::mutex(std::mutex *this)
{
  _Mtx_init_in_situ(this, 2);
  return this;
}
