/*
 * XREFs of MiDeleteVaTail @ 0x140279000
 * Callers:
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiTerminateWsleCluster @ 0x140279080 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EBB4 (MiDecayPfnFullyInitialized.c)
 *     MiFlushGraphicsPtes @ 0x140626498 (MiFlushGraphicsPtes.c)
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
