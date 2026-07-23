/*
 * XREFs of MmAllocatePagesForMdl @ 0x1403D8690
 * Callers:
 *     sub_140616B60 @ 0x140616B60 (sub_140616B60.c)
 *     sub_14090943C @ 0x14090943C (sub_14090943C.c)
 * Callees:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)sub_140265428(
                 (__int64)&StartContext,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 192)
                                     + 138LL),
                 0,
                 *((_QWORD *)KeGetCurrentThread() + 23));
}
