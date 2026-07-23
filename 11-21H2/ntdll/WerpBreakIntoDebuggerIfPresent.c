/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800E8DDC
 * Callers:
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A6E40 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800E9040 (WerpIsDebugPortPresent.c)
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
