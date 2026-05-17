/*
 * XREFs of RtlExitUserThread @ 0x18005DFF0
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     RtlUserThreadStart @ 0x18005DF90 (RtlUserThreadStart.c)
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x180087B20 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800D84A0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E3310 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800E3680 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800FEDF0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     TpCheckTerminateWorker @ 0x18005E050 (TpCheckTerminateWorker.c)
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
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
  JUMPOUT(0x18005E045LL);
}
