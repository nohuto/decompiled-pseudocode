/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140838314
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C1AC (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140837EC0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868978 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140868E4C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140868FA0 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140398484 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
