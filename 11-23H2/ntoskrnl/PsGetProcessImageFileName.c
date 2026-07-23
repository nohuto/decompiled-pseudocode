/*
 * XREFs of PsGetProcessImageFileName @ 0x14034E690
 * Callers:
 *     ObCheckRefTraceProcess @ 0x1406BA298 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     NtCreateIoRing @ 0x14094A2B0 (NtCreateIoRing.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098EE1C (PopDiagTraceExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
