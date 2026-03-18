/*
 * XREFs of HalMapIoSpace @ 0x14037E130
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140377580 (HalpApicInitializeLocalUnit.c)
 *     HalpHpetDiscover @ 0x1403777E0 (HalpHpetDiscover.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E008 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037E8B4 (HalpIvtProcessDrhdEntry.c)
 *     HalpApicInitializeIoUnit @ 0x1403A5120 (HalpApicInitializeIoUnit.c)
 *     HalpHpetInitialize @ 0x1403B55A0 (HalpHpetInitialize.c)
 *     HalpPmTimerInitialize @ 0x1403B6AF0 (HalpPmTimerInitialize.c)
 *     HalpHvTimerInitialize @ 0x1403CD9F0 (HalpHvTimerInitialize.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F280 (ExtEnvAllocatePhysicalMemory.c)
 *     WdHwCreateHardwareRegister @ 0x14052A298 (WdHwCreateHardwareRegister.c)
 *     IvtInitializeIdentityMappings @ 0x14052D010 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeIommu @ 0x140A89E10 (IvtInitializeIommu.c)
 *     HsaInitializeInterruptRemapping @ 0x140A990C8 (HsaInitializeInterruptRemapping.c)
 *     HsaInitializeIommu @ 0x140A99260 (HsaInitializeIommu.c)
 *     HalpAcpiSetupPmRegister @ 0x140B65948 (HalpAcpiSetupPmRegister.c)
 * Callees:
 *     HalpMap @ 0x14037E228 (HalpMap.c)
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
