/*
 * XREFs of _tlgKeywordOn @ 0x1C0007478
 * Callers:
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004AE0 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C000A020 & 0x400000000000LL) != 0 && (qword_1C000A028 & 0x400000000000LL) == qword_1C000A028;
}
