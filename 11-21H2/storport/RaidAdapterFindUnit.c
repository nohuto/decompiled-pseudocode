/*
 * XREFs of RaidAdapterFindUnit @ 0x1C000FFFC
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00026B0 (StorPortResumeDevice.c)
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0002A08 (RaidAdapterResumeUnit.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0015750 (StorPortSetDeviceQueueDepth.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0018B30 (StorpTelemetryMiniportEventWStr.c)
 *     StorEtwMiniportEvent @ 0x1C0019528 (StorEtwMiniportEvent.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterDeviceBusy @ 0x1C00344B4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0034588 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0038850 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C00390D0 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C00424D0 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0042ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0043060 (StorPortDeviceReady.c)
 *     StorPortGetLogicalUnit @ 0x1C00433A0 (StorPortGetLogicalUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0044284 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C0046524 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C0047248 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C00472D0 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C004DE3C (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0054F70 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportLogByteStream @ 0x1C005BA78 (StorEtwMiniportLogByteStream.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0062378 (StorpTelemetryMiniportEvent.c)
 *     RaidAdapterPassThrough @ 0x1C0088544 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C0010080 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0011448 (RaidAdapterFindUnitAtDirql.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, unsigned int a2)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // rbx
  char v8; // di
  __int64 UnitAtDirql; // rax
  __int64 v10; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive(a1, a2);
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 728) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    LOBYTE(v10) = v8;
    v6 = UnitAtDirql;
    RaidAdapterReleaseInterruptLock(a1, v10);
    return v6;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
