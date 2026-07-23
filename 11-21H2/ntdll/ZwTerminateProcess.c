/*
 * XREFs of ZwTerminateProcess @ 0x1800A45F0
 * Callers:
 *     RtlUserThreadStart @ 0x180004830 (RtlUserThreadStart.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     LdrpLoadShimEngine @ 0x180072888 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180072B40 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     UninitUser32Proc @ 0x180093550 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x180093864 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180093890 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCompleteProcessCloning @ 0x1800E0BE8 (LdrpCompleteProcessCloning.c)
 *     LdrpFatalExceptionFilter @ 0x1800E1D80 (LdrpFatalExceptionFilter.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8DDC (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 *     RtlReportFatalFailure @ 0x18010C0D0 (RtlReportFatalFailure.c)
 *     TppTerminateProcess @ 0x18012442C (TppTerminateProcess.c)
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
