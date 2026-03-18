/*
 * XREFs of NtClose @ 0x1406E44C0
 * Callers:
 *     SepRmCallLsa @ 0x14031C8E0 (SepRmCallLsa.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A1180 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A1240 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlQueryValidationRunlevel @ 0x1405B0EC0 (RtlQueryValidationRunlevel.c)
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnIsVolumeMounted @ 0x140686890 (PfSnIsVolumeMounted.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     AlpcpAcceptConnectPort @ 0x14071697C (AlpcpAcceptConnectPort.c)
 *     AlpcpConnectPort @ 0x140717370 (AlpcpConnectPort.c)
 *     NtQueryInformationToken @ 0x140730AD0 (NtQueryInformationToken.c)
 *     PfSnGetPrefetchInstructions @ 0x14074D07C (PfSnGetPrefetchInstructions.c)
 *     PfSnPopulateReadList @ 0x14075C380 (PfSnPopulateReadList.c)
 *     PfSnGetSectionObject @ 0x14075C9A0 (PfSnGetSectionObject.c)
 *     PfpReadSupportCleanup @ 0x14075E150 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14075E1A4 (PfpFileBuildReadSupport.c)
 *     PfSnPrefetchMetadata @ 0x14075E5E4 (PfSnPrefetchMetadata.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC318 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1407D1D40 (NtCreateRegistryTransaction.c)
 *     CmpInitializeLazyWriters @ 0x14080A62C (CmpInitializeLazyWriters.c)
 *     AdtpInitializeDriveLetters @ 0x140841EF0 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x1408420C8 (AdtpObjsInitialize.c)
 *     RtlpLoadLanguageConfigList @ 0x1408449F4 (RtlpLoadLanguageConfigList.c)
 *     PopEtEnergyTrackerCreate @ 0x14085187C (PopEtEnergyTrackerCreate.c)
 *     IopConnectLinkTrackingPort @ 0x140944800 (IopConnectLinkTrackingPort.c)
 *     PfpPrefetchPrivatePages @ 0x14097E268 (PfpPrefetchPrivatePages.c)
 *     PfpSourceGetPrefetchSupport @ 0x14097EE40 (PfpSourceGetPrefetchSupport.c)
 *     NtCreateProcessStateChange @ 0x1409B0100 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B0310 (NtCreateThreadStateChange.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BE3F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BEB58 (RtlpSysVolTakeOwnership.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3BDC (EtwpSetCoverageSamplerInformation.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F85A0 (ExpWatchLicenseInfoWork.c)
 *     NtOpenRegistryTransaction @ 0x140A0D8E0 (NtOpenRegistryTransaction.c)
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
 *     ObpIsKernelHandle @ 0x1402BEB54 (ObpIsKernelHandle.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
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
