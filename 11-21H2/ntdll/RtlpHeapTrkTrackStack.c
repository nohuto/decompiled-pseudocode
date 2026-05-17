/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18010B870
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18010B568 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCaptureStackBackTrace @ 0x18007FE00 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 RtlpHeapTrkTrackStack()
{
  __int64 v0; // r15
  ULONG v1; // r13d
  __int64 Heap; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-248h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-238h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_18017B6C8, 0, 8 * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18017B6C0 + 8 * v3), v4, v5, v6);
  v7 = qword_18017B340;
  v8 = (_QWORD *)(qword_18017B340 + 16LL * v1);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_6:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8 * v0);
      v11 = v7 + 16LL * v1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Heap = v12;
      *(_QWORD *)(Heap + 8) = v11;
      *(_QWORD *)(v12 + 8) = Heap;
      *(_QWORD *)v11 = Heap;
      _InterlockedIncrement(&dword_18017B338);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18017B6C0 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18017B6C0 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v9 + 8) != (_WORD)v0 )
  {
LABEL_5:
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(v7 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v9 + 3, 8 * v0) != 8 * v0 )
  {
    v7 = qword_18017B340;
    goto LABEL_5;
  }
  ++*((_DWORD *)v9 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18017B6C0 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_18017B6C8, 0, Heap);
  return (__int64)v9;
}
