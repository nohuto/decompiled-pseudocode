/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x180116E80
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180116F94 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011784C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x18012D728 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18012DCF4 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceAddStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_1801881E8 & 1) != 0
    && (dword_1801881E8 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v12) >= 0 )
  {
    v11 = RtlpHpEnvHandle;
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v11);
    v6 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_1801881F0, v6);
        v9 = v8;
        if ( v8 )
        {
          if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v12, a2, v8) )
            RtlStackDbStackRemove(&qword_1801881F0, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v6 )
  {
    v11 = RtlpHpEnvHandle;
    return RtlpHpMetadataFree(v6, &v11);
  }
  return result;
}
