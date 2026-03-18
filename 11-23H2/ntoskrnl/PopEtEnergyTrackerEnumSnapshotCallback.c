/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1407B1570
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1407B0F34 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x1407B1CE8 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate(a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
