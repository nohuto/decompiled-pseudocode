/*
 * XREFs of PiGetDependentList @ 0x14079C508
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C39C (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C474 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1408381C0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868BB8 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14086908C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 *     IoDuplicateDependency @ 0x140954370 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140954B68 (PnpGetDeviceDependencyList.c)
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
