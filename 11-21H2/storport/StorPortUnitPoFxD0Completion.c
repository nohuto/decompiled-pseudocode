/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C004B62C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C0047A20 (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0049D28 (RaidUnitCancelWaitWakeIrp.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !RaidUnitCheckAndAcquirePoFx(a4) )
    goto LABEL_12;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1744) + 36LL), 0, 1) )
    RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 40), &LockHandle);
  RaidUnitCancelWaitWakeIrp(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1744));
  if ( StorEtwLoggingEnabled )
  {
    if ( (*(_BYTE *)(a4 + 451) & 2) != 0 )
    {
      if ( (byte_1C00799E2 & 0x10) != 0 )
      {
        v6 = &EventUnitDirectedPowerUpStop;
LABEL_10:
        McTemplateK0pquuuq_EtwWriteTransfer(
          *(_QWORD *)(a4 + 24),
          v6,
          v5,
          **(_QWORD **)(a4 + 1744),
          *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
          *(_BYTE *)(a4 + 96),
          *(_BYTE *)(a4 + 97),
          *(_BYTE *)(a4 + 98),
          1);
      }
    }
    else if ( (byte_1C00799E2 & 0x10) != 0 )
    {
      v6 = (const EVENT_DESCRIPTOR *)&EventUnitPowerRequiredStop;
      goto LABEL_10;
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1736));
LABEL_12:
  if ( *(_DWORD *)(a4 + 3296) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 24) + 832LL) + 48LL)
                                                    + 868LL));
}
