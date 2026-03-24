/*
 * XREFs of _tlgKeywordOn @ 0x1C00070F8
 * Callers:
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004820 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C000A020 & 0x400000000000LL) != 0 && (qword_1C000A028 & 0x400000000000LL) == qword_1C000A028;
}
