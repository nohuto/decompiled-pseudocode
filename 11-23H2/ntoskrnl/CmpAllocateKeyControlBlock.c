/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A17C38
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140A170B4 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D190 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID v0; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  v0 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v1 = v0;
  if ( v0 )
  {
    _InterlockedIncrement64(qword_140D552D0);
    memset(v0, 0, 0x138uLL);
  }
  return v1;
}
