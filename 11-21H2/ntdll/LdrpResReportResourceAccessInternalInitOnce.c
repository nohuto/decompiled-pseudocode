/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800DC600
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801748F8);
  return 1LL;
}
