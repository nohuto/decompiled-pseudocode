/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140349110
 * Callers:
 *     MiLockPageTableInternal @ 0x140237700 (MiLockPageTableInternal.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1403490E8 (MiTryToAcquireExpansionLockAtDpc.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x140349138 (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
