/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x180053684
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x180002180 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger___0.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18004D0AC (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     McGenEventRegister_EventRegister @ 0x1800536B0 (McGenEventRegister_EventRegister.c)
 */

void *anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180266508, 0LL);
  McGenEventRegister_EventRegister();
  return &unk_1802691E0;
}
