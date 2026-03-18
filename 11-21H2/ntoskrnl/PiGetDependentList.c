/*
 * XREFs of PiGetDependentList @ 0x14076BBF4
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407682A8 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x14076ACA8 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1408442B0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
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
