/*
 * XREFs of _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180001D40
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800BD974 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1801C02B0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioLicenseTraceLoggingProviderRegistration__);
}
