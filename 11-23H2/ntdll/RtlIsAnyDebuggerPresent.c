/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x18010D5B0
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x18010D62C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB60 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x180119558 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
