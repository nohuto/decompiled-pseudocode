/*
 * XREFs of HalpMmAllocateMemoryInternal @ 0x14037E158
 * Callers:
 *     HalSocRequestApi @ 0x140378A3C (HalSocRequestApi.c)
 *     HalpInterruptRegisterController @ 0x140378D34 (HalpInterruptRegisterController.c)
 *     HalpTimerRegister @ 0x140379104 (HalpTimerRegister.c)
 *     HalpInterruptRegisterLine @ 0x140379AF0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptParseMadt @ 0x140379E18 (HalpInterruptParseMadt.c)
 *     HalpMmAllocateMemory @ 0x14037DD30 (HalpMmAllocateMemory.c)
 *     HalpInterruptInitializeIpis @ 0x14037ED00 (HalpInterruptInitializeIpis.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14037FEA4 (HalpMmAllocatePerProcessorMemory.c)
 *     ExtEnvAllocateMemory @ 0x1403802B8 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x1403803E0 (HalRegisterPermanentAddressUsage.c)
 *     HalpIommuCreateDmarPageTable @ 0x1403804F8 (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuProcessReservationsInternal @ 0x14039E984 (HalpIommuProcessReservationsInternal.c)
 *     HalpTimerCreateReferencePage @ 0x1403A3D48 (HalpTimerCreateReferencePage.c)
 *     HalpIommuAddDebuggerException @ 0x1403A96C8 (HalpIommuAddDebuggerException.c)
 *     HalpExtRegisterResourceDescriptor @ 0x14050D6D0 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x140517624 (HalpRegisterDmaController.c)
 *     HalpInterruptMapParkedPage @ 0x14051A820 (HalpInterruptMapParkedPage.c)
 *     ExtEnvRegisterIommu @ 0x140B4B6E4 (ExtEnvRegisterIommu.c)
 *     HalpInitializeInterrupts @ 0x140B4BA90 (HalpInitializeInterrupts.c)
 *     HalpCopyDebugDescriptor @ 0x140B60790 (HalpCopyDebugDescriptor.c)
 *     HalpPowerInitNvsRegionData @ 0x140B65C44 (HalpPowerInitNvsRegionData.c)
 *     HalpSetupAcpiPhase0 @ 0x140B66918 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B66ED8 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAllocateNumaConfigData @ 0x140B67340 (HalpAllocateNumaConfigData.c)
 *     HalpExtInitExtensions @ 0x140B6F1A8 (HalpExtInitExtensions.c)
 *     HalpBlkAllocateShadowData @ 0x140B92E34 (HalpBlkAllocateShadowData.c)
 * Callees:
 *     HalpMap @ 0x14037E878 (HalpMap.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpAllocPhysicalMemory @ 0x140B4C03C (HalpAllocPhysicalMemory.c)
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
