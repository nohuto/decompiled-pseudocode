/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0008004
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     StorEtwMiniportEvent @ 0x1C000D9FC (StorEtwMiniportEvent.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C000E080 (StorPortSetDeviceQueueDepth.c)
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0013920 (StorpTelemetryMiniportEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0013B6C (StorpSetUnitAttributes.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017C9C (RaidBusEnumeratorGetLunList.c)
 *     StorPortGetLogicalUnit @ 0x1C0024C30 (StorPortGetLogicalUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C003511C (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00351A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterPauseUnit @ 0x1C0036A6C (RaidAdapterPauseUnit.c)
 *     RaidAdapterResumeUnit @ 0x1C0037DAC (RaidAdapterResumeUnit.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0039DCC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A6A0 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C004510C (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0045B10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0046DB0 (StorPortResumeDevice.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00471C4 (StorPortpInvokeAcpiMethod.c)
 *     StorpLogSystemEvent @ 0x1C0049540 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     StorpUnitInitializePoFxPower @ 0x1C004A0E0 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0057674 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0061C80 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportLogByteStream @ 0x1C0068AAC (StorEtwMiniportLogByteStream.c)
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtPassive @ 0x1C0008088 (RaidAdapterFindUnitAtPassive.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0008160 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
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
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 736) )
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
