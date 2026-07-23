/*
 * XREFs of TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933A64
 * Callers:
 *     sub_140810A04 @ 0x140810A04 (sub_140810A04.c)
 *     CcInitializeTelemetry @ 0x140B34E14 (CcInitializeTelemetry.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegister_EtwRegister_EtwSetInformation(char *a1)
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(a1, 0LL, 0LL);
}
