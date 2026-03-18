/*
 * XREFs of ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x1C00F0CD8
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C23BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00F0C38 (-RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1C00F0D2C (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 */

int __fastcall VIDMM_GLOBAL::RecommitSystemFenceGpuVA(VIDMM_GLOBAL *this, unsigned int a2)
{
  VIDMM_DEVICE *v2; // rdi
  __int64 v3; // rbx
  int result; // eax

  v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v3 = a2;
  result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
             *(VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + v3 + 749) + 56LL),
             this,
             *((struct VIDMM_DEVICE **)this + v3 + 749),
             *((struct VIDMM_PROCESS **)this + 5048),
             v3);
  if ( result >= 0 )
    return VIDMM_DEVICE::RecommitPagingQueueSystemGpuVAs(v2, v3);
  return result;
}
