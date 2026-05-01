/*
 * XREFs of __raise_securityfailure @ 0x18004E610
 * Callers:
 *     __report_gsfailure @ 0x18004E650 (__report_gsfailure.c)
 *     __report_rangecheckfailure @ 0x18004E7C8 (__report_rangecheckfailure.c)
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
