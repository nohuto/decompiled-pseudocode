/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A17988
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140A16E04 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14022D080 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x140435A00 (memset.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID v0; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  v0 = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
  v1 = v0;
  if ( v0 )
  {
    _InterlockedIncrement64(qword_140D552D0);
    memset(v0, 0, 0x138uLL);
  }
  return v1;
}
