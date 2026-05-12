/*
 * XREFs of RaidpPortGetAdapter @ 0x1C000D95C
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C000AEF0 (StorEtwMiniportEventProxy.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C000E080 (StorPortSetDeviceQueueDepth.c)
 *     StorpSetUnitAttributes @ 0x1C0013B6C (StorpSetUnitAttributes.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0013D5C (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorpQueueWorkItem @ 0x1C001408C (StorpQueueWorkItem.c)
 *     StorpInitializeWorkItem @ 0x1C0014238 (StorpInitializeWorkItem.c)
 *     StorpFreeWorkItem @ 0x1C00146C0 (StorpFreeWorkItem.c)
 *     StorpAcquireMSISpinLock @ 0x1C001F4B8 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C001F534 (StorpReleaseMSISpinLock.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C0020334 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C002124C (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorPortGetLogicalUnit @ 0x1C0024C30 (StorPortGetLogicalUnit.c)
 *     StorAdapterWatchForRegistryChanges @ 0x1C0044CB0 (StorAdapterWatchForRegistryChanges.c)
 *     StorEnablePassiveInitialization @ 0x1C0044EBC (StorEnablePassiveInitialization.c)
 *     StorEnableRegistryKeyNotification @ 0x1C0044F24 (StorEnableRegistryKeyNotification.c)
 *     StorEtwMiniportLogError @ 0x1C004510C (StorEtwMiniportLogError.c)
 *     StorExtAcquireMSISpinLock @ 0x1C0045390 (StorExtAcquireMSISpinLock.c)
 *     StorExtBuildScatterGatherList @ 0x1C0045480 (StorExtBuildScatterGatherList.c)
 *     StorExtCompleteServiceIrp @ 0x1C0045540 (StorExtCompleteServiceIrp.c)
 *     StorExtGetMessageInterruptInformation @ 0x1C00455D0 (StorExtGetMessageInterruptInformation.c)
 *     StorExtPutScatterGatherList @ 0x1C00456D0 (StorExtPutScatterGatherList.c)
 *     StorExtReleaseMSISpinLock @ 0x1C0045710 (StorExtReleaseMSISpinLock.c)
 *     StorPortAllocateRegistryBuffer @ 0x1C00457C0 (StorPortAllocateRegistryBuffer.c)
 *     StorPortBusy @ 0x1C0045840 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0045B10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0045E20 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x1C0045E60 (StorPortGetBusData.c)
 *     StorPortGetDeviceBase @ 0x1C0045EB0 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x1C0045FE0 (StorPortGetUncachedExtension.c)
 *     StorPortLogError @ 0x1C00462E0 (StorPortLogError.c)
 *     StorPortPause @ 0x1C00463B0 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046890 (StorPortReady.c)
 *     StorPortRegistryRead @ 0x1C00469A0 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C0046B30 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x1C0046CA0 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0046DB0 (StorPortResumeDevice.c)
 *     StorPortSetBusDataByOffset @ 0x1C0046F60 (StorPortSetBusDataByOffset.c)
 *     StorPortSynchronizeAccess @ 0x1C0046FC0 (StorPortSynchronizeAccess.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C00471C4 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00472A8 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0047B28 (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0047F00 (StorpAllocateHostMemoryBuffer.c)
 *     StorpBuildScatterGatherList @ 0x1C0048574 (StorpBuildScatterGatherList.c)
 *     StorpCompleteServiceIrp @ 0x1C0048700 (StorpCompleteServiceIrp.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C00487C8 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeTimer @ 0x1C004895C (StorpFreeTimer.c)
 *     StorpGetDataInSgList @ 0x1C0048C80 (StorpGetDataInSgList.c)
 *     StorpGetDeviceObjects @ 0x1C0048D14 (StorpGetDeviceObjects.c)
 *     StorpGetExtendedTable @ 0x1C0048E24 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C0049044 (StorpGetMSIInfo.c)
 *     StorpInitializeTimer @ 0x1C00493AC (StorpInitializeTimer.c)
 *     StorpLogSystemEvent @ 0x1C0049540 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0049FAC (StorpPutScatterGatherList.c)
 *     StorpUnitInitializePoFxPower @ 0x1C004A0E0 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RaidpPortGetAdapter(__int64 a1)
{
  _DWORD **v1; // rdx
  _DWORD *result; // rax

  v1 = *(_DWORD ***)(a1 - 16);
  result = 0LL;
  if ( v1 )
  {
    result = *v1;
    if ( *v1 )
    {
      if ( *result != 1094997074 )
        return 0LL;
    }
  }
  return result;
}
