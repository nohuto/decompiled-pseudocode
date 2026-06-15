/*
 * XREFs of _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001AD0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800BD974 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_SarmTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1801C0178);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__);
}
