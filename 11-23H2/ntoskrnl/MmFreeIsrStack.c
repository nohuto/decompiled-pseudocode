/*
 * XREFs of MmFreeIsrStack @ 0x140A3C778
 * Callers:
 *     KiFreeProcessorStacks @ 0x14056BD4C (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     KasanMarkAddressValid @ 0x1405652A0 (KasanMarkAddressValid.c)
 *     MmFreeIndependentPages @ 0x14087FBB0 (MmFreeIndependentPages.c)
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
