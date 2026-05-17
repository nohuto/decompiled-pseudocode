/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800B1024
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18010B644 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010B730 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // rax
  _QWORD *v9; // rcx
  signed __int64 result; // rax

  v5 = *(_WORD *)(a1 + 18) & 0xF;
  v6 = 0;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18017B6C0 + 8 * v5), a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v9 = *(_QWORD **)(a1 + 8), *v9 != a1) )
      __fastfail(3u);
    *v9 = v8;
    v6 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_18017B338);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18017B6C0 + 8 * v5));
  if ( v6 )
    return RtlFreeHeap(qword_18017B6C8, 0, a1);
  return result;
}
