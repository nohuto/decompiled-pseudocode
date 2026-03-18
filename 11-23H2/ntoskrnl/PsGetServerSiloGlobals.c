/*
 * XREFs of PsGetServerSiloGlobals @ 0x140297694
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CB28 (SepRmDispatchDataToLsa.c)
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     SepIsMinTCB @ 0x1406B9B9C (SepIsMinTCB.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC310 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC8F0 (ObpReferenceCurrentDeviceMap.c)
 *     ExpWnfGenerateStateName @ 0x140711558 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140713368 (ExpWnfResolveScopeInstance.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     DbgkFlushErrorPort @ 0x1407513E4 (DbgkFlushErrorPort.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A125C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1407A1794 (MmMapApiSetView.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     MiInitializeSessionGlobals @ 0x1407A9A80 (MiInitializeSessionGlobals.c)
 *     PspCaptureUserProcessParameters @ 0x1407AD690 (PspCaptureUserProcessParameters.c)
 *     ObpSetDeviceMap @ 0x1407AFABC (ObpSetDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x1407AFD88 (ObClearProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1407AFE5C (ObDereferenceDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407C9A7C (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D4E7C (EtwpUpdateGlobalGroupMasks.c)
 *     SepIsNgenImage @ 0x1407DD478 (SepIsNgenImage.c)
 *     RtlGetHostNtSystemRoot @ 0x1407EACB0 (RtlGetHostNtSystemRoot.c)
 *     CmpSetVersionData @ 0x14080BA88 (CmpSetVersionData.c)
 *     EtwpProcessEnumCallback @ 0x140820430 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x1408220F4 (DbgkpGetServerSiloState.c)
 *     SepRmCommandServerThread @ 0x14082B780 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B364 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     EtwpPreInitializeSiloState @ 0x140845D4C (EtwpPreInitializeSiloState.c)
 *     PsBootPhaseComplete @ 0x1408543BC (PsBootPhaseComplete.c)
 *     ObInitServerSilo @ 0x14085596C (ObInitServerSilo.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     DbgkInitializeServerSilo @ 0x140936C80 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140939F70 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 *     ObShutdownSystem @ 0x14097AE00 (ObShutdownSystem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACA98 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACAF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACDB8 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD0A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD8B8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AD9F0 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADAC0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1409B3544 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1409B3C00 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1409C8DF0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E1E28 (EtwInitializeSiloState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F8014 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F80B8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8190 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x140AAAB58 (ExShutdownSystem.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1488);
  return result;
}
