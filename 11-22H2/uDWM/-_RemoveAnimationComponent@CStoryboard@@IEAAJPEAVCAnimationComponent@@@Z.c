/*
 * XREFs of ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE4AC
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000E4F0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     wil::details::lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___::_lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___ @ 0x1800D98D8 (wil--details--lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___--_lambda_call__lambda_e9cb.c)
 *     ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800DC63C (-StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DE8C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DEB44 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 * Callees:
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1DC (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x18000D2A4 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CStoryboard::_RemoveAnimationComponent(CStoryboard *this, struct CVisual **a2)
{
  __int64 v3; // r8
  struct CVisual **v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  DynArray<CAnimationComponent *,0>::Remove((__int64 *)this + 12, &v5);
  CTransitionVisualController::RemoveAnimationComponent(
    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
    a2,
    v3);
  if ( a2 )
    CBaseObject::Release((CBaseObject *)a2);
  return 0LL;
}
