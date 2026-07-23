/*
 * XREFs of MmFreeIsrStack @ 0x140A3CA28
 * Callers:
 *     KiFreeProcessorStacks @ 0x14056C40C (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     KasanMarkAddressValid @ 0x140565960 (KasanMarkAddressValid.c)
 *     MmFreeIndependentPages @ 0x14087FDF0 (MmFreeIndependentPages.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 *PteAddress; // rax

  v1 = a1 - 24576;
  KasanMarkAddressValid(a1 - 24576, 0x6000uLL);
  MmFreeIndependentPages(v1, 0x6000uLL);
  PteAddress = (__int64 *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140C69940, PteAddress, 1u);
}
