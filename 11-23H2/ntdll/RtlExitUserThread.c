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

void __fastcall __noreturn RtlExitUserThread(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( (int)ZwQueryInformationThread(-2LL, 12LL, &v4, 4LL, 0LL) < 0 || !v4 )
  {
    LdrShutdownThread(v3, v2);
    TpCheckTerminateWorker(0LL);
    NtTerminateThread(0LL, a1);
  }
  RtlExitUserProcess(a1);
  JUMPOUT(0x18005B045LL);
}
