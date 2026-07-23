/*
 * XREFs of MiDeleteVaTail @ 0x1402793B0
 * Callers:
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiDecayPfnFullyInitialized @ 0x14033F044 (MiDecayPfnFullyInitialized.c)
 *     MiFlushGraphicsPtes @ 0x140626978 (MiFlushGraphicsPtes.c)
 */

__int64 __fastcall MiDeleteVaTail(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx

  v1 = (_QWORD *)a1[21];
  MiTerminateWsleCluster(v1 + 17);
  MiFlushTbList(a1[2]);
  v3 = v1[2];
  if ( v3 )
  {
    MiFlushGraphicsPtes(v3, ((v1[3] - v3) >> 3) + 1);
    v1[2] = 0LL;
  }
  if ( *v1 )
  {
    MiDeletePteRun(a1[3], v1);
    *v1 = 0LL;
  }
  v4 = v1[13];
  if ( v4 )
  {
    MiDecayPfnFullyInitialized(v4);
    v1[13] = 0LL;
  }
  return 0LL;
}
