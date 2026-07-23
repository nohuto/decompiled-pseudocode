/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x140854D98
 * Callers:
 *     HalpMiscInitSystem @ 0x140A915A0 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04BB0, 0LL, 0LL);
  return 0LL;
}
