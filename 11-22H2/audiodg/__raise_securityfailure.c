/*
 * XREFs of __raise_securityfailure @ 0x140027E20
 * Callers:
 *     __report_gsfailure @ 0x140027E60 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x140027F54 (__report_securityfailure.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
