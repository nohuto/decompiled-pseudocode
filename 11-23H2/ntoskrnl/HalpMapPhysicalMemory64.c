/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x14040F750
 * Callers:
 *     HalpCheckLowMemoryPostSleep @ 0x140A96C0C (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96D48 (HalpCheckLowMemoryPreSleep.c)
 *     HalpAllocateScratchMemory @ 0x140AB3930 (HalpAllocateScratchMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140B4893C (HalpAllocPhysicalMemory.c)
 * Callees:
 *     HalpMap @ 0x14037E228 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemory64(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1u, a4, v5);
}
