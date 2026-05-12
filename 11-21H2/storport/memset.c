/*
 * XREFs of memset @ 0x1C0024340
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0001310 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000172C (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001CE8 (StorpTelemetrySmartCommand.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0002420 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002DE0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003CA8 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C00118A8 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C0014D6C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaidCreateBusEnumerator @ 0x1C001593C (RaidCreateBusEnumerator.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015E80 (RaidGetTelemetryLogPageIds.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0018B30 (StorpTelemetryMiniportEventWStr.c)
 *     StorEtwMiniportEventProxy @ 0x1C0019370 (StorEtwMiniportEventProxy.c)
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 *     RaidAdapterEnumerateBus @ 0x1C001AD6C (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001AE84 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C001B720 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C001BD80 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C001C1C8 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C001C7E4 (RaidBusEnumeratorGetLunList.c)
 *     RaidCreateUnit @ 0x1C001CC08 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001CE48 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C001D2CC (RaidZeroUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001EFD0 (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringCchPrintfExW @ 0x1C001FBAC (RtlStringCchPrintfExW.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0020490 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002129C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021688 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0022128 (PortpPassThroughZeroUnusedBuffers.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C00228C4 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0022AAC (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     memcpy_s @ 0x1C0022C58 (memcpy_s.c)
 *     RaidAdapterHack @ 0x1C0034D20 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0035378 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0035BD0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0036A2C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterTargetedRescan @ 0x1C0038CE0 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C0039384 (RaidCreateAdapter.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C00399F8 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0039B18 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C0039D38 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0039DBC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003A6C4 (RaidInitializePerfOptsPassive.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x1C003BC0C (StorAdapterQueryAdapterObjectProperty.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003C384 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C003C948 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidCreateDeferredQueue @ 0x1C003D018 (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C003D1E0 (McGenControlCallbackV2.c)
 *     LoadExtensionDriver @ 0x1C003E944 (LoadExtensionDriver.c)
 *     StorpPopulateErrorData @ 0x1C004C5C8 (StorpPopulateErrorData.c)
 *     RaidEvaluateDsmLedState @ 0x1C004E90C (RaidEvaluateDsmLedState.c)
 *     RaidLogAllocationFailure @ 0x1C004EC94 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C004EE04 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidQueryResetInterface @ 0x1C004F338 (RaidQueryResetInterface.c)
 *     StorCreateSystemLogEntry @ 0x1C004FB2C (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C004FE34 (StorLogIoError.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005339C (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C00538B0 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0055DE0 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0056640 (RtlStringExHandleOtherFlagsW.c)
 *     StorUnitQueryBypassIOProperty @ 0x1C00568BC (StorUnitQueryBypassIOProperty.c)
 *     DllInitialize @ 0x1C0056DE0 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0057EFC (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorGetPreferredNodeNumber @ 0x1C0059354 (StorGetPreferredNodeNumber.c)
 *     StorpInitializePerfTelemetry @ 0x1C005EC20 (StorpInitializePerfTelemetry.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C00648C8 (FillBufferWithDriverTelemetryDump.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C0065D10 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C00680FC (StorSetMFNDOperationPrivilege.c)
 *     AsciiToWChar @ 0x1C0068284 (AsciiToWChar.c)
 *     PortFreeRegistryBuffer @ 0x1C00684E0 (PortFreeRegistryBuffer.c)
 *     PortMiniportRegistryRead @ 0x1C0068548 (PortMiniportRegistryRead.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C00849B4 (RaGetUnitStorageDeviceProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0084E48 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaidPrepareSrbForReuse @ 0x1C00869B4 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C0086C7C (PortRegistryRead.c)
 *     PortRegistryReadWithHandle @ 0x1C00877A4 (PortRegistryReadWithHandle.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0088000 (RaidUnitGetDeviceParameters.c)
 *     PortPassThroughSrbInitialize @ 0x1C0088C60 (PortPassThroughSrbInitialize.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C00892B8 (PortWdmGetDeviceCapabilities.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0089B30 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0089C94 (RaidGetStorageMiniportProperty.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0089D80 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0089E68 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C008BC48 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C008BDFC (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C008D0BC (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidInitializeAdapter @ 0x1C008D1D8 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C008DB9C (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C008DBC0 (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C008DC98 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C008DE38 (RaCreateDriver.c)
 *     WppTraceCallback @ 0x1C008E5F0 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C008E868 (RaCreateMiniport.c)
 *     RaInitializeConfiguration @ 0x1C008EB08 (RaInitializeConfiguration.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C008F8BC (RaUnitStorageManageBypassIOIoctl.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x1C0090064 (StorpInitializePerUnitIoSizeDistribution.c)
 *     StorGetMFNDCapabilities @ 0x1C0090A68 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x1C0090BBC (StorMFNDChildPFControl.c)
 *     StorQueryMFNDCapability @ 0x1C0090CF4 (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C0090E08 (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C0091040 (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00911EC (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C009159C (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDOperationInfo @ 0x1C0091874 (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x1C00919E0 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C0091F54 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C0092160 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C0092344 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C0092584 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDOperationInfo @ 0x1C0092810 (StorSetMFNDOperationInfo.c)
 *     StorPortNotificationVrfy @ 0x1C0095440 (StorPortNotificationVrfy.c)
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
