/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x140515348
 * Callers:
 *     IvtMarkHiberMemoryScalableModePasidTables @ 0x140A98D64 (IvtMarkHiberMemoryScalableModePasidTables.c)
 *     IvtMarkHiberRegions @ 0x140A98E00 (IvtMarkHiberRegions.c)
 *     HsaMarkHiberRegions @ 0x140A997D0 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
