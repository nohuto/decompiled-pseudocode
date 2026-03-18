/*
 * XREFs of ZwSetInformationThread @ 0x14041AF00
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303D2C (ExpWorkerFactoryCreateThread.c)
 *     DifZwSetInformationThreadWrapper @ 0x1405F7460 (DifZwSetInformationThreadWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2B8C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D2D5C (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1407DEF60 (RtlReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1408060A8 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806134 (BiReleasePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F09FC (EtwpCovSampCaptureContextStart.c)
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
  return KiServiceInternal(ThreadHandle, ThreadInformationClass, ThreadInformation);
}
