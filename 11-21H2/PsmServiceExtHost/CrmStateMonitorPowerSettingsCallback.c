/*
 * XREFs of CrmStateMonitorPowerSettingsCallback @ 0x1800473D0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorPowerSettingsCallback(void **a1, __int64 a2, __int64 a3)
{
  CrmStateMonitorStateSet(a1, (const void *)(a3 + 20), *(unsigned int *)(a3 + 16), 0);
  return 0LL;
}
