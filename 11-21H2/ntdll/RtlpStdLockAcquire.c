/*
 * XREFs of RtlpStdLockAcquire @ 0x18010E568
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x18010E020 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x18010E234 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x18010E314 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x18010E3F0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x18010E5A8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !byte_18017A188 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
