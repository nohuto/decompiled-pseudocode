/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x180021E40
 * Callers:
 *     RtlpHpReAllocWithExceptionProtection @ 0x180024214 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(void *a1, __int64 a2, __int64 a3)
{
  __int64 HeapInternal; // rsi
  __int64 v5; // rbx
  unsigned __int16 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  HeapInternal = RtlpReAllocateHeapInternal(a1, (__int64)&v8, (__int64)&v7);
  if ( HeapInternal && v7 && a3 != v8 )
  {
    v5 = *(_QWORD *)(qword_180178B38 + 8LL * v7 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), a3 - v8);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return HeapInternal;
}
