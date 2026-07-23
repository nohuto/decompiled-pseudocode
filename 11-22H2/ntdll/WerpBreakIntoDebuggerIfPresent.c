/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800E7C6C
 * Callers:
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A1C20 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800E7ED0 (WerpIsDebugPortPresent.c)
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
