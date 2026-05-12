/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C000BBF0
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000BAC0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C000BB70 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003A6C4 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 744) )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    LOBYTE(a2) = a2->LockQueue.Next;
    RaidAdapterReleaseInterruptLock(a1, a2);
  }
}
