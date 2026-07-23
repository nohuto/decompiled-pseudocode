/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800A3780
 * Callers:
 *     __raise_securityfailure @ 0x180093864 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180093890 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
