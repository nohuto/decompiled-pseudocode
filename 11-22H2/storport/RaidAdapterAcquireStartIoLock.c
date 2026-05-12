/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000759C
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007490 (RaidpAdapterTimerDpcRoutine.c)
 *     StorportTimerDpc @ 0x1C0007620 (StorportTimerDpc.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003BF08 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 752) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 744), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock();
}
