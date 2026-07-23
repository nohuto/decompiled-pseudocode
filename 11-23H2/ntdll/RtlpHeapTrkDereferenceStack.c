/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800B0B44
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18010CC84 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x18010CD6C (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

void __fastcall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rcx
  PVOID *v6; // rax

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A38 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_1801886A8);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A38 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
