/*
 * XREFs of ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18001B974
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E4D88 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
        CTopLevelWindow *this,
        struct CWindowData *a2)
{
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4
  __int64 v3; // r8

  if ( (*((_BYTE *)a2 + 372) & 1) != 0 )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(a2);
    CVisual::SetScale(
      *(CVisual **)(v3 + 272),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
