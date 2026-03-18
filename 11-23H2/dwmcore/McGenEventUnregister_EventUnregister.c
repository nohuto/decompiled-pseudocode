/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x18026F834
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800D4FF8 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventUnregister_EventUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  ULONG result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EventUnregister(v2);
  *a1 = 0LL;
  return result;
}
