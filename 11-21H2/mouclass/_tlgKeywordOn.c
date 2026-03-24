/*
 * XREFs of _tlgKeywordOn @ 0x1C0006D28
 * Callers:
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004A04 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C0009020 & 0x400000000000LL) != 0 && (qword_1C0009028 & 0x400000000000LL) == qword_1C0009028;
}
