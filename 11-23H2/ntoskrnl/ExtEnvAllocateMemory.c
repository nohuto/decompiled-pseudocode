/*
 * XREFs of ExtEnvAllocateMemory @ 0x14037FE08
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037EA54 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x14037F140 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x14037F7A8 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14037F848 (DmrpRmrrTreeAddRegionToDevice.c)
 *     IvtCreateDevice @ 0x14037FAA0 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x14037FB84 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x14037FCA0 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x14037FD6C (DmrConvertDeviceScope.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14037FE7C (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B9D0 (IvtAllocateScalableModePasidTables.c)
 *     HalpHsaAllocateReservedDomainList @ 0x14052E678 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x14052E6EC (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E8F4 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052EBB4 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052F200 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052F9E0 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x140530EAC (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x140531B48 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x140531BE8 (IvmdProcessRange.c)
 *     HsaInitializeInterruptRemapping @ 0x140A98F38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037DCA8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
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
