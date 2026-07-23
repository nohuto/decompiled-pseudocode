/*
 * XREFs of ZwSetInformationThread @ 0x14041A840
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303D2C (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1405F74F0 (DifZwSetInformationThreadWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D32DC (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1407DF4E0 (RtlReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140808628 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1408086B4 (BiReleasePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
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
