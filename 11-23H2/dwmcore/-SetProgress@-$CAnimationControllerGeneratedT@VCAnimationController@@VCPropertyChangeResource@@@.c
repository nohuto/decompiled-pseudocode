/*
 * XREFs of ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1800CBB44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800CBB00 (-SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800CBB7C (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress(
        float *a1,
        float a2)
{
  if ( a2 != a1[20] )
  {
    a1[20] = fminf(1.0, fmaxf(a2, 0.0));
    CAnimationController::OnProgressChanged((CAnimationController *)a1);
  }
  return 0LL;
}
