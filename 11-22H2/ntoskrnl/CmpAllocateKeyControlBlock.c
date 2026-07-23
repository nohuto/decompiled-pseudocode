/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A17A38
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140A16EB4 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D0A0 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435400 (memset.c)
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
    _InterlockedIncrement64(qword_140D55300);
    memset(v0, 0, 0x138uLL);
  }
  return v1;
}
