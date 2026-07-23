/*
 * XREFs of HvlpFreeOverlayPages @ 0x140549F00
 * Callers:
 *     HvlInitializeProcessor @ 0x14081D7FC (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1409413FC (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403C37E0 (MmFreeContiguousMemory.c)
 */

void __fastcall HvlpFreeOverlayPages(void *a1)
{
  MmFreeContiguousMemory(a1);
}
