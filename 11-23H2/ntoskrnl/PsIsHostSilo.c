/*
 * XREFs of PsIsHostSilo @ 0x1402AF900
 * Callers:
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x14071D1B0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071D8F0 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140753EA0 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767940 (IopAllocateFoExtensionsOnCreate.c)
 *     PopGetSettingNotificationName @ 0x140783080 (PopGetSettingNotificationName.c)
 *     PspMapSiloSharedDataView @ 0x1407A175C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1794 (MmMapApiSetView.c)
 *     ExInitLicenseData @ 0x14080EF78 (ExInitLicenseData.c)
 *     ObpInitializeRootNamespace @ 0x14081BA84 (ObpInitializeRootNamespace.c)
 *     PsRegisterSiloMonitor @ 0x14081EE90 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x14082B780 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14085596C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x140858660 (ObpCreateDosDevicesDirectory.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x1409B3A20 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1409C8DF0 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CEF58 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1409F8190 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA694 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
