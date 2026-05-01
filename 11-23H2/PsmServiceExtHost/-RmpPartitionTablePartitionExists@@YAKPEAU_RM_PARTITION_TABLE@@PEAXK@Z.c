/*
 * XREFs of ?RmpPartitionTablePartitionExists@@YAKPEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180085A60
 * Callers:
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180011FDC (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x18004331C (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 */

_BOOL8 __fastcall RmpPartitionTablePartitionExists(struct _RM_PARTITION_TABLE *a1, void *a2)
{
  void *v2; // rbx
  struct _RM_PARTITION *PartitionInternal; // rbx

  v2 = a2;
  if ( a2 == (void *)-2LL )
    v2 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v2, 15);
  RtlReleaseSRWLockShared(a1);
  return PartitionInternal != 0LL;
}
