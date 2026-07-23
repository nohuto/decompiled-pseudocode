/*
 * XREFs of sub_1407D91F8 @ 0x1407D91F8
 * Callers:
 *     WbFreeMemoryBlock @ 0x1407646DC (WbFreeMemoryBlock.c)
 *     sub_140764880 @ 0x140764880 (sub_140764880.c)
 *     sub_140764A38 @ 0x140764A38 (sub_140764A38.c)
 *     sub_140A4E074 @ 0x140A4E074 (sub_140A4E074.c)
 *     sub_140A4E25C @ 0x140A4E25C (sub_140A4E25C.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 */

void __fastcall sub_1407D91F8(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
