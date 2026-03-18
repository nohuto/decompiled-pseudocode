/*
 * XREFs of ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1800401A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x1800401D4 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 */

struct COverlayContext *__fastcall CLegacyRenderTarget::CollectOverlayCandidates(CLegacyRenderTarget *this)
{
  CDesktopTree *v2; // rcx

  if ( !*((_QWORD *)this + 5) )
    return 0LL;
  v2 = (CDesktopTree *)*((_QWORD *)this + 3);
  if ( !v2 )
    return 0LL;
  CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(v2);
  return (CLegacyRenderTarget *)((char *)this + 56);
}
