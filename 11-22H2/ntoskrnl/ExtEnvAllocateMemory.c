/*
 * XREFs of ExtEnvAllocateMemory @ 0x1403802B8
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037EF04 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x14037F5F0 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x14037FC58 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14037FCF8 (DmrpRmrrTreeAddRegionToDevice.c)
 *     IvtCreateDevice @ 0x14037FF50 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x140380034 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x140380150 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x14038021C (DmrConvertDeviceScope.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14038032C (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B530 (IvtAllocateScalableModePasidTables.c)
 *     HalpHsaAllocateReservedDomainList @ 0x14052E1D8 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x14052E24C (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E454 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052E714 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ED60 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052F540 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140530A0C (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1405316A8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x140531748 (IvmdProcessRange.c)
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037E158 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall ExtEnvAllocateMemory(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *MemoryInternal; // rax

  v3 = 0;
  v4 = a2;
  if ( HalpExtEnvAllocationPhase )
  {
    if ( HalpExtEnvAllocationPhase != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    MemoryInternal = (void *)HalpMmAllocCtxAlloc(a1, a2);
  }
  else
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(a2, 1u);
  }
  *a3 = MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741670;
  memset(MemoryInternal, 0, v4);
  return v3;
}
