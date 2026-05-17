/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x18010BF70
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800E3C20 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800F8990 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x18010C00C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D530 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x180117C30 (RtlpReportHeapFailure.c)
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
