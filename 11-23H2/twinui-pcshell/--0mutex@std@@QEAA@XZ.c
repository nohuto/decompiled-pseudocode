/*
 * XREFs of ??0mutex@std@@QEAA@XZ @ 0x1801AF808
 * Callers:
 *     _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMapMutex__ @ 0x18000A3F0 (_dynamic_initializer_for__StartupAppMonitor--s_showNotificationMapMutex__.c)
 * Callees:
 *     <none>
 */

std::mutex *__fastcall std::mutex::mutex(std::mutex *this)
{
  _Mtx_init_in_situ(this, 2);
  return this;
}
