/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003C084 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0011078 & 0x400000000000LL) != 0 && (qword_1C0011080 & 0x400000000000LL) == qword_1C0011080;
}
