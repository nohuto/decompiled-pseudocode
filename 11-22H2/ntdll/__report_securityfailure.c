/*
 * XREFs of __report_securityfailure @ 0x18008E94C
 * Callers:
 *     __report_rangecheckfailure @ 0x18008E930 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x18008E7B4 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x1800A3110 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180181F50 = retaddr;
  dword_180181F40 = -1073740791;
  dword_180181F44 = 1;
  dword_180181F58 = 1;
  unk_180181F60 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
