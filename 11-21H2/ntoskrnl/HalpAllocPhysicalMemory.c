/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140AF9E94
 * Callers:
 *     HalpAcpiAllocateMemory @ 0x1403BF088 (HalpAcpiAllocateMemory.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BF104 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocateAndInsertPageTablePage @ 0x1403BF1EC (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpAllocateEarlyPages @ 0x140509490 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x140522410 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x1405229B0 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x140529428 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateScratchMemory @ 0x140A72820 (HalpAllocateScratchMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 *     HalpDmaInitMemory @ 0x140AF9CC8 (HalpDmaInitMemory.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B4CE34 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B4CF2C (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x140416FEC (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140AF9F04 (HalpAllocPhysicalMemoryInternal.c)
 */

__int64 __fastcall HalpAllocPhysicalMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) <= 3 )
  {
    v7 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL);
    if ( v7 )
    {
      v8 = (void *)HalpMapPhysicalMemory64(v7, 1LL, 0, 4LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x1000uLL);
        HalpUsedAllocDescriptors = 0;
        HalpAllocationDescriptorArray = v9;
        HalpAllocationDescriptorArraySize = 85;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3);
}
