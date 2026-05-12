/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C00070DC
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C0011628 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0011CB4 (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0014920 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     RaidUnitUpdateDynamicRegistrySettings @ 0x1C001A340 (RaidUnitUpdateDynamicRegistrySettings.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F1FC (RaidAdapterCheckWaitTimeout.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0020820 (StorpDeviceHealthWorkItemRoutine.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaidCancelIrp @ 0x1C005847C (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C005DB38 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C005DBC4 (RaUnitFlushQueueSrb.c)
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0060770 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0060F10 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0062040 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0063260 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitDereferenceDeviceObject @ 0x1C0063670 (StorUnitDereferenceDeviceObject.c)
 *     StorpDeviceLogPagesWorkItemRoutine @ 0x1C006C070 (StorpDeviceLogPagesWorkItemRoutine.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C00A28B4 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C00A9BD0 (RaUnitStorageDumpControl.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  unsigned __int64 v1; // r9
  LONG result; // eax
  LONG v3; // ett

  v1 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  result = *(_DWORD *)(v1 + *(_QWORD *)(a1 + 32));
  while ( (result & 1) == 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + *(_QWORD *)(a1 + 32)), result - 2, result);
    if ( v3 == result )
      return result;
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 968), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
