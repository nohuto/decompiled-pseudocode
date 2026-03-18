/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14086B248
 * Callers:
 *     CcInitializePartition @ 0x1403A0390 (CcInitializePartition.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403C0AA8 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeCacheManager @ 0x140B49A88 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * **a1) + 17040LL);
}
