/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C0007568
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007490 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007620 (StorportTimerDpc.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003BF08 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 752) )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    LOBYTE(a2) = a2->LockQueue.Next;
    RaidAdapterReleaseInterruptLock(a1, a2);
  }
}
