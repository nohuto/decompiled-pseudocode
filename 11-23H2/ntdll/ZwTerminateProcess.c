/*
 * XREFs of ZwTerminateProcess @ 0x1800A1430
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     RtlUserThreadStart @ 0x18005AF90 (RtlUserThreadStart.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     LdrpLoadShimEngine @ 0x180079E58 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x18007A070 (LdrpInitializeShimDllDependencies.c)
 *     UninitUser32Proc @ 0x18008ECA0 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x18008EFB4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008EFE0 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0754 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800E18C0 (LdrpFatalExceptionFilter.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x18010D6C0 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x1801272EC (TppTerminateProcess.c)
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
