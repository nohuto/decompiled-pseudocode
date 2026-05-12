/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C0007014
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPowerIrp @ 0x1C0011628 (RaUnitPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0011B7C (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0011CB4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitUpdateDynamicRegistrySettings @ 0x1C001A340 (RaidUnitUpdateDynamicRegistrySettings.c)
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F1FC (RaidAdapterCheckWaitTimeout.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x1C0033D04 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaUnitGetInstances @ 0x1C005DD38 (RaUnitGetInstances.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0060D08 (RaidUnitAbortSrb.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C00A9BD0 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C000708C (RaUnitCheckRemoveState.c)
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
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 968));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 968), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
