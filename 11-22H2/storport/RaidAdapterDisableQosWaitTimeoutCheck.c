/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C003565C
 * Callers:
 *     RaidDeleteUnit @ 0x1C00156F4 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0061348 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5456), &LockHandle);
  if ( *(_DWORD *)(a1 + 5464) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5328));
  --*(_DWORD *)(a1 + 5464);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
