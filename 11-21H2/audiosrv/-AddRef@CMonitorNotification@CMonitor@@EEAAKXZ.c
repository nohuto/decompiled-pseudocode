/*
 * XREFs of ?AddRef@CMonitorNotification@CMonitor@@EEAAKXZ @ 0x18003BFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::AddRef(CMonitor::CMonitorNotification *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 5);
}
