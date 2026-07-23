/*
 * XREFs of NtClose @ 0x1406E44F0
 * Callers:
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A1360 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A1420 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405B1430 (RtlQueryValidationRunlevel.c)
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x140686890 (PfSnIsVolumeMounted.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x140717570 (AlpcpConnectPort.c)
 *     NtQueryInformationToken @ 0x140730CC0 (NtQueryInformationToken.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D26C (PfSnGetPrefetchInstructions.c)
 *     PfSnPopulateReadList @ 0x14075C570 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14075CB90 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x14075E340 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14075E394 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x14075E7D4 (PfSnPrefetchMetadata.c)
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC5E8 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1407D2010 (NtCreateRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x14080A8FC (CmpInitializeLazyWriters.c)
 *     AdtpInitializeDriveLetters @ 0x1408421F0 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x1408423C8 (AdtpObjsInitialize.c)
 *     RtlpLoadLanguageConfigList @ 0x140844CF4 (RtlpLoadLanguageConfigList.c)
 *     PopEtEnergyTrackerCreate @ 0x140851B7C (PopEtEnergyTrackerCreate.c)
 *     IopConnectLinkTrackingPort @ 0x140944A00 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097F040 (PfpSourceGetPrefetchSupport.c)
 *     NtCreateProcessStateChange @ 0x1409B0300 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B0510 (NtCreateThreadStateChange.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BE5F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BED58 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3E6C (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8830 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x140A0DB90 (NtOpenRegistryTransaction.c)
 *     sub_140B340C4 @ 0x140B340C4 (sub_140B340C4.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     IopInitCrashDumpRegCallback @ 0x140B5D550 (IopInitCrashDumpRegCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140B60D40 (SepAdtInitializeAuditingOptions.c)
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 *     FsRtlInitializeSmssEvent @ 0x140B686B0 (FsRtlInitializeSmssEvent.c)
 *     ExpInitializeCallbacks @ 0x140B6B870 (ExpInitializeCallbacks.c)
 *     CreateSystemRootLink @ 0x140B6E898 (CreateSystemRootLink.c)
 *     IopProtectSystemPartition @ 0x140B741E8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140B90AE8 (InitSafeBoot.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402BEDE4 (ObpIsKernelHandle.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char PreviousMode; // di
  ULONG_PTR v4; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (MmVerifierData & 0x100) != 0 && !PreviousMode && !ObpIsKernelHandle((__int64)Handle, 0) )
    VfCheckUserHandle(v4);
  return ObpCloseHandle((ULONG_PTR)Handle);
}
