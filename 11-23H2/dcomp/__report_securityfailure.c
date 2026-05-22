/*
 * XREFs of __report_securityfailure @ 0x180095CA4
 * Callers:
 *     __report_rangecheckfailure @ 0x180095C88 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180095B70 (__raise_securityfailure.c)
 *     capture_current_context @ 0x180095D48 (capture_current_context.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v2);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_18021BC20 = retaddr;
  dword_18021BC10 = -1073740791;
  dword_18021BC14 = 1;
  dword_18021BC28 = 1;
  unk_18021BC30 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
