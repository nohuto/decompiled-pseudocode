/*
 * XREFs of _tlgKeywordOn @ 0x1C00070B0
 * Callers:
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C000703C (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00348AC (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0047C74 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return (a2 & qword_1C0015048) != 0 && (a2 & qword_1C0015050) == qword_1C0015050;
}
