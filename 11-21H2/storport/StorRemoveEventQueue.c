/*
 * XREFs of StorRemoveEventQueue @ 0x1C003DC3C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000BF10 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C003DD00 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int *v4; // rbx
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned int *)(a2 + 36) + 1LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = &a1[16 * v2];
  CurrentIrql = KeGetCurrentIrql();
  v7 = (KSPIN_LOCK *)(v4 + 10);
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v7, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    StorRemoveEventQueueInternal(v4, *a1, a2);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
