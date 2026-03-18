/*
 * XREFs of VidMmPurgeAllSegments @ 0x1C0018C00
 * Callers:
 *     <none>
 * Callees:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B4AE0 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VidMmPurgeAllSegments()
{
  return VIDMM_GLOBAL::PurgeAllSegments();
}
