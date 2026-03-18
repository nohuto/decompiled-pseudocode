/*
 * XREFs of KsepRegistryCloseKey @ 0x140844828
 * Callers:
 *     KsepEngineReadFlags @ 0x140B6126C (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_140C4075C);
  }
  return result;
}
