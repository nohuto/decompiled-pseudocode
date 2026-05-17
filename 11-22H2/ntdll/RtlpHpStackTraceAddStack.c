/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1801159D0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpMetadataFree @ 0x180064850 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115AE4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011639C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x18012C234 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18012C800 (RtlStackDbStackRemove.c)
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
  if ( (dword_180185108 & 1) != 0
    && (dword_180185108 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v12) >= 0 )
  {
    v11 = RtlpHpEnvHandle;
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v11);
    v6 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_180185110, v6);
        v9 = v8;
        if ( v8 )
        {
          if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v12, a2, v8) )
            RtlStackDbStackRemove(&qword_180185110, v9);
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
