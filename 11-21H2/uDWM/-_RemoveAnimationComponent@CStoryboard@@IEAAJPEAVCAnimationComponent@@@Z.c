/*
 * XREFs of ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DB778
 * Callers:
 *     wil::details::lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___::_lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___ @ 0x1800D4840 (wil--details--lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___--_lambda_call__lambda_e9cb.c)
 *     ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800D8E1C (-StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DBBA0 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DBE14 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180069BD4 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800EDB00 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CStoryboard::_RemoveAnimationComponent(CStoryboard *this, struct CAnimationComponent *a2)
{
  struct CAnimationComponent *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 12, &v4);
  CTransitionVisualController::RemoveAnimationComponent(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
    a2);
  if ( a2 )
    CBaseObject::Release(a2);
  return 0LL;
}
