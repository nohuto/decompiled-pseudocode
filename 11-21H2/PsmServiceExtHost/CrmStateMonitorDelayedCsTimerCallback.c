/*
 * XREFs of CrmStateMonitorDelayedCsTimerCallback @ 0x18006E0B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedCsTimerCallback(__int64 a1, void **a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 2;
  return CrmStateMonitorStateSet(a2, &v3, 4uLL, 0);
}
