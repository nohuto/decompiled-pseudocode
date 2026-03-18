/*
 * XREFs of PdcCreateWatchdogAroundClientCall @ 0x140293330
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036803C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1403DD280 (_call_matherr.c)
 *     SymCryptSaveXmm @ 0x14056D28C (SymCryptSaveXmm.c)
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiPageHasRelocations @ 0x1406B130C (MiPageHasRelocations.c)
 *     PspSelectMachineForProcess @ 0x1406B7B58 (PspSelectMachineForProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C7170 (ObpParseSymbolicLinkEx.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiInitializePrivateFixupBitmap @ 0x1407055E0 (MiInitializePrivateFixupBitmap.c)
 *     MiDeleteVadBitmap @ 0x140706C64 (MiDeleteVadBitmap.c)
 *     ExpWnfLookupPermanentName @ 0x140710A1C (ExpWnfLookupPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x140711608 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140713418 (ExpWnfResolveScopeInstance.c)
 *     MiValidateVadMetadataFlags @ 0x140721FD4 (MiValidateVadMetadataFlags.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     MiReturnPageTablePageCommitment @ 0x140764EA0 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A436C (MiCommitInitialVadMetadataBits.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407CA00C (ExpWnfEnumerateScopeInstances.c)
 *     PopInvokeWin32Callout @ 0x1407D3E3C (PopInvokeWin32Callout.c)
 *     NtManageHotPatch @ 0x1407D4470 (NtManageHotPatch.c)
 *     RtlGetHostNtSystemRoot @ 0x1407EB230 (RtlGetHostNtSystemRoot.c)
 *     CmpSetVersionData @ 0x14080E008 (CmpSetVersionData.c)
 *     RtlpInitCodePageTables @ 0x140823520 (RtlpInitCodePageTables.c)
 *     HvlPhase0Initialize @ 0x1408273D8 (HvlPhase0Initialize.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x14084B360 (PsStartSiloMonitor.c)
 *     PsBootPhaseComplete @ 0x1408552CC (PsBootPhaseComplete.c)
 *     ObpSetSiloDeviceMap @ 0x140859914 (ObpSetSiloDeviceMap.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085BB8C (EtwpUpdateFileInfoDriverRegistration.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     DbgkpRemoveErrorPort @ 0x14093A020 (DbgkpRemoveErrorPort.c)
 *     ObShutdownSystem @ 0x14097AEB0 (ObShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1409B40C0 (PsUnregisterSiloMonitor.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C8AF0 (Pdcv2pActivationClientCallback.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PdcCreateWatchdogAroundClientCall()
{
  return 0LL;
}
