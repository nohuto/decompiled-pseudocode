/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x140627E10
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgeZeroList @ 0x14064DD3C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140651540 (MiPurgePartitionStandby.c)
 */

__int64 __fastcall MiMirrorPurgePartitionPages(__int64 a1, int a2)
{
  if ( a2 )
  {
    MiPurgePartitionStandby();
    *(_BYTE *)(a1 + 15780) = 0;
  }
  return MiPurgeZeroList(a1);
}
