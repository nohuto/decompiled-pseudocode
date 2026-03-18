/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x1802601E4
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180025470 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Dwm_Core_Provider_Context[0] )
    return 0;
  result = EventUnregister(Microsoft_Windows_Dwm_Core_Provider_Context[0]);
  Microsoft_Windows_Dwm_Core_Provider_Context[0] = 0LL;
  return result;
}
