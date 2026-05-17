/*
 * XREFs of __raise_securityfailure @ 0x18008EFB4
 * Callers:
 *     __report_securityfailure @ 0x18008F14C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800A0330 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
