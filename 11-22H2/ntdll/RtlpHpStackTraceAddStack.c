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

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) != 0
    && (dword_180185108 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v9) >= 0 )
  {
    v8 = RtlpHpEnvHandle;
    v5 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v8);
    v4 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = RtlStackDbStackAdd(&qword_180185110, v4);
        v7 = v6;
        if ( v6 )
        {
          if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v9, a2, v6) )
            RtlStackDbStackRemove(&qword_180185110, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v4 )
  {
    v8 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v4, &v8);
  }
}
