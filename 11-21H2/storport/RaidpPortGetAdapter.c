/*
 * XREFs of RaidpPortGetAdapter @ 0x1C000F724
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00026B0 (StorPortResumeDevice.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C000CD68 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C000CE60 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0015750 (StorPortSetDeviceQueueDepth.c)
 *     StorEtwMiniportEventProxy @ 0x1C0019370 (StorEtwMiniportEventProxy.c)
 *     StorpAcquireMSISpinLock @ 0x1C0021E48 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0021EC4 (StorpReleaseMSISpinLock.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0042200 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEnablePassiveInitialization @ 0x1C0042468 (StorEnablePassiveInitialization.c)
 *     StorEtwMiniportLogError @ 0x1C00424D0 (StorEtwMiniportLogError.c)
 *     StorExtAcquireMSISpinLock @ 0x1C00427B0 (StorExtAcquireMSISpinLock.c)
 *     StorExtBuildScatterGatherList @ 0x1C00428A0 (StorExtBuildScatterGatherList.c)
 *     StorExtCompleteServiceIrp @ 0x1C0042960 (StorExtCompleteServiceIrp.c)
 *     StorExtGetMessageInterruptInformation @ 0x1C00429F0 (StorExtGetMessageInterruptInformation.c)
 *     StorExtPutScatterGatherList @ 0x1C0042AF0 (StorExtPutScatterGatherList.c)
 *     StorExtReleaseMSISpinLock @ 0x1C0042B30 (StorExtReleaseMSISpinLock.c)
 *     StorPortAllocateRegistryBuffer @ 0x1C0042B80 (StorPortAllocateRegistryBuffer.c)
 *     StorPortBusy @ 0x1C0042C00 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0042ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0043060 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00431E0 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x1C0043220 (StorPortGetBusData.c)
 *     StorPortGetDeviceBase @ 0x1C0043270 (StorPortGetDeviceBase.c)
 *     StorPortGetLogicalUnit @ 0x1C00433A0 (StorPortGetLogicalUnit.c)
 *     StorPortGetUncachedExtension @ 0x1C00433F0 (StorPortGetUncachedExtension.c)
 *     StorPortLogError @ 0x1C00436F0 (StorPortLogError.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 *     StorPortReady @ 0x1C0043A70 (StorPortReady.c)
 *     StorPortRegistryRead @ 0x1C0043B80 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C0043D10 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x1C0043E80 (StorPortResume.c)
 *     StorPortSetBusDataByOffset @ 0x1C0043F90 (StorPortSetBusDataByOffset.c)
 *     StorPortSynchronizeAccess @ 0x1C0043FF0 (StorPortSynchronizeAccess.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0044284 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0044368 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C0044438 (StorReset.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00446A8 (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C0044A60 (StorpAllocateHostMemoryBuffer.c)
 *     StorpBuildScatterGatherList @ 0x1C004509C (StorpBuildScatterGatherList.c)
 *     StorpCompleteServiceIrp @ 0x1C0045228 (StorpCompleteServiceIrp.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C00452F0 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeTimer @ 0x1C0045484 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C004570C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C0045914 (StorpGetDataInSgList.c)
 *     StorpGetDeviceObjects @ 0x1C00459A8 (StorpGetDeviceObjects.c)
 *     StorpGetExtendedTable @ 0x1C0045AB8 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C0045CD8 (StorpGetMSIInfo.c)
 *     StorpInitializeTimer @ 0x1C0046240 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00463D4 (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C0046524 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C0046F7C (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C00470B0 (StorpQueueWorkItem.c)
 *     StorpSetUnitAttributes @ 0x1C0047248 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C00472D0 (StorpUnitInitializePoFxPower.c)
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
      if ( *result )
        return 0LL;
    }
  }
  return result;
}
