/*
 * XREFs of RtlExitUserThread @ 0x18005AFF0
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     RtlUserThreadStart @ 0x18005AF90 (RtlUserThreadStart.c)
 *     EtwpLogger @ 0x18005B0E0 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x180088320 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800D7E50 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E4640 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E49B0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180100200 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18005B050 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
