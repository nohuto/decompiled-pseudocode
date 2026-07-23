/*
 * XREFs of RtlStdLogStackTrace @ 0x1405A9A64
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1403C5190 (ExpInitializeResource.c)
 *     ExInitializeFastResource2 @ 0x140413B04 (ExInitializeFastResource2.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402277F0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405AA0D4 (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(__int64 a1, int a2)
{
  PVOID v5[34]; // [rsp+20h] [rbp-118h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset(v5, 0, sizeof(v5));
  BackTraceHash = 0;
  HIWORD(v5[1]) = RtlCaptureStackBackTrace(a2 + 1, 0x20u, &v5[2], &BackTraceHash);
  if ( HIWORD(v5[1]) )
    return RtlpStdLogCapturedStackTrace(a1, v5, BackTraceHash);
  else
    return 0LL;
}
