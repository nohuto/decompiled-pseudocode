/*
 * XREFs of PsTerminateProcess @ 0x1407D80A4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140580D80 (MiReAcquireCommitFailWorker.c)
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140684158 (PspRemoveProcessFromJobChain.c)
 *     PspProcessClose @ 0x1406B4E90 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406C2560 (KiSchedulerApcTerminate.c)
 *     PspCallProcessNotifyRoutines @ 0x1406F80E4 (PspCallProcessNotifyRoutines.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x1409276D0 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BA44C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140A08E84 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
