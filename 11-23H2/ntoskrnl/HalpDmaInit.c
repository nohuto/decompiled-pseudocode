/*
 * XREFs of HalpDmaInit @ 0x140B605F8
 * Callers:
 *     HalpDmaInitSystem @ 0x140A907E0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitializeControllers @ 0x14039C868 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B608F8 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B609CC (HalpDmaAllocateMappingResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C63FC8, (unsigned int)dword_140C63FC0, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C63F90 = 0xFFFFFFLL;
    dword_140C63F9C = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C641A8, (unsigned int)dword_140C641A0, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C64170 = 0xFFFFFFLL;
      dword_140C6417C = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C640A8, (unsigned int)dword_140C640A0, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C6407C = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C64288, (unsigned int)dword_140C64280, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C6425C = 3;
          result = HalpDmaAllocateEmergencyResources();
          if ( (int)result >= 0 )
          {
            result = HalpDmaAllocateMappingResources();
            if ( (int)result >= 0 )
              return HalpDmaInitializeControllers();
          }
        }
      }
    }
  }
  return result;
}
