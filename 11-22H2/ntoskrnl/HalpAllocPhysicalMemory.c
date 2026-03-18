/*
 * XREFs of HalpAllocPhysicalMemory @ 0x140B4C03C
 * Callers:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14037DDA0 (HalpMmAllocateAndInsertPageTablePage.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037E158 (HalpMmAllocateMemoryInternal.c)
 *     HalpSocApiAllocatePhysicalMemory @ 0x14037E240 (HalpSocApiAllocatePhysicalMemory.c)
 *     HalpAcpiAllocateMemory @ 0x14037E520 (HalpAcpiAllocateMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E658 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpAllocateEarlyPages @ 0x140505660 (HalpAllocateEarlyPages.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F340 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpAllocateScratchMemory @ 0x140AB4920 (HalpAllocateScratchMemory.c)
 *     HalpDmaInitMemory @ 0x140B4BE64 (HalpDmaInitMemory.c)
 *     HalpSetupAcpiPhase0 @ 0x140B66918 (HalpSetupAcpiPhase0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B92BDC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B92CD4 (HalpBlkAllocatePageTablePage.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x14040F0F0 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x140435400 (memset.c)
 *     HalpAllocPhysicalMemoryInternal @ 0x140B4C0AC (HalpAllocPhysicalMemoryInternal.c)
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
