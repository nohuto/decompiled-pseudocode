/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x140628360
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgeZeroList @ 0x14064E28C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140651A90 (MiPurgePartitionStandby.c)
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
