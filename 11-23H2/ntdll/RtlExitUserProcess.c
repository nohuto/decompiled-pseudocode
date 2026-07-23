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

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  void *UniqueThread; // rdx
  __int64 v3; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&FastPebLock);
  LdrpReleaseLoaderLock(v3, 18, 0);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
