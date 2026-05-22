/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x1801D11CC
 * Callers:
 *     _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x180055634 (_anonymous_namespace_--EtwLogRegistrar--_EtwLogRegistrar.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !MICROSOFT_WINDOWSPHONE_INPUT_Context )
    return 0;
  result = EventUnregister(MICROSOFT_WINDOWSPHONE_INPUT_Context);
  MICROSOFT_WINDOWSPHONE_INPUT_Context = 0LL;
  return result;
}
