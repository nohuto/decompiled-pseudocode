/*
 * XREFs of memset @ 0x1C0030080
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     RtlStringCbPrintfExW @ 0x1C0006798 (RtlStringCbPrintfExW.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C000C920 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000EF00 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     Package @ 0x1C00122B0 (Package.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     ACPIBuildDeviceExtension @ 0x1C0019F08 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A164 (ACPIBuildDeviceRequest.c)
 *     IsPciBusAsync @ 0x1C001B660 (IsPciBusAsync.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 *     RtlStringCchPrintfExW @ 0x1C001DBE0 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfExA @ 0x1C001E73C (RtlStringCchPrintfExA.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001F4D8 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001FB38 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C001FC84 (ACPIGpeClearEventMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     NewGlobalHeap @ 0x1C0022190 (NewGlobalHeap.c)
 *     NewContext @ 0x1C0022674 (NewContext.c)
 *     InitContext @ 0x1C0022770 (InitContext.c)
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 *     ACPIDispatchAddDevice @ 0x1C0026D30 (ACPIDispatchAddDevice.c)
 *     NewNameSpaceObject @ 0x1C0028388 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002A2E8 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C002AC6C (ACPIBuildDelayedDependencyRequest.c)
 *     InitMutex @ 0x1C002AFB0 (InitMutex.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002C054 (ACPIInternalQueryExtendedAddress.c)
 *     IrqLibpGetVectorInput @ 0x1C002C8B0 (IrqLibpGetVectorInput.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C002CD00 (AcpiHandleDeviceFirmwareLock.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002D1C4 (ACPIBuildThermalZoneRequest.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C002D3EC (ACPIWakeInitializePmeRouting.c)
 *     ACPIWmiRegisterGuids @ 0x1C002D87C (ACPIWmiRegisterGuids.c)
 *     InitEvent @ 0x1C002DF60 (InitEvent.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     SetLogSize @ 0x1C002EE70 (SetLogSize.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0049C00 (RtlStringExHandleOtherFlagsW.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004DAC0 (ACPICMLidPowerStateCallBack.c)
 *     PerformHandlerInvocation @ 0x1C004ED78 (PerformHandlerInvocation.c)
 *     ACPIEcOpRegionHandler @ 0x1C0052C20 (ACPIEcOpRegionHandler.c)
 *     ACPIEcLogError @ 0x1C00539AC (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C0056404 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C00564C0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0056650 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0057188 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0058990 (ACPIIoctlGetDeviceInformation.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005C860 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005D7A0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0061F5C (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C00627FC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0062CD8 (ACPIWakeEnableDisableAsync.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0064AA0 (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 *     FreeObjOwner @ 0x1C00663E4 (FreeObjOwner.c)
 *     ParseDLMObjectInternal @ 0x1C0066C60 (ParseDLMObjectInternal.c)
 *     Debugger @ 0x1C00680E0 (Debugger.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     AcpiQueryPciBusInterface @ 0x1C0091224 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C009140C (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092610 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C009305C (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIMatchHardwareId @ 0x1C00930D8 (ACPIMatchHardwareId.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00932F8 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00939F8 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     PcisuppIsPciDevice @ 0x1C009A5B0 (PcisuppIsPciDevice.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C009AB50 (IrqPolicyGetDevicePolicy.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009B9F8 (IrqTranslatepQueryDeviceIrql.c)
 *     ArbBootAllocation @ 0x1C009BD00 (ArbBootAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C009BEC0 (ArbpBuildAllocationStack.c)
 *     MsiGetTargetInfo @ 0x1C009C148 (MsiGetTargetInfo.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009C700 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009ECE8 (AcpiSetupNativeMethodInterface.c)
 *     QueryExternalTranslatorInterface @ 0x1C009EFFC (QueryExternalTranslatorInterface.c)
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     PcisuppInitializePciRouting @ 0x1C00A1210 (PcisuppInitializePciRouting.c)
 *     WppTraceCallback @ 0x1C00AB730 (WppTraceCallback.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AD4D4 (ACPIEcConnectGpioInterrupt.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AF7C8 (ACPIEvaluateSpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 *     ACPIConnectWakeInterrupt @ 0x1C00B586C (ACPIConnectWakeInterrupt.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B6FF8 (IrqArbpQueryConflictIsa.c)
 *     ArbQueryConflict @ 0x1C00B7D10 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B80F0 (ArbRetestAllocation.c)
 *     DriverEntry @ 0x1C00BBAC8 (DriverEntry.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     OSInterruptVector @ 0x1C00BE3B0 (OSInterruptVector.c)
 *     ProcessorInitGlobalState @ 0x1C00BEB6C (ProcessorInitGlobalState.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BF108 (InitIllegalIOAddressListFromHAL.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0760 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
