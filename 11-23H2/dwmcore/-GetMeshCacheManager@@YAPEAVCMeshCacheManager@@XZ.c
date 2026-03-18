/*
 * XREFs of ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x18009125C
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800904D8 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     <none>
 */

struct CMeshCacheManager *GetMeshCacheManager(void)
{
  struct CMeshCacheManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CMeshCacheManager *)*((_QWORD *)g_pComposition + 35);
  return result;
}
