/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x1800014C0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180037DF8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180240448);
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__);
}
