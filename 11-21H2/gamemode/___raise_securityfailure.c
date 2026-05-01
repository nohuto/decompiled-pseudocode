/*
 * XREFs of ___raise_securityfailure @ 0x10006D66
 * Callers:
 *     ___report_gsfailure @ 0x10006D96 (___report_gsfailure.c)
 * Callees:
 *     <none>
 */

BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
