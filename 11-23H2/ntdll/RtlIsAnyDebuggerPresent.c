/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x18010D580
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x18010D5FC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB30 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x180119528 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
