/*
 * XREFs of ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D62E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA330 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800DE64C (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE680 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CShrinkPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CBaseObject *v4; // rbx
  int v5; // r14d
  int PVLTarget; // eax
  int v10; // eax
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  CPanelAnimation *v16; // rcx
  int v17; // ecx
  LONG v18; // edx
  LONG v19; // edx
  int v20; // eax
  struct tagPOINT *v21; // rcx
  CVisual *v22; // rcx
  int v23; // eax
  int v24; // eax
  __int128 v25; // xmm0
  char result; // al
  struct tagRECT v27; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v28; // [rsp+60h] [rbp-20h] BYREF
  CBaseObject *v29; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v29 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x29 )
      goto LABEL_30;
    v25 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 136) = 1;
    *(_OWORD *)(a1 + 140) = v25;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x28 )
  {
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x29
      || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
            *(HWND *)(a2 + 40),
            0) )
    {
      goto LABEL_30;
    }
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v29);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x5B7u);
LABEL_12:
      v4 = v29;
LABEL_28:
      if ( v4 )
        CBaseObject::Release(v4);
      goto LABEL_30;
    }
    v4 = v29;
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v29 + 5), 1.0);
    v12 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v28 = *(struct tagRECT *)((char *)v4 + 88);
    v11 = v28;
    CAnimatedTransitionVisual::SetBeginRect(v12, &v28);
    v13 = *((_QWORD *)v4 + 5);
    *(struct tagRECT *)(v13 + 872) = v11;
    goto LABEL_21;
  }
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
          *(HWND *)(a2 + 40),
          1) )
    goto LABEL_30;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v14 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v15 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v14,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v29);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x599u);
      goto LABEL_12;
    }
    v4 = v29;
    v28 = *(struct tagRECT *)((char *)v29 + 88);
    v27 = v28;
    if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v16, &v27, (const struct tagRECT *)(a1 + 140)) )
    {
      v17 = 0;
      v18 = *(_DWORD *)(a1 + 140);
      if ( v28.right - v28.left >= 0 )
        v17 = v28.right - v28.left;
      v27.right = v18 + v17;
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 148);
      v20 = 0;
      v27.right = v19;
      if ( v28.right - v28.left >= 0 )
        v20 = v28.right - v28.left;
      v18 = v19 - v20;
    }
    v21 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v27.left = v18;
    CAnimatedTransitionVisual::SetBeginRect(v21, &v28);
    v13 = *((_QWORD *)v4 + 5);
    *(struct tagRECT *)(v13 + 872) = v27;
LABEL_21:
    v22 = (CVisual *)(v13 + 8);
    v23 = *(_DWORD *)(v13 + 96);
    if ( (v23 & 0x1000) == 0 )
    {
      *((_DWORD *)v22 + 22) = v23 | 0x1000;
      CVisual::PropagateDirtyChildren(v22);
    }
    goto LABEL_28;
  }
  v24 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 1.0, 0LL);
  v5 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0x5AFu);
LABEL_30:
  result = 1;
  *a4 = v5;
  return result;
}
