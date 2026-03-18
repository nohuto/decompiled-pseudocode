/*
 * XREFs of PsGetProcessServerSilo @ 0x14028C180
 * Callers:
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406B9020 (PspEstimateNewProcessServerSilo.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7060 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC310 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC8F0 (ObpReferenceCurrentDeviceMap.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     ObpDecrementHandleCount @ 0x14073FF54 (ObpDecrementHandleCount.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1407406E0 (CmpDoesProcessBelongToServiceSession.c)
 *     DbgkFlushErrorPort @ 0x1407513E4 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140753EA0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1407550DC (EtwpWriteProcessEvent.c)
 *     PspTerminateAllThreads @ 0x14076D010 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14076D980 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A125C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1407A175C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1407A1794 (MmMapApiSetView.c)
 *     ObClearProcessDeviceMap @ 0x1407AFD88 (ObClearProcessDeviceMap.c)
 *     EtwpProcessEnumCallback @ 0x140820430 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x14097C42C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E6150 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E6FB8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E70C4 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F55E4 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
