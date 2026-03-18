/*
 * XREFs of MmAllocateMappingAddress @ 0x14086C930
 * Callers:
 *     SmFpPreAllocate @ 0x1403A6478 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x140548094 (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B64468 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B64660 (HalpDmaAllocateReservedMapping.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x14086C950 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
