/*
 * XREFs of ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit @ 0x140ADA2D0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD7DAC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 16), 6, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
