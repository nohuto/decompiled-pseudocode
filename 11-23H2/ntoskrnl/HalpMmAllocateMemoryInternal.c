/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x14037DCA8
 * Callers:
 *     HalSocRequestApi @ 0x14037858C (HalSocRequestApi.c)
 *     HalpInterruptRegisterController @ 0x140378884 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140378C54 (HalpTimerRegister.c)
 *     HalpInterruptRegisterLine @ 0x140379640 (HalpInterruptRegisterLine.c)
 *     HalpInterruptParseMadt @ 0x140379968 (HalpInterruptParseMadt.c)
 *     HalpMmAllocateMemory @ 0x14037D880 (HalpMmAllocateMemory.c)
 *     HalpInterruptInitializeIpis @ 0x14037E850 (HalpInterruptInitializeIpis.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037F9F4 (HalpMmAllocatePerProcessorMemory.c)
 *     ExtEnvAllocateMemory @ 0x14037FE08 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037FF30 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuCreateDmarPageTable @ 0x140380048 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuProcessReservationsInternal @ 0x14039EE54 (HalpIommuProcessReservationsInternal.c)
 *     HalpTimerCreateReferencePage @ 0x1403A4688 (HalpTimerCreateReferencePage.c)
 *     HalpIommuAddDebuggerException @ 0x1403A9F98 (HalpIommuAddDebuggerException.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14050DFB0 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x140517AB4 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x14051ACB0 (HalpInterruptMapParkedPage.c)
 *     ExtEnvRegisterIommu @ 0x140B47FE4 (ExtEnvRegisterIommu.c)
 *     HalpInitializeInterrupts @ 0x140B48390 (HalpInitializeInterrupts.c)
 *     HalpCopyDebugDescriptor @ 0x140B5D750 (HalpCopyDebugDescriptor.c)
 *     HalpPowerInitNvsRegionData @ 0x140B620D4 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140B65578 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B65B38 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140B65FA0 (HalpAllocateNumaConfigData.c)
 *     HalpExtInitExtensions @ 0x140B6DD3C (HalpExtInitExtensions.c)
 *     HalpBlkAllocateShadowData @ 0x140B91E34 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x14037E3C8 (HalpMap.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140B4893C (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpMmAllocateMemoryInternal(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !HalpMmLoaderBlock || KeGetPcr()->Prcb.Number )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( HalpMmLeftoverMemorySize >= v3 )
  {
    result = HalpMmLeftoverMemory;
    HalpMmLeftoverMemory += v3;
    HalpMmLeftoverMemorySize -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, 0LL, v5, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = HalpMap(v6, v5, a2 == 1, 0, 4);
  if ( v7 )
  {
    HalpMmLeftoverMemory = v7 + v3;
    HalpMmLeftoverMemorySize = (v5 << 12) - v3;
  }
  return v7;
}
