/*
 * XREFs of EngDeletePalette @ 0x1C00B0800
 * Callers:
 *     <none>
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B0820 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}
