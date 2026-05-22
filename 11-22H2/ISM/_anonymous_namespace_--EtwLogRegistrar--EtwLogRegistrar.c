/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x1800543F4
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x1800025F0 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger___0.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18004D7A4 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x180054420 (McGenEventRegister_EventRegister.c)
 */

void *anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180275508, 0LL);
  McGenEventRegister_EventRegister();
  return &unk_1802785B0;
}
