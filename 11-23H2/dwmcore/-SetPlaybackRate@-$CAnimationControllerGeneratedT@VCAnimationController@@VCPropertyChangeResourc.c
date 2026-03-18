/*
 * XREFs of ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1801C8340
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x180022CD8 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate(
        float *a1,
        float a2)
{
  if ( a2 != a1[21] )
  {
    a1[21] = a2;
    CAnimationController::OnPlaybackRateChanged((CAnimationController *)a1);
  }
  return 0LL;
}
