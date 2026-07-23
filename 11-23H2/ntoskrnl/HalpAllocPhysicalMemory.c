/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140B4893C
 * Callers:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14037D8F0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037DCA8 (HalpMmAllocateMemoryInternal.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14037DD90 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAcpiAllocateMemory @ 0x14037E070 (HalpAcpiAllocateMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E1A8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateEarlyPages @ 0x140505AA0 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F7D0 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpAllocateScratchMemory @ 0x140AB3930 (HalpAllocateScratchMemory.c)
 *     HalpDmaInitMemory @ 0x140B48764 (HalpDmaInitMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140B65578 (HalpSetupAcpiPhase0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B91BDC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B91CD4 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x14040F930 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140B489AC (HalpAllocPhysicalMemoryInternal.c)
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
