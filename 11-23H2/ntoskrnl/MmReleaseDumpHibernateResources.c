/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140A30D68
 * Callers:
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094E560 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (__int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C69940, PteAddress, v2);
}
