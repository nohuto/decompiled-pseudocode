/*
 * XREFs of sub_1407D8F28 @ 0x1407D8F28
 * Callers:
 *     WbFreeMemoryBlock @ 0x1407644EC (WbFreeMemoryBlock.c)
 *     sub_140764690 @ 0x140764690 (sub_140764690.c)
 *     sub_140764848 @ 0x140764848 (sub_140764848.c)
 *     sub_140A4DDC4 @ 0x140A4DDC4 (sub_140A4DDC4.c)
 *     sub_140A4DFAC @ 0x140A4DFAC (sub_140A4DFAC.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 */

void __fastcall sub_1407D8F28(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
