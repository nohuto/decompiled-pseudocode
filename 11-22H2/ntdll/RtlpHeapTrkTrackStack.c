/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18010BA3C
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18010B738 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180079D50 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

_WORD *RtlpHeapTrkTrackStack()
{
  __int64 v0; // r15
  ULONG v1; // r13d
  _WORD *Heap; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-248h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-238h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185968 + 8 * v3));
  v4 = qword_1801855E0;
  v5 = (_QWORD *)(qword_1801855E0 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    if ( Heap )
    {
      Heap[8] = v0;
      Heap[9] = v1;
      *((_DWORD *)Heap + 5) = 1;
      memmove(Heap + 12, BackTrace, 8 * v0);
      v8 = v4 + 16LL * v1;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *(_QWORD *)Heap = v9;
      *((_QWORD *)Heap + 1) = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      _InterlockedIncrement(&dword_1801855D8);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185968 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185968 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v6 + 8) != (_WORD)v0 )
  {
LABEL_5:
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(v4 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v6 + 3, 8 * v0) != 8 * v0 )
  {
    v4 = qword_1801855E0;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185968 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v6;
}
