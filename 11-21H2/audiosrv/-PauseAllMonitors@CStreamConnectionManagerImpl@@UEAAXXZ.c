/*
 * XREFs of ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18011DF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamConnectionManagerImpl::PauseAllMonitors(CMonitorManager **this)
{
  CMonitorManager::Pause(this[1]);
}
