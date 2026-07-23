/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x140546D60
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546DC8 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      HvlpHibernateScratchPage,
      (unsigned int)(HvlpHibernateScratchPageCount << 12),
      0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
