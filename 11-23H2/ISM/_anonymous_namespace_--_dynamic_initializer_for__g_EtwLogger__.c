/*
 * XREFs of _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x180001E50
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18004D0AC (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1802664D0);
  return atexit((void (__cdecl *)())anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__);
}
