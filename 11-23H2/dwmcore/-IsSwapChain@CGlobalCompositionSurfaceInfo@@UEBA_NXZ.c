/*
 * XREFs of ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180032640
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180032038 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x1800327BC (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1800EBC9C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( (unsigned int)((__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 3) <= 1 )
    return *((_DWORD *)this + 34) == 3;
  return v1;
}
