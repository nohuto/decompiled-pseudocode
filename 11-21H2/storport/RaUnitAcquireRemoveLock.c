/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C000B570
 * Callers:
 *     StorEtwResetCounters @ 0x1C0002B64 (StorEtwResetCounters.c)
 *     StorpLogPerUnitStatistics @ 0x1C00039A4 (StorpLogPerUnitStatistics.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPowerIrp @ 0x1C0016744 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00168E4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0016A48 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020F3C (RaidAdapterCheckWaitTimeout.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x1C00330A4 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0054338 (RaidUnitAbortSrb.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStorageDumpControl @ 0x1C00859D0 (RaUnitStorageDumpControl.c)
 *     RaWmiDispatchIrp @ 0x1C0089494 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C000B5D4 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // ebx
  __int64 v7; // r10

  v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v4 = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 32));
  while ( (v4 & 1) == 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 32)), v4 + 2, v4);
    if ( v5 == v4 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 912), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
