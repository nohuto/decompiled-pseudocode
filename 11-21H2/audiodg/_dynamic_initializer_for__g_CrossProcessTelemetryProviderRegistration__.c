/*
 * XREFs of _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001550
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14002D4D4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1400C0010);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CrossProcessTelemetryProviderRegistration__);
}
