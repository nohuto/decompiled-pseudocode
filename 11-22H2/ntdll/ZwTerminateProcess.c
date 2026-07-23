/*
 * XREFs of ZwTerminateProcess @ 0x18009F370
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 *     RtlpWaitOnCriticalSection @ 0x1800340F0 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     RtlUserThreadStart @ 0x18005DF90 (RtlUserThreadStart.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800797E8 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180079A00 (LdrpInitializeShimDllDependencies.c)
 *     UninitUser32Proc @ 0x18008E4A0 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008E7B4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008E7E0 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6680 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800DF424 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800E0590 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800E0678 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E7C6C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x18010C240 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x180125E6C (TppTerminateProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
