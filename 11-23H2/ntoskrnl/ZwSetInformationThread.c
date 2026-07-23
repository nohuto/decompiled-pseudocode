/*
 * XREFs of ZwSetInformationThread @ 0x14041B290
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303FBC (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1405F79D0 (DifZwSetInformationThreadWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2E5C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D302C (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1407DF230 (RtlReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
