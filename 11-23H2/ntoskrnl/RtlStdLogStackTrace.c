/*
 * XREFs of RtlStdLogStackTrace @ 0x1405A94F4
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1403C4FB0 (ExpInitializeResource.c)
 *     ExInitializeFastResource2 @ 0x140413770 (ExInitializeFastResource2.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402276E0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405A9B64 (RtlpStdLogCapturedStackTrace.c)
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
