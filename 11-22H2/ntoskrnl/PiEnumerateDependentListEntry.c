/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140839E64
 * Callers:
 *     PipAttemptDependentsStart @ 0x14079C6BC (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140839A10 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipVisitDeviceObjectListEntry @ 0x140868E48 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14086931C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140869470 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140396904 (PiListEntryToDependencyEdge.c)
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
