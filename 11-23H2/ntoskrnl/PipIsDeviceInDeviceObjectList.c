/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140868F8C
 * Callers:
 *     IopSortRelationListForRemove @ 0x1408689F8 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868BB8 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x140868C98 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x140868EFC (IopAddRelationToList.c)
 *     IopIsDescendantNode @ 0x140869134 (IopIsDescendantNode.c)
 *     IopSetRelationsTag @ 0x140881878 (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x14096CB2C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140868FB0 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
