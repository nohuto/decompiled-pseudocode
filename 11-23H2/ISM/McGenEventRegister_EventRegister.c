/*
 * XREFs of McGenEventRegister_EventRegister @ 0x1800536B0
 * Callers:
 *     _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x180053684 (_anonymous_namespace_--EtwLogRegistrar--EtwLogRegistrar.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return EventRegister(
             &MICROSOFT_WINDOWSPHONE_INPUT,
             McGenControlCallbackV2,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context,
             &MICROSOFT_WINDOWSPHONE_INPUT_Context);
  return result;
}
