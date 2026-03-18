/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1407B2F88
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1407B1EC8 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x1407B2298 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1407B2B28 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1407B9720 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtEnergyTrackerCleanup @ 0x14099870C (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1407B2FD0 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1407B3090 (RtlInternEntryDereference.c)
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
