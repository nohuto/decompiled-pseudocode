/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800DC600
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_1801748F8);
  return 1LL;
}
