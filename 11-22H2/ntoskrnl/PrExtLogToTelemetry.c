/*
 * XREFs of PrExtLogToTelemetry @ 0x1403B48D4
 * Callers:
 *     HalpProcInitSystem @ 0x140A8AEE0 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1403B1008 (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
