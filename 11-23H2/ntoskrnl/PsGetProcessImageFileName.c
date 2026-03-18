/*
 * XREFs of PsGetProcessImageFileName @ 0x14034E4F0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     NtCreateIoRing @ 0x14094A0B0 (NtCreateIoRing.c)
 *     PnpLogVetoInformation @ 0x1409643E0 (PnpLogVetoInformation.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098EC1C (PopDiagTraceExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
