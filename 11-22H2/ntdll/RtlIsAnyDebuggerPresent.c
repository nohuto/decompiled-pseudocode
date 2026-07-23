/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x18010C100
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800E2900 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800F8BD0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x18010C17C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D6B0 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x1801180A8 (RtlpReportHeapFailure.c)
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
