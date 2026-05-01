/*
 * XREFs of CrmStateMonitorPostResumeTimerCallback @ 0x18006E3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorPostResumeTimerCallback(__int64 a1, __int64 a2)
{
  return CrmStateMonitorPostResumeSetAndReset(a2, 1);
}
