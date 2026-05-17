/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800B0B44
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18010CCB4 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010CD9C (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v5; // rcx
  _QWORD *v6; // rax
  signed __int64 result; // rax

  v2 = *(_WORD *)(a1 + 18) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A38 + 8 * v2));
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    *(_QWORD *)(v5 + 8) = v6;
    _InterlockedDecrement(&dword_1801886A8);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A38 + 8 * v2));
  if ( v3 )
    return RtlFreeHeap(qword_180188A40, 0, a1);
  return result;
}
