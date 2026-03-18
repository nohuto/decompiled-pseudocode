/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x140416FEC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A62018 (HalpCheckLowMemoryPreSleep.c)
 *     HalpAllocateScratchMemory @ 0x140A72820 (HalpAllocateScratchMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140AF9E94 (HalpAllocPhysicalMemory.c)
 * Callees:
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemory64(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1u, a4, v5);
}
