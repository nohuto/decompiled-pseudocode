/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1801155F0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115704 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180115FAC (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x1801275E4 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180127BBC (RtlStackDbStackRemove.c)
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
  if ( (dword_18017AE98 & 1) != 0
    && (dword_18017AE98 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v9) >= 0 )
  {
    v8 = RtlpHpEnvHandle;
    v5 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v8);
    v4 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = RtlStackDbStackAdd(&qword_18017AEA0, v4);
        v7 = v6;
        if ( v6 )
        {
          if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v9, a2, v6) )
            RtlStackDbStackRemove(&qword_18017AEA0, v7);
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
