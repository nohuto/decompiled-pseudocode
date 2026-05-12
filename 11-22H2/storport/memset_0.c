/*
 * XREFs of memset_0 @ 0x1C0023980
 * Callers:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     StorEtwMiniportEventProxy @ 0x1C000AEF0 (StorEtwMiniportEventProxy.c)
 *     RaUnitStorageQueryDeviceNumaPropertyIoctl @ 0x1C000F62C (RaUnitStorageQueryDeviceNumaPropertyIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C000FA90 (RaidGetTelemetryLogPageIds.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014634 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterRescanBus @ 0x1C0015C98 (RaidAdapterRescanBus.c)
 *     RaidAdapterEnumerateBus @ 0x1C0015F44 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001605C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0016A94 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00170B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0017B8C (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017C9C (RaidBusEnumeratorGetLunList.c)
 *     RaidCreateUnit @ 0x1C0018888 (RaidCreateUnit.c)
 *     RaidZeroUnit @ 0x1C0018EF8 (RaidZeroUnit.c)
 *     RaidInitializeDeviceQueue @ 0x1C001A08C (RaidInitializeDeviceQueue.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C001B6D8 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C001BA38 (StorpTelemetrySendUnitPerfData.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001D33C (RaidUnitUnRegisterInterfaces.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C001DAB0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C001DCA4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C001E440 (PortpPassThroughZeroUnusedBuffers.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001EA0C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidUnitGetHardwareIds @ 0x1C001FB5C (RaidUnitGetHardwareIds.c)
 *     RtlStringCchPrintfExW @ 0x1C001FE68 (RtlStringCchPrintfExW.c)
 *     RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x1C0021AE0 (RaUnitStorageQueryDeviceLedStatePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1C0021E18 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     memcpy_s @ 0x1C0022108 (memcpy_s.c)
 *     RaidAdapterHack @ 0x1C0035B8C (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0036018 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C00361E4 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0036E30 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0037E58 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterTargetedRescan @ 0x1C003A2BC (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C003A96C (RaidCreateAdapter.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C003B0F0 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003B210 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C003B430 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x1C003B4B4 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C003B5CC (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidInitializePerfOpts @ 0x1C003B850 (RaidInitializePerfOpts.c)
 *     RaidInitializePerfOptsPassive @ 0x1C003BF08 (RaidInitializePerfOptsPassive.c)
 *     StorAdapterQueryAdapterObjectProperty @ 0x1C003DA1C (StorAdapterQueryAdapterObjectProperty.c)
 *     StorQueryAndUpdateCachedMFNDOperationInfo @ 0x1C003E708 (StorQueryAndUpdateCachedMFNDOperationInfo.c)
 *     RaidCreateBusEnumerator @ 0x1C003EDCC (RaidCreateBusEnumerator.c)
 *     RaidCreateDeferredQueue @ 0x1C003F1D0 (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C003F410 (McGenControlCallbackV2.c)
 *     LoadExtensionDriver @ 0x1C00411E0 (LoadExtensionDriver.c)
 *     StorpPopulateErrorData @ 0x1C00500B4 (StorpPopulateErrorData.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x1C0051624 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x1C005369C (RaidUnitStorageTcgQueryCapability.c)
 *     TcglibEalReuseCommand @ 0x1C0055A48 (TcglibEalReuseCommand.c)
 *     RaDetectHeterogeneousCPU @ 0x1C0056F38 (RaDetectHeterogeneousCPU.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidEvaluateDsmLedState @ 0x1C0058FAC (RaidEvaluateDsmLedState.c)
 *     RaidFillTcgLockingObjects @ 0x1C0059214 (RaidFillTcgLockingObjects.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidLogAllocationFailure @ 0x1C005A328 (RaidLogAllocationFailure.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C005A498 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidQueryResetInterface @ 0x1C005A9D0 (RaidQueryResetInterface.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 *     RtlStringCbPrintfExA @ 0x1C005B994 (RtlStringCbPrintfExA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C005BB4C (RtlStringExHandleOtherFlagsA.c)
 *     StorCreateSystemLogEntry @ 0x1C005C024 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C005C324 (StorLogIoError.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C005D124 (RaUnitAtaPassThroughValidateInput.c)
 *     RaUnitReadIoCounterSetCallback @ 0x1C005E2B0 (RaUnitReadIoCounterSetCallback.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005FD60 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C005FEC8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x1C0060030 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0060198 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitTransferIoCounterSetCallback @ 0x1C0060510 (RaUnitTransferIoCounterSetCallback.c)
 *     RaUnitWriteIoCounterSetCallback @ 0x1C0060680 (RaUnitWriteIoCounterSetCallback.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0062BA4 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0063260 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0063410 (RtlStringExHandleOtherFlagsW.c)
 *     StorUnitQueryBypassIOProperty @ 0x1C006368C (StorUnitQueryBypassIOProperty.c)
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0064DFC (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorGetPreferredNodeNumber @ 0x1C0066344 (StorGetPreferredNodeNumber.c)
 *     StorpInitializePerfTelemetry @ 0x1C006C180 (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C006CDD8 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryGetUnitIoCounters @ 0x1C006E550 (StorpTelemetryGetUnitIoCounters.c)
 *     StorpTelemetryGetUnitQueueCounters @ 0x1C006EB50 (StorpTelemetryGetUnitQueueCounters.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00715F4 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C0071A98 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0072334 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0072940 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0073034 (StorpTelemetrySmartCommand.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C00734A4 (FillBufferWithDriverTelemetryDump.c)
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C00747F0 (StorProcessNVMeEnumeratorFillInfo.c)
 *     StorSetMFNDOperationPrivilege @ 0x1C0077910 (StorSetMFNDOperationPrivilege.c)
 *     AsciiToWChar @ 0x1C0077AC0 (AsciiToWChar.c)
 *     PortFreeRegistryBuffer @ 0x1C0077D1C (PortFreeRegistryBuffer.c)
 *     PortMiniportRegistryRead @ 0x1C0077D84 (PortMiniportRegistryRead.c)
 *     TcglibDiscoverDevice @ 0x1C00797CC (TcglibDiscoverDevice.c)
 *     ParseBandMetadata @ 0x1C007AE90 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x1C007B030 (ParseLockingObjectInfo.c)
 *     TcglibpSetBand @ 0x1C007B8E4 (TcglibpSetBand.c)
 *     TcglibpSetBandLocation @ 0x1C007BCFC (TcglibpSetBandLocation.c)
 *     ParseGetTableColumnData @ 0x1C007C270 (ParseGetTableColumnData.c)
 *     TcglibpParseLevel0Data @ 0x1C007D81C (TcglibpParseLevel0Data.c)
 *     InitTcgParser @ 0x1C007F468 (InitTcgParser.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C009F99C (RaGetUnitStorageDeviceProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C009FD44 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidPrepareSrbForReuse @ 0x1C00A0450 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C00A07E8 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C00A0E68 (PortWdmGetDeviceCapabilities.c)
 *     PortRegistryReadWithHandle @ 0x1C00A1A20 (PortRegistryReadWithHandle.c)
 *     PortPassThroughSrbInitialize @ 0x1C00A22C0 (PortPassThroughSrbInitialize.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C00A26D4 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00A30B8 (RaidUnitGetDeviceParameters.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00A362C (RaidGetStorageMiniportProperty.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00A370C (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C00A37F4 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C00A5340 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C00A54F0 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x1C00A7608 (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C00A826C (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C00A8290 (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C00A8368 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C00A8514 (RaCreateDriver.c)
 *     WppTraceCallback @ 0x1C00A8CC0 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C00A8F68 (RaCreateMiniport.c)
 *     RaInitializeConfiguration @ 0x1C00A9208 (RaInitializeConfiguration.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00A99B0 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x1C00AA1FC (RaUnitStorageManageBypassIOIoctl.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x1C00AABB0 (StorpInitializePerUnitIoSizeDistribution.c)
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorGetMFNDCapabilities @ 0x1C00ABD64 (StorGetMFNDCapabilities.c)
 *     StorMFNDChildPFControl @ 0x1C00ABED0 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x1C00AC01C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDCapability @ 0x1C00AC42C (StorQueryMFNDCapability.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C00AC5DC (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00ACA10 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C00AD1F0 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x1C00AD4EC (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1C00AD9FC (StorQueryMFNDOperationInfo.c)
 *     StorResetMFND @ 0x1C00ADB84 (StorResetMFND.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x1C00ADC78 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C00AE250 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1C00AE8C4 (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x1C00AEEC0 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x1C00AF0EC (StorSetMFNDOperationInfo.c)
 *     StorPortNotificationVrfy @ 0x1C00B1440 (StorPortNotificationVrfy.c)
 *     memset$thunk$772440563353939046 @ 0x1C00B2010 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset_0(void *a1, int Val, size_t Size)
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
