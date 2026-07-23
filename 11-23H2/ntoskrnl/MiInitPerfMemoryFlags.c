/*
 * XREFs of MiInitPerfMemoryFlags @ 0x140641B3C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiLogSectionCreate @ 0x140A2F8F0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
