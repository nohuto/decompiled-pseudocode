/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x1800F910C
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_DirectComposition_Provider_Context )
    return 0;
  result = EventUnregister(Microsoft_Windows_DirectComposition_Provider_Context);
  Microsoft_Windows_DirectComposition_Provider_Context = 0LL;
  return result;
}
