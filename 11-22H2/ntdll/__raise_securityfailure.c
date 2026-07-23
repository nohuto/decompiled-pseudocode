/*
 * XREFs of __raise_securityfailure @ 0x18008E7B4
 * Callers:
 *     __report_securityfailure @ 0x18008E94C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009E4F0 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall _raise_securityfailure(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
