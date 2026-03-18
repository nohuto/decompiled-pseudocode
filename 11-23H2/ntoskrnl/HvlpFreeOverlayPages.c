/*
 * XREFs of HvlpFreeOverlayPages @ 0x140549840
 * Callers:
 *     HvlInitializeProcessor @ 0x14081D52C (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1409411FC (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403C3600 (MmFreeContiguousMemory.c)
 */

void __fastcall HvlpFreeOverlayPages(void *a1)
{
  MmFreeContiguousMemory(a1);
}
