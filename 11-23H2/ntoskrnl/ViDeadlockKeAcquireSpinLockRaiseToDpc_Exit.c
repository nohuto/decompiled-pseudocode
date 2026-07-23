/*
 * XREFs of ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140AD9330
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD6DCC (VfDeadlockAcquireResource.c)
 */

PVOID __fastcall ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 5, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
