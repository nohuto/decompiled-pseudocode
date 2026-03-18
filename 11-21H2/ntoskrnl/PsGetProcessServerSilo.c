/*
 * XREFs of PsGetProcessServerSilo @ 0x140347680
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066F8EC (PspEstimateNewProcessServerSilo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x140672A98 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140672AD0 (MmMapApiSetView.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140687E80 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObClearProcessDeviceMap @ 0x14069C104 (ObClearProcessDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14069C1E0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406C7270 (CmpDoesProcessBelongToServiceSession.c)
 *     EtwTraceThread @ 0x1406F653C (EtwTraceThread.c)
 *     EtwpWriteProcessEvent @ 0x14070AE08 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140712BA0 (EtwpWriteAppStateChangeSummary.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     DbgkFlushErrorPort @ 0x1407DBF04 (DbgkFlushErrorPort.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x140986CD4 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E32A4 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E3F78 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409E4084 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
