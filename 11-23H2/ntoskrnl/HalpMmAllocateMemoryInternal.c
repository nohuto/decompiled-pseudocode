/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x14037DB08
 * Callers:
 *     HalSocRequestApi @ 0x1403783EC (HalSocRequestApi.c)
 *     HalpInterruptRegisterController @ 0x1403786E4 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140378AB4 (HalpTimerRegister.c)
 *     HalpInterruptRegisterLine @ 0x1403794A0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptParseMadt @ 0x1403797C8 (HalpInterruptParseMadt.c)
 *     HalpMmAllocateMemory @ 0x14037D6E0 (HalpMmAllocateMemory.c)
 *     HalpInterruptInitializeIpis @ 0x14037E6B0 (HalpInterruptInitializeIpis.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037F854 (HalpMmAllocatePerProcessorMemory.c)
 *     ExtEnvAllocateMemory @ 0x14037FC68 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037FD90 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037FEA8 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuProcessReservationsInternal @ 0x14039EC74 (HalpIommuProcessReservationsInternal.c)
 *     HalpTimerCreateReferencePage @ 0x1403A44A8 (HalpTimerCreateReferencePage.c)
 *     HalpIommuAddDebuggerException @ 0x1403A9DB8 (HalpIommuAddDebuggerException.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14050DA60 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x140517564 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x14051A760 (HalpInterruptMapParkedPage.c)
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
 *     HalpMap @ 0x14037E228 (HalpMap.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
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
