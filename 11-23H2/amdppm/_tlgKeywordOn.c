/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003F084 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0012108 & 0x400000000000LL) != 0 && (qword_1C0012110 & 0x400000000000LL) == qword_1C0012110;
}
