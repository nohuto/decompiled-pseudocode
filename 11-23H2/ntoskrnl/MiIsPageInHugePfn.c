/*
 * XREFs of MiIsPageInHugePfn @ 0x14033703C
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x140336760 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x140336F80 (MiIoSpaceGetBounds.c)
 *     MmGetCacheAttributeEx @ 0x14061F1F0 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14062045C (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140622344 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14062B260 (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B83C (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiValidateAndLockAweMapCountPage @ 0x14064C6DC (MiValidateAndLockAweMapCountPage.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( stru_140C67DE0.Buffer )
    return _bittest64((const signed __int64 *)stru_140C67DE0.Buffer, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
