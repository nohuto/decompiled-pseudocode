/*
 * XREFs of MiWalkEntireImagePageNeedsProcessing @ 0x1405B239C
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiDoesPageRequireRetpolineImportFixups @ 0x1402DB07C (MiDoesPageRequireRetpolineImportFixups.c)
 *     MiPageHasRelocations @ 0x1406F3800 (MiPageHasRelocations.c)
 */

_BOOL8 __fastcall MiWalkEntireImagePageNeedsProcessing(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edi

  v4 = a2;
  return (a3 & 1) != 0
      || (a3 & 0xA) != 0 && (unsigned int)MiPageHasRelocations(a1, a2, 1LL)
      || (a3 & 0x10) != 0 && MiDoesPageRequireRetpolineImportFixups(a1, v4);
}
