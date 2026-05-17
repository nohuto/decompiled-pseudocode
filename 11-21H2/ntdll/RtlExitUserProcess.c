/*
 * XREFs of RtlExitUserProcess @ 0x180054350
 * Callers:
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 * Callees:
 *     RtlLockHeap @ 0x180015BE0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     LdrShutdownProcess @ 0x180054420 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x1800548C0 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180054A50 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     EtwpShutdownPrivateLoggers @ 0x180085D68 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A4AD0 (NtTerminateThread.c)
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
    qword_180179D38 = 0LL;
    qword_180179D30 = (__int64)UniqueThread;
    dword_180179D28 = -2;
    dword_180179D2C = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
