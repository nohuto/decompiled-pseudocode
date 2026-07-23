/*
 * XREFs of HalMapIoSpace @ 0x14037E2D0
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377720 (HalpApicInitializeLocalUnit.c)
 *     HalpHpetDiscover @ 0x140377980 (HalpHpetDiscover.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E1A8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037EA54 (HalpIvtProcessDrhdEntry.c)
 *     HalpApicInitializeIoUnit @ 0x1403A5300 (HalpApicInitializeIoUnit.c)
 *     HalpHpetInitialize @ 0x1403B5780 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403B6CD0 (HalpPmTimerInitialize.c)
 *     HalpHvTimerInitialize @ 0x1403CDBD0 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F7D0 (ExtEnvAllocatePhysicalMemory.c)
 *     WdHwCreateHardwareRegister @ 0x14052A7E8 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14052D560 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140A98F38 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140A990D0 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140B65948 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x14037E3C8 (HalpMap.c)
 */

PVOID __stdcall HalMapIoSpace(LARGE_INTEGER PhysicalAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  int v3; // edx

  if ( (unsigned int)CacheType > MmCached )
    return 0LL;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( CacheType != MmCached )
    CacheType = MmNonCached;
  return (PVOID)HalpMap(PhysicalAddress.LowPart, v3, CacheType, 0, 4);
}
