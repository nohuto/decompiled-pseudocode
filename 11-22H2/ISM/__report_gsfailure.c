/*
 * XREFs of __report_gsfailure @ 0x180057530
 * Callers:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x1800574F0 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x180057608 (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180277110 = retaddr;
  ContextRecord.Rcx = v2;
  dword_180277100 = -1073740791;
  dword_180277104 = 1;
  dword_180277118 = 1;
  unk_180277120 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
