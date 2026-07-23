/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x140515898
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140A98BD4 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140A98C70 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140A99640 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
