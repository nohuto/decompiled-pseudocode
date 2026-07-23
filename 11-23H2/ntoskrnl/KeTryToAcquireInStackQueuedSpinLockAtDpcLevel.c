/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1403493A0
 * Callers:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140349378 (MiTryToAcquireExpansionLockAtDpc.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1403493C8 (KxTryToAcquireQueuedSpinLock.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
