/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x140854A98
 * Callers:
 *     HalpMiscInitSystem @ 0x140A91720 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140821DDC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04BF0, 0LL, 0LL);
  return 0LL;
}
