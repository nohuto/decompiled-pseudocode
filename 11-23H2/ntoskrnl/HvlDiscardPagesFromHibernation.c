/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1405466A0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546708 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
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
