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

__int64 __fastcall RtlpHpTagReAllocateHeap(int a1, int a2, __int64 a3, int a4)
{
  __int64 HeapInternal; // rsi
  __int64 v6; // rbx
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  HeapInternal = RtlpReAllocateHeapInternal(a1, a4, a2, a3, (__int64)&v9, (__int64)&v8);
  if ( HeapInternal && v8 && a3 != v9 )
  {
    v6 = *(_QWORD *)(qword_180178B38 + 8LL * v8 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a3 - v9);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
  }
  return HeapInternal;
}
