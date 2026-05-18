/*
 * XREFs of ??2TraceLoggingCorrelationVector@@SAPEAX_K@Z @ 0x180021DDC
 * Callers:
 *     ??$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@XZ @ 0x180021910 (--$make_unique@VTraceLoggingCorrelationVector@@$$V$0A@@std@@YA-AV-$unique_ptr@VTraceLoggingCorre.c)
 *     ?SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z @ 0x1800240E0 (-SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 */

void *__fastcall TraceLoggingCorrelationVector::operator new()
{
  void *result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  result = _aligned_malloc(0xA0uLL, 8uLL);
  if ( !result )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  return result;
}
