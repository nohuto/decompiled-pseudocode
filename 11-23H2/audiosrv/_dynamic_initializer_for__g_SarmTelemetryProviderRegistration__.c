/*
 * XREFs of _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001640
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800546C4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SarmTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1801CD178);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__);
}
