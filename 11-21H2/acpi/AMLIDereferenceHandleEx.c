/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C000B860
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0002434 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     ACPIThermalActivateConstraint @ 0x1C0003F18 (ACPIThermalActivateConstraint.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C0004900 (ACPIBuildProcessGenericComplete.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     OSNotifyCreateProcessor @ 0x1C0005604 (OSNotifyCreateProcessor.c)
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 *     AMLIIterateParentNext @ 0x1C00083A0 (AMLIIterateParentNext.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C00088C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00090D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0009970 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     OSNotifyCreateDevice @ 0x1C0009C54 (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0009D10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A0B4 (OSNotifyCreateOperationRegion.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000A160 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D330 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8F0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000EF00 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F4F0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001C780 (ACPIIoctlEvalPreProcessingV1.c)
 *     GetOpRegionScopeWorker @ 0x1C001CCA0 (GetOpRegionScopeWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     ACPIReserveDependencies @ 0x1C0021F38 (ACPIReserveDependencies.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0023550 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIGetProcessorStatus @ 0x1C0024DC4 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0025FA8 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0026570 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00266A0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     AreDependenciesSatisfied @ 0x1C0027CAC (AreDependenciesSatisfied.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0029D30 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002A488 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002B0D0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002BF20 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIFilterIrpSetPower @ 0x1C002E2B0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C002E5C4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002E9C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004AD40 (ACPIBuildProcessThermalZoneUid.c)
 *     CmosConfigSpaceHandler @ 0x1C004E110 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C004E244 (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050360 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C0050840 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0050C20 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0050DC0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRemoveDevice @ 0x1C0053030 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053734 (ACPIEcRunQueryMethod.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00569B4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0056E28 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0057880 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0058160 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     OSNotifyDeviceCheck @ 0x1C0059804 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0059A20 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C005C0A8 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005C350 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005C860 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005D7A0 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005D960 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005FAC0 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C00605B0 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C006109C (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C00654A0 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C00665BC (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006C300 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C500 (LinkNodepRunSrsWorker.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008F5E4 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00975D0 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009CB64 (LinkNodeWriteStateToHardware.c)
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     ACPIDockIrpEject @ 0x1C00AA350 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C00AD6A4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AD748 (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AE070 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AE324 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00AF8F0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AF9C0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFAA0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AFB78 (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  dword_1C0081AC8 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v3 + 120) )
      {
        return DereferenceObjectEx(v3);
      }
      else
      {
        DereferenceObjectEx(v3);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
