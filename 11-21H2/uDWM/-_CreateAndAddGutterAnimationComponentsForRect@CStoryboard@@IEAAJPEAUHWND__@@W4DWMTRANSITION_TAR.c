/*
 * XREFs of ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800D9FD8
 * Callers:
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DA270 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800EC2F4 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        CBaseObject *a7,
        CBaseObject *a8)
{
  int GutterAnimationComponentsForRect; // eax
  unsigned int v9; // esi

  if ( a7 )
    *(_QWORD *)a7 = 0LL;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  GutterAnimationComponentsForRect = CTransitionVisualController::CreateGutterAnimationComponentsForRect(
                                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                                       a2,
                                       a3);
  v9 = GutterAnimationComponentsForRect;
  if ( GutterAnimationComponentsForRect < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      GutterAnimationComponentsForRect,
      0x1669u);
  return v9;
}
