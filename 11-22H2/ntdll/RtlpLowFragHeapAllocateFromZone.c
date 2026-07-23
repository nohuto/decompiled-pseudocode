/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x18006FACC
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

unsigned __int64 __fastcall RtlpLowFragHeapAllocateFromZone(PRTL_SRWLOCK SRWLock, unsigned int a2)
{
  __int64 v3; // r14
  unsigned __int64 Value; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *Heap; // rax
  _RTL_SRWLOCK *v9; // rdi
  PRTL_SRWLOCK *v10; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    Value = SRWLock[v3 + 410].Value;
    if ( Value )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(Value + 16), 1u);
      if ( (unsigned int)v5 < 0xF )
        return (v5 << 6) + Value + 32;
    }
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(SRWLock[3].Ptr, 0x800000u, 0x3F0uLL);
    v9 = Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)&Heap[2].0 = 1;
    v6 = ((unsigned __int64)&Heap[4].Ptr + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( Value == SRWLock[v3 + 410].Value )
      break;
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlFreeHeap(SRWLock[3].Ptr, 0x800000u, v9);
  }
  v10 = (PRTL_SRWLOCK *)SRWLock[2].Value;
  if ( *v10 != &SRWLock[1] )
    __fastfail(3u);
  v9[1].Value = (unsigned __int64)v10;
  v9->Value = (unsigned __int64)&SRWLock[1];
  *v10 = v9;
  SRWLock[2].Value = (unsigned __int64)v9;
  SRWLock[v3 + 410].Value = (unsigned __int64)v9;
  RtlReleaseSRWLockExclusive(SRWLock);
  return v6;
}
