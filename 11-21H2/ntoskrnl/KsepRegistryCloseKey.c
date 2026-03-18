/*
 * XREFs of KsepRegistryCloseKey @ 0x140826B04
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140B01140 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_140C2A1BC);
  }
  return result;
}
