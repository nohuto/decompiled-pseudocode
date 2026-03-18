/*
 * XREFs of MiIsPageInHugePfn @ 0x140336DAC
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x1403364D0 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x140336CF0 (MiIoSpaceGetBounds.c)
 *     MmGetCacheAttributeEx @ 0x14061ECA0 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF0C (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621DF4 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B2EC (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x14062D9D0 (MiDeleteStaleCacheMaps.c)
 *     MiValidateAndLockAweMapCountPage @ 0x14064C18C (MiValidateAndLockAweMapCountPage.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( qword_140C67DE8 )
    return _bittest64((const signed __int64 *)qword_140C67DE8, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
