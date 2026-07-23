/*
 * XREFs of RtlExitUserThread @ 0x1800048A0
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     RtlUserThreadStart @ 0x180004830 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     RtlUserFiberStart @ 0x18008B3A0 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800D8190 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E43E0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E45E0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FF0F0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     TpCheckTerminateWorker @ 0x180004900 (TpCheckTerminateWorker.c)
 *     LdrShutdownThread @ 0x180041790 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x1800A4AD0 (NtTerminateThread.c)
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
