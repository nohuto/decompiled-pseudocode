/*
 * XREFs of sub_1406333A8 @ 0x1406333A8
 * Callers:
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140633504 @ 0x140633504 (sub_140633504.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall sub_1406333A8(ULONG_PTR ***a1, unsigned __int64 a2)
{
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v4; // rbx
  PVOID v5; // rax
  void *v6; // rdi

  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(0, -1, 0LL, a2, 1, 0, 5, *a1);
  v4 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
    return 0LL;
  v5 = MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v6 = v5;
  if ( !v5 )
  {
LABEL_5:
    sub_140221A30((ULONG_PTR)v4, 0);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)sub_140633504(a1, v4, v5) )
  {
    MmUnmapLockedPages(v6, v4);
    goto LABEL_5;
  }
  return v6;
}
