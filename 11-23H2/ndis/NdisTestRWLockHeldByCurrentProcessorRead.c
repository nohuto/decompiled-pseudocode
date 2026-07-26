/*
 * XREFs of NdisTestRWLockHeldByCurrentProcessorRead @ 0x1C00AC780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall NdisTestRWLockHeldByCurrentProcessorRead(__int64 a1)
{
  return *(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(a1 + 32)) != 0LL;
}
