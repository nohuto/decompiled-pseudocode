/*
 * XREFs of RtlExitUserProcess @ 0x1800512C0
 * Callers:
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     RtlReportSilentProcessExit @ 0x180051400 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051580 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     LdrShutdownProcess @ 0x180051600 (LdrShutdownProcess.c)
 *     EtwpShutdownPrivateLoggers @ 0x180082058 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009F850 (NtTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    LdrpReleaseLoaderLock(v4, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180183FB8 = 0LL;
    qword_180183FB0 = (__int64)UniqueThread;
    dword_180183FA8 = -2;
    dword_180183FAC = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
