/*
 * XREFs of __report_securityfailure @ 0x1800939FC
 * Callers:
 *     __report_rangecheckfailure @ 0x1800939E0 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180093864 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x1800A82D0 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_180177EF0 = retaddr;
  dword_180177EE0 = -1073740791;
  dword_180177EE4 = 1;
  dword_180177EF8 = 1;
  unk_180177F00 = v2;
  _raise_securityfailure((_EXCEPTION_POINTERS *)&ExceptionPointers);
}
