/*
 * XREFs of _tlgKeywordOn @ 0x1C00087D0
 * Callers:
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C000875C (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0035A2C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C004AE6C (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  return (a2 & qword_1C0016048) != 0 && (a2 & qword_1C0016050) == qword_1C0016050;
}
