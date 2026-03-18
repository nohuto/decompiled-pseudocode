/*
 * XREFs of PiGetProviderList @ 0x140775110
 * Callers:
 *     IopSortRelationListForRemove @ 0x140768080 (IopSortRelationListForRemove.c)
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1407750C0 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x14080E218 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1409581A0 (IopCheckIfMergeRequired.c)
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
