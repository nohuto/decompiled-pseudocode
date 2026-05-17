/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800AEA74
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18010B814 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010B8FC (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
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
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180185968 + 8 * v2));
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    *(_QWORD *)(v5 + 8) = v6;
    _InterlockedDecrement(&dword_1801855D8);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180185968 + 8 * v2));
  if ( v3 )
    return RtlFreeHeap(qword_180185970, 0, a1);
  return result;
}
