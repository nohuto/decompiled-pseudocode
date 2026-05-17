/*
 * XREFs of RtlExitUserProcess @ 0x180051160
 * Callers:
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180029EC0 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180050FC4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051228 (LdrpAcquireLoaderLock.c)
 *     RtlReportSilentProcessExit @ 0x1800512A0 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051420 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800826C8 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
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
    qword_180187058 = 0LL;
    qword_180187050 = (__int64)UniqueThread;
    dword_180187048 = -2;
    dword_18018704C = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
