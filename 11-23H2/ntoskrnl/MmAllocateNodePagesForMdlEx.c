/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1403C41E0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402F8A30 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

__int64 __fastcall MmAllocateNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
