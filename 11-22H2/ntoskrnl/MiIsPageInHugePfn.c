/*
 * XREFs of MiIsPageInHugePfn @ 0x140336C0C
 * Callers:
 *     MiIsPageInIoHugeRangeTransition @ 0x140336330 (MiIsPageInIoHugeRangeTransition.c)
 *     MiIoSpaceGetBounds @ 0x140336B50 (MiIoSpaceGetBounds.c)
 *     MmGetCacheAttributeEx @ 0x14061ED10 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061FF7C (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621E64 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x14062AD80 (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x14062B35C (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DA40 (MiDeleteStaleCacheMaps.c)
 *     MiValidateAndLockAweMapCountPage @ 0x14064C1FC (MiValidateAndLockAweMapCountPage.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( stru_140C67EE0.Buffer )
    return _bittest64((const signed __int64 *)stru_140C67EE0.Buffer, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
