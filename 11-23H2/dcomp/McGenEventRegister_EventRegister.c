/*
 * XREFs of McGenEventRegister_EventRegister @ 0x18008DF6C
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !Microsoft_Windows_DirectComposition_Provider_Context )
    return EventRegister(
             &Microsoft_Windows_DirectComposition_Provider,
             McGenControlCallbackV2,
             &Microsoft_Windows_DirectComposition_Provider_Context,
             &Microsoft_Windows_DirectComposition_Provider_Context);
  return result;
}
