/*
 * XREFs of PrExtLogToTelemetry @ 0x1403B4F64
 * Callers:
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1403B1698 (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140821DDC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx

  v0 = -1073741637;
  if ( IsTraceloggingEnabled
    || (IsTraceloggingEnabled = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C067D0) >= 0) != 0 )
  {
    PrpWriteTraceLoggingEvent();
    return 0;
  }
  return v0;
}
