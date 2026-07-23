/*
 * XREFs of PsGetServerSiloGlobals @ 0x140297924
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CDB8 (SepRmDispatchDataToLsa.c)
 *     PspTerminateProcessesJobCallback @ 0x1406A0B50 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     SepIsMinTCB @ 0x1406B9BCC (SepIsMinTCB.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC520 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 *     ExpWnfGenerateStateName @ 0x140711768 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140713578 (ExpWnfResolveScopeInstance.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     DbgkFlushErrorPort @ 0x1407515D4 (DbgkFlushErrorPort.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A144C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1407A1984 (MmMapApiSetView.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 *     MiInitializeSessionGlobals @ 0x1407A9C70 (MiInitializeSessionGlobals.c)
 *     PspCaptureUserProcessParameters @ 0x1407AD880 (PspCaptureUserProcessParameters.c)
 *     ObpSetDeviceMap @ 0x1407AFCAC (ObpSetDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x1407AFF78 (ObClearProcessDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407C9D4C (ExpWnfEnumerateScopeInstances.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407D514C (EtwpUpdateGlobalGroupMasks.c)
 *     SepIsNgenImage @ 0x1407DD748 (SepIsNgenImage.c)
 *     RtlGetHostNtSystemRoot @ 0x1407EAF80 (RtlGetHostNtSystemRoot.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     EtwpProcessEnumCallback @ 0x140820730 (EtwpProcessEnumCallback.c)
 *     DbgkpGetServerSiloState @ 0x1408223F4 (DbgkpGetServerSiloState.c)
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083B664 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 *     EtwpPreInitializeSiloState @ 0x14084604C (EtwpPreInitializeSiloState.c)
 *     PsBootPhaseComplete @ 0x1408546BC (PsBootPhaseComplete.c)
 *     ObInitServerSilo @ 0x140855C6C (ObInitServerSilo.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     DbgkInitializeServerSilo @ 0x140936E80 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14093A170 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 *     ObShutdownSystem @ 0x14097B000 (ObShutdownSystem.c)
 *     PspCompleteServerSiloShutdown @ 0x1409ACC98 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACCF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACFB8 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD2A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409ADAB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADBF0 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADCC0 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1409B3E00 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1409C8FF0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E20B8 (EtwInitializeSiloState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F82A4 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8348 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8420 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x140AAA9C8 (ExShutdownSystem.c)
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
