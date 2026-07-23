/*
 * XREFs of sub_1405E4840 @ 0x1405E4840
 * Callers:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1403A5920 @ 0x1403A5920 (sub_1403A5920.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E4EC4 @ 0x1405E4EC4 (sub_1405E4EC4.c)
 */

__int64 __fastcall sub_1405E4840(PKSPIN_LOCK SpinLock, int a2)
{
  PVOID v5[34]; // [rsp+20h] [rbp-118h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset(v5, 0, sizeof(v5));
  BackTraceHash = 0;
  HIWORD(v5[1]) = RtlCaptureStackBackTrace(a2 + 1, 0x20u, &v5[2], &BackTraceHash);
  if ( HIWORD(v5[1]) )
    return sub_1405E4EC4(SpinLock);
  else
    return 0LL;
}
