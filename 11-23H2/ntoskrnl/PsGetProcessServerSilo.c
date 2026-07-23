/*
 * XREFs of PsGetProcessServerSilo @ 0x14028C410
 * Callers:
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9050 (PspEstimateNewProcessServerSilo.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC520 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     ObpDecrementHandleCount @ 0x140740144 (ObpDecrementHandleCount.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1407408D0 (CmpDoesProcessBelongToServiceSession.c)
 *     DbgkFlushErrorPort @ 0x1407515D4 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140754090 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1407552CC (EtwpWriteProcessEvent.c)
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14076DB70 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A144C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1407A194C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1984 (MmMapApiSetView.c)
 *     ObClearProcessDeviceMap @ 0x1407AFF78 (ObClearProcessDeviceMap.c)
 *     EtwpProcessEnumCallback @ 0x140820730 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x14097C62C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E63E0 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E7248 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E7354 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5874 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
