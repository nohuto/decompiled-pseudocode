/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000BC24
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000BAC0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C000BB70 (StorportTimerDpc.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003A6C4 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 744) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 736), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
