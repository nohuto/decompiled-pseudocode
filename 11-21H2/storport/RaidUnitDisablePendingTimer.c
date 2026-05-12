/*
 * XREFs of RaidUnitDisablePendingTimer @ 0x1C0013DE8
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x1C004AF60 (StorPortUnitDirectedPowerDownCompletion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004B780 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDisablePendingTimer(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) == 0 && (*(_DWORD *)(a1 + 456) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 928));
    *(_BYTE *)(a1 + 449) |= 0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
