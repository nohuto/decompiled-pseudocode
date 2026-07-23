/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C
 * Callers:
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A3CE0 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800E9200 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
