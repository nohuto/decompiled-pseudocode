/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A23A0
 * Callers:
 *     TpAdjustBindingCount @ 0x18002FFC0 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18004B8A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     TpCallbackIndependent @ 0x18004F300 (TpCallbackIndependent.c)
 *     TpCallbackMayRunLong @ 0x18004F840 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x180050C70 (TpSetPoolStackInformation.c)
 *     TpTrimPools @ 0x180069420 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x1800808D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083740 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180085380 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180088E40 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x180125810 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 430;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
