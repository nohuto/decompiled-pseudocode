/*
 * XREFs of _tlgKeywordOn @ 0x1C00077C8
 * Callers:
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004E50 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdConfiguration @ 0x1C0011560 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C000A020 & 0x400000000000LL) != 0 && (qword_1C000A028 & 0x400000000000LL) == qword_1C000A028;
}
