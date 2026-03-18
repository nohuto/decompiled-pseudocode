/*
 * XREFs of MiComputeCommitThresholds @ 0x140396178
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140396064 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x14065655C (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x1403961E0 (MiSyncCommitSignals.c)
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[2227];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[2052] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[2051] = v1 - v3;
  return MiSyncCommitSignals(a1, 1LL);
}
