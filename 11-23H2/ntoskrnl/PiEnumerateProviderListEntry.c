/*
 * XREFs of PiEnumerateProviderListEntry @ 0x140838648
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C985C (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C534 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1408689F8 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086EFB8 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x14096CB2C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140398664 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
