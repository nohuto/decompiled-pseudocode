/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1402630A0
 * Callers:
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 *     sub_14038DE68 @ 0x14038DE68 (sub_14038DE68.c)
 *     sub_140394AB4 @ 0x140394AB4 (sub_140394AB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 *     sub_1405F7240 @ 0x1405F7240 (sub_1405F7240.c)
 *     sub_1406169F0 @ 0x1406169F0 (sub_1406169F0.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     sub_140AAB320 @ 0x140AAB320 (sub_140AAB320.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192)
                                     + 138LL),
                 Flags,
                 0LL);
}
