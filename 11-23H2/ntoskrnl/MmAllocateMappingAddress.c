/*
 * XREFs of MmAllocateMappingAddress @ 0x14086C460
 * Callers:
 *     SmFpPreAllocate @ 0x1403A6C04 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x140547FF4 (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B608F8 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B60AF0 (HalpDmaAllocateReservedMapping.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x14086C480 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
