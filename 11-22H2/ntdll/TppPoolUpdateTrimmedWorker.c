/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x180069A98
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlWakeConditionVariable @ 0x180069BC0 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x18009F570 (ZwDuplicateObject.c)
 */

__int64 __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v1);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v1);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v7, 0, 0) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (__int64)Heap);
    return RtlReleaseSRWLockExclusive(v1);
  }
  Heap[2] = v7;
  v5 = *(_QWORD **)(a1 + 464);
  if ( *v5 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v5;
  *Heap = a1 + 456;
  *v5 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v6 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v6;
  RtlReleaseSRWLockExclusive(v1);
  result = v6 ^ (v6 >> 11);
  if ( (((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 11)) & 0xFFE) == 0 )
    return RtlWakeConditionVariable(a1 + 448);
  return result;
}
