/*
 * XREFs of ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9B44
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DCD90 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB378 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBitmapAnimationComponent(
        CStoryboard *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int BitmapAnimationComponent; // eax
  unsigned int v7; // edi
  int v8; // eax

  BitmapAnimationComponent = CTransitionVisualController::CreateBitmapAnimationComponent(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                         + 23));
  v7 = BitmapAnimationComponent;
  if ( BitmapAnimationComponent >= 0 )
  {
    v8 = CStoryboard::_AddAnimationComponent(a1, 0LL);
    v7 = v8;
    if ( v8 >= 0 )
      *a5 = 0LL;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v8, 0x1647u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      BitmapAnimationComponent,
      0x1646u);
  }
  return v7;
}
