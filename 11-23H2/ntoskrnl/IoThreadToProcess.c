/*
 * XREFs of IoThreadToProcess @ 0x140289F80
 * Callers:
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     PsLookupThreadByThreadId @ 0x1406FAF10 (PsLookupThreadByThreadId.c)
 *     AlpcpCreateSecurityContext @ 0x14071C9C8 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140737EEC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1407705F0 (PspSetContextThreadInternal.c)
 *     NtQueryInformationThread @ 0x14079F6D0 (NtQueryInformationThread.c)
 *     PspWow64SetContextThread @ 0x1407A0458 (PspWow64SetContextThread.c)
 *     DbgkQueueUserExceptionReport @ 0x14093970C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14093A868 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978AA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtSetContextThread @ 0x1409B3EC0 (NtSetContextThread.c)
 *     PsSyscallProviderDispatch @ 0x1409B46A0 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B124 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
