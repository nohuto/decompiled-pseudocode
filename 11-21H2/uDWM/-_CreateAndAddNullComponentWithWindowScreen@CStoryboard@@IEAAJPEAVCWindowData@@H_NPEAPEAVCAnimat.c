/*
 * XREFs of ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C
 * Callers:
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800D7B20 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800D7EB0 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DCD90 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DD850 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DDA90 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE470 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEE70 (-_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF060 (-_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@C.c)
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF1F0 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFA30 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E00F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E07C0 (-_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EC5BC (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        bool a4,
        struct CAnimationComponent **a5)
{
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  CBaseObject *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = CTransitionVisualController::CreateNullAnimationComponentWithWindow(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         a2,
         a3,
         this,
         a4,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (volatile signed __int32 *)v11;
    v9 = CStoryboard::_AddAnimationComponent(this, v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x168Eu);
      goto LABEL_8;
    }
    *a5 = (struct CAnimationComponent *)v8;
    if ( !v8 )
      return v7;
    _InterlockedIncrement(v8 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x168Du);
  }
  v8 = (volatile signed __int32 *)v11;
LABEL_8:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
