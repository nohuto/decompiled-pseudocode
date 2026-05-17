/*
 * XREFs of __raise_securityfailure @ 0x180093864
 * Callers:
 *     __report_securityfailure @ 0x1800939FC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800A3780 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
