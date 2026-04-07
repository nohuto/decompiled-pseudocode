/*
 * XREFs of ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E4B0C
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB56C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180097930 (-GetAccentBlurBehindBrush@CAccent@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 */

__int64 __fastcall CTopLevelWindow::GetAccentBlurBehindBrush(
        CTopLevelWindow *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  CAccent *v4; // rcx
  unsigned int v5; // ebx
  int AccentBlurBehindBrush; // eax

  v4 = (CAccent *)*((_QWORD *)this + 35);
  v5 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  *(_DWORD *)a4 = 1065353216;
  *((_DWORD *)a4 + 1) = 1065353216;
  *((_DWORD *)a4 + 2) = 1065353216;
  if ( v4 )
  {
    AccentBlurBehindBrush = CAccent::GetAccentBlurBehindBrush(v4, a2, a3, a4);
    v5 = AccentBlurBehindBrush;
    if ( AccentBlurBehindBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AccentBlurBehindBrush, 0x6DFu);
  }
  return v5;
}
