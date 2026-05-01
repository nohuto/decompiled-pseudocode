/*
 * XREFs of CrmStateMonitorPostShellReadyTimerCallback @ 0x18006E440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorPostShellReadyTimerCallback(__int64 a1, __int64 a2)
{
  return CrmStateMonitorPostShellReadySetAndReset(a2, 1);
}
