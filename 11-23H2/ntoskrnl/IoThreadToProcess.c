/*
 * XREFs of IoThreadToProcess @ 0x14028A210
 * Callers:
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     PsLookupThreadByThreadId @ 0x1406FB120 (PsLookupThreadByThreadId.c)
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1407380DC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspSetContextThreadInternal @ 0x1407707E0 (PspSetContextThreadInternal.c)
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 *     PspWow64SetContextThread @ 0x1407A0648 (PspWow64SetContextThread.c)
 *     DbgkQueueUserExceptionReport @ 0x14093990C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14093AA68 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978CA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtSetContextThread @ 0x1409B40C0 (NtSetContextThread.c)
 *     PsSyscallProviderDispatch @ 0x1409B48A0 (PsSyscallProviderDispatch.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
