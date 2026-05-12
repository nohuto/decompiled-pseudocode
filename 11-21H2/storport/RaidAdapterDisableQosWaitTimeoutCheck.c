/*
 * XREFs of RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0034928
 * Callers:
 *     RaidDeleteUnit @ 0x1C0019D24 (RaidDeleteUnit.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0054980 (RaidUnitDisableWaitCheckTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDisableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5392), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5400);
  if ( v2 == 1 )
  {
    KeCancelTimer((PKTIMER)(a1 + 5264));
    v2 = *(_DWORD *)(a1 + 5400);
  }
  *(_DWORD *)(a1 + 5400) = v2 - 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
