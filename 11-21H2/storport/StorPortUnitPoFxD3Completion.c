/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x1C004B780
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0013DE8 (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0049D28 (RaidUnitCancelWaitWakeIrp.c)
 */

void __fastcall StorPortUnitPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
  }
  if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 4832LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)(Context + 3432), 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*(_QWORD *)(Context + 24), 0LL, 0LL);
  }
  if ( *(_DWORD *)(Context + 3296) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 24) + 832LL) + 48LL)
                                                    + 868LL));
  *(_BYTE *)(Context + 449) &= ~1u;
}
