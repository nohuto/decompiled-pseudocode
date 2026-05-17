/*
 * XREFs of RtlpStdLockRelease @ 0x18010E588
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010E234 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010E314 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010E3F0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E5A8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_18017A188 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
