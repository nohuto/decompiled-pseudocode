/*
 * XREFs of sub_1406E9DE4 @ 0x1406E9DE4
 * Callers:
 *     sub_1407E4374 @ 0x1407E4374 (sub_1407E4374.c)
 *     sub_140A0F4D4 @ 0x140A0F4D4 (sub_140A0F4D4.c)
 *     sub_140A0F68C @ 0x140A0F68C (sub_140A0F68C.c)
 *     sub_140A102DC @ 0x140A102DC (sub_140A102DC.c)
 *     sub_140A103F4 @ 0x140A103F4 (sub_140A103F4.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

void __fastcall sub_1406E9DE4(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
