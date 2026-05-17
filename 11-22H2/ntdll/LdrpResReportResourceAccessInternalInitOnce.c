/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800DCB20
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_18017E920);
  return 1LL;
}
