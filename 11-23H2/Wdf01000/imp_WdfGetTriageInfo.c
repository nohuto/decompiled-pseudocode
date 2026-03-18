/*
 * XREFs of imp_WdfGetTriageInfo @ 0x1C0009560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_WDF_TRIAGE_INFO *__fastcall imp_WdfGetTriageInfo(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  return &g_WdfTriageInfo;
}
