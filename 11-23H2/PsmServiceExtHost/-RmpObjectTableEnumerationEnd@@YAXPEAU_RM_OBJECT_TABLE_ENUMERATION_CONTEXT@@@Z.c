/*
 * XREFs of ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800859C4
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800502D0 (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableEnumerationEnd(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  RtlReleaseSRWLockShared(*(_QWORD *)a1 + 16LL);
}
