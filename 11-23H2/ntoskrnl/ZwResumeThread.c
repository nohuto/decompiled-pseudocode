/*
 * XREFs of ZwResumeThread @ 0x14041BB30
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303FBC (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140939E40 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
