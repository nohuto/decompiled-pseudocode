/*
 * XREFs of ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D8F98
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800D79D0 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9B44 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9C28 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D9EA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800D9FD8 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DC250 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E08A0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DB778 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800E9DE4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CStoryboard::_AddAnimationComponent(CStoryboard *this, struct CAnimationComponent *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // r9d
  unsigned int v8; // eax
  struct CAnimationComponent *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v3 = *((unsigned int *)this + 30);
  v4 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    v5 = -2147024362;
    v6 = 181;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v6);
    v7 = v5;
    v8 = 5794;
    goto LABEL_7;
  }
  if ( v4 > *((_DWORD *)this + 29) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 96, 8u, 1, &v10);
    if ( v5 < 0 )
    {
      v6 = 192;
      goto LABEL_11;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v3) = v10;
    *((_DWORD *)this + 30) = v4;
  }
  v5 = CTransitionVisualController::AddAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         v10);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 5795;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, v8);
    CStoryboard::_RemoveAnimationComponent(this, v10);
  }
  return (unsigned int)v5;
}
