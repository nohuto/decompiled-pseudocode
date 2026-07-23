/*
 * XREFs of MiReturnSystemImageAddress @ 0x140698C68
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140696090 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiReturnImageBase @ 0x140721EA0 (MiReturnImageBase.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 */

void __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v4; // r8
  int SystemRegionType; // eax

  v2 = a2 >> 12;
  PteAddress = MiGetPteAddress(a1);
  SystemRegionType = MiGetSystemRegionType(v4);
  MiReleaseDriverPtes(SystemRegionType == 1, PteAddress, v2);
}
