/*
 * XREFs of __report_securityfailure @ 0x14002F6D4
 * Callers:
 *     __report_rangecheckfailure @ 0x14002F6B8 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x14002F5A4 (__raise_securityfailure.c)
 *     capture_current_context @ 0x14002F778 (capture_current_context.c)
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
  qword_1400C09E0 = retaddr;
  dword_1400C09D0 = -1073740791;
  dword_1400C09D4 = 1;
  dword_1400C09E8 = 1;
  unk_1400C09F0 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
