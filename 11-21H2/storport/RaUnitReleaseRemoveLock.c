/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C000B52C
 * Callers:
 *     StorEtwResetCounters @ 0x1C0002B64 (StorEtwResetCounters.c)
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0015840 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaUnitPowerIrp @ 0x1C0016744 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00168E4 (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00186F0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020F3C (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0022760 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C004A210 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C004E1A4 (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0051348 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C00513D4 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0053E00 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0054540 (RaidUnitAbortSrbCompletion.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitDereferenceDeviceObject @ 0x1C00568A0 (StorUnitDereferenceDeviceObject.c)
 *     StorpDeviceLogPagesWorkItemRoutine @ 0x1C005EB10 (StorpDeviceLogPagesWorkItemRoutine.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaUnitStorageDumpControl @ 0x1C00859D0 (RaUnitStorageDumpControl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C0089494 (RaWmiDispatchIrp.c)
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
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
