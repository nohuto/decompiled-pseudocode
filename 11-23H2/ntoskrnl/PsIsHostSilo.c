/*
 * XREFs of PsIsHostSilo @ 0x1402AFB90
 * Callers:
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9050 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071DAF0 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140754090 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     PspMapSiloSharedDataView @ 0x1407A194C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1984 (MmMapApiSetView.c)
 *     ExInitLicenseData @ 0x14080F248 (ExInitLicenseData.c)
 *     ObpInitializeRootNamespace @ 0x14081BD54 (ObpInitializeRootNamespace.c)
 *     PsRegisterSiloMonitor @ 0x14081F190 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140855C6C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408588A0 (ObpCreateDosDevicesDirectory.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x1409B3C20 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1409C8FF0 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CF158 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1409F8420 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA924 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
