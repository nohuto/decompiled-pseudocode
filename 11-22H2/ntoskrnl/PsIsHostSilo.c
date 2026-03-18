/*
 * XREFs of PsIsHostSilo @ 0x1402AF8D0
 * Callers:
 *     PopTransitionCheckpoint @ 0x1406825AC (PopTransitionCheckpoint.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x14071D220 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14072F370 (IopAllocRealFileObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1407543B0 (EtwpWriteAppStateChangeSummary.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767E50 (IopAllocateFoExtensionsOnCreate.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PspMapSiloSharedDataView @ 0x1407A1C6C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1CA4 (MmMapApiSetView.c)
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 *     ObpInitializeRootNamespace @ 0x14081E004 (ObpInitializeRootNamespace.c)
 *     PsRegisterSiloMonitor @ 0x140821410 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14085687C (ObInitServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408596D0 (ObpCreateDosDevicesDirectory.c)
 *     DbgkRegisterErrorPort @ 0x1409399C4 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x1409B3AD0 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CF008 (SepUpdateSiloInClientSecurity.c)
 *     ExpTimeZoneWork @ 0x1409F8240 (ExpTimeZoneWork.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
