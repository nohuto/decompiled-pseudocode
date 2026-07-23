/*
 * XREFs of PsTerminateProcess @ 0x140683794
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140619420 (MiReAcquireCommitFailWorker.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF984 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     KiSchedulerApcTerminate @ 0x14076D1C0 (KiSchedulerApcTerminate.c)
 *     PspProcessClose @ 0x1407BE340 (PspProcessClose.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140937310 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BD708 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140A082D0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406839D4 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
