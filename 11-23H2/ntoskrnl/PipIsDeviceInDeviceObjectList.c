/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140868D4C
 * Callers:
 *     IopSortRelationListForRemove @ 0x1408687B8 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868978 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x140868A58 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x140868CBC (IopAddRelationToList.c)
 *     IopIsDescendantNode @ 0x140868EF4 (IopIsDescendantNode.c)
 *     IopSetRelationsTag @ 0x140881638 (IopSetRelationsTag.c)
 *     IopCheckIfMergeRequired @ 0x14096C92C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140868D70 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
