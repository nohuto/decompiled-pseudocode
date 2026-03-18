/*
 * XREFs of PiGetDependentList @ 0x14079C318
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C1AC (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C284 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140837EC0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868978 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140868E4C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140868FA0 (PnpRequestDeviceRemovalWorker.c)
 *     IoDuplicateDependency @ 0x140954170 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954968 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
