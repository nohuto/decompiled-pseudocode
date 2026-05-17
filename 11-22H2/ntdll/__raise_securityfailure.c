/*
 * XREFs of __raise_securityfailure @ 0x18008E7B4
 * Callers:
 *     __report_securityfailure @ 0x18008E94C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009E4F0 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
