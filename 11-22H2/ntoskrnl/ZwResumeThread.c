/*
 * XREFs of ZwResumeThread @ 0x14041B0E0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303D2C (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
