/*
 * XREFs of McGenEventRegister_EventRegister @ 0x180025ED8
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180025928 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !Microsoft_Windows_Dwm_Core_Provider_Context[0] )
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             (PENABLECALLBACK)McGenControlCallbackV2,
             Microsoft_Windows_Dwm_Core_Provider_Context,
             Microsoft_Windows_Dwm_Core_Provider_Context);
  return result;
}
