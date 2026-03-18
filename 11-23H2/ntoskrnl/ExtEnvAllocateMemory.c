/*
 * XREFs of ExtEnvAllocateMemory @ 0x14037FC68
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037E8B4 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x14037EFA0 (DmrEnumerateSatcDevices.c)
 *     DmrpRmrrTreeAddNewScope @ 0x14037F608 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14037F6A8 (DmrpRmrrTreeAddRegionToDevice.c)
 *     IvtCreateDevice @ 0x14037F900 (IvtCreateDevice.c)
 *     HalpIvtAllocateReservedDomainList @ 0x14037F9E4 (HalpIvtAllocateReservedDomainList.c)
 *     HalpIvtCreateReservedDevice @ 0x14037FB00 (HalpIvtCreateReservedDevice.c)
 *     DmrConvertDeviceScope @ 0x14037FBCC (DmrConvertDeviceScope.c)
 *     HalpDmaAlwaysReserveLogicalAddressRangeInternal @ 0x14037FCDC (HalpDmaAlwaysReserveLogicalAddressRangeInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B480 (IvtAllocateScalableModePasidTables.c)
 *     HalpHsaAllocateReservedDomainList @ 0x14052E128 (HalpHsaAllocateReservedDomainList.c)
 *     HalpHsaCreateReservedDevice @ 0x14052E19C (HalpHsaCreateReservedDevice.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E3A4 (HalpIommuProcessDeviceEntries.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052E664 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ECB0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14052F490 (HsaCreateDevice.c)
 *     HsaProcessIvmd @ 0x14053095C (HsaProcessIvmd.c)
 *     IvmdFindDeviceEntry @ 0x1405315F8 (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x140531698 (IvmdProcessRange.c)
 *     HsaInitializeInterruptRemapping @ 0x140A990C8 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14037DB08 (HalpMmAllocateMemoryInternal.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AE20 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140435A00 (memset.c)
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
