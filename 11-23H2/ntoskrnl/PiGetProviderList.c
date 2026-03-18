/*
 * XREFs of PiGetProviderList @ 0x1406C98D0
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C982C (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C284 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C344 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1408687B8 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086ED78 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14096C92C (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
