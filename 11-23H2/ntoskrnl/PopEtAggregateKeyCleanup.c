/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1407B29D8
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1918 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x1407B1CE8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1407B2578 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1407B9170 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtEnergyTrackerCleanup @ 0x14099865C (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1407B2A20 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1407B2AE0 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = *a1;
  if ( v5 )
  {
    result = PopEtAppIdDereference(v5, a2, a3, a4);
    *a1 = 0LL;
  }
  v7 = a1[1];
  if ( v7 )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56, v7);
    a1[1] = 0LL;
  }
  return result;
}
