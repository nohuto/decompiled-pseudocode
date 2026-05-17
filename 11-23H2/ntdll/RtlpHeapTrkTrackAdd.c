/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18010CBD8
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18010C6A0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpHeapTrkHash @ 0x1800B0BDE (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x18010CEDC (RtlpHeapTrkTrackStack.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax

  result = RtlAllocateHeap(qword_180188A40, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v8 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A20 + 8 * v8));
      v9 = qword_1801886A0 + 16 * v6;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *v5 = v10;
      v5[1] = v9;
      *(_QWORD *)(v10 + 8) = v5;
      *(_QWORD *)v9 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A20 + 8 * v8));
    }
    else
    {
      return RtlFreeHeap(qword_180188A40, 0, (__int64)v5);
    }
  }
  return result;
}
