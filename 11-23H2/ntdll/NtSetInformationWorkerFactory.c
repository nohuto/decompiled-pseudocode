/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A4460
 * Callers:
 *     TpAdjustBindingCount @ 0x18002FDF0 (TpAdjustBindingCount.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18004B740 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 *     TpCallbackIndependent @ 0x18004F1A0 (TpCallbackIndependent.c)
 *     TpCallbackMayRunLong @ 0x18004F6E0 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x180050B10 (TpSetPoolStackInformation.c)
 *     TpTrimPools @ 0x180069400 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x180080F40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083F40 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180085B80 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180089640 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x180126C90 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180126D40 (TppAdjustRunningThreadGoalWithLock.c)
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
