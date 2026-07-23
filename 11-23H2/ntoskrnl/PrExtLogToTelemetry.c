/*
 * XREFs of PrExtLogToTelemetry @ 0x1403B5144
 * Callers:
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1403B1878 (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx

  v0 = -1073741637;
  if ( IsTraceloggingEnabled
    || (IsTraceloggingEnabled = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C067C8) >= 0) != 0 )
  {
    PrpWriteTraceLoggingEvent();
    return 0;
  }
  return v0;
}
