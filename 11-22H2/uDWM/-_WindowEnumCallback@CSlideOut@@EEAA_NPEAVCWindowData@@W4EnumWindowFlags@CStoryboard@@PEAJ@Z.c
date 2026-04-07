/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000F38C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180016010 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D62E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD3FC (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE680 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DE8C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DEB44 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v7; // ebx
  struct CAnimationComponent *v8; // rsi
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rax
  HWND v12; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v14; // r15
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // r14
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct CAnimationComponent *v28; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v29; // [rsp+38h] [rbp-18h] BYREF
  CBaseObject *v30; // [rsp+98h] [rbp+48h] BYREF

  v30 = 0LL;
  v28 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_59;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v29);
  v9 = *(_DWORD *)(a2 + 680);
  if ( (v9 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_59;
      *(_DWORD *)(a2 + 680) |= 0x200000u;
      v25 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v29, 0, &v30);
      v7 = v25;
      if ( v25 >= 0 )
        *(_BYTE *)(*((_QWORD *)v30 + 5) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x399u);
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 680) = v9 | 0x200000;
      v24 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v7 = v24;
      if ( v24 >= 0 )
        *(_DWORD *)(a2 + 680) = v9;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0x3A4u);
      goto LABEL_59;
    }
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x45 )
      {
        v18 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v29, 0, &v30);
        v7 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x3B2u);
        goto LABEL_52;
      }
      if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x46 )
      {
        if ( (v9 & 0x1800000) == 0 )
          goto LABEL_59;
        v17 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v30);
        v7 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x3ADu);
        goto LABEL_52;
      }
      if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x57 )
      {
LABEL_54:
        if ( v8 )
          CBaseObject::Release(v8);
        goto LABEL_59;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v10 = *(_DWORD *)(a2 + 680) & 0xFFF, v10 == 42) || v10 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v11 = *((_QWORD *)a1 + 17);
      if ( !v11 )
        goto LABEL_35;
      v12 = *(HWND *)(v11 + 16);
      if ( v12 == *(HWND *)(a2 + 40) )
        goto LABEL_59;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v12);
      v14 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 170) = *(_DWORD *)(a2 + 680) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 40LL) + 744LL) == 1.0 )
        {
          v15 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(unsigned int *)(a2 + 680));
          v16 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v15, 1, &v30);
          v7 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v16,
              0x366u);
LABEL_52:
            if ( v30 )
              CBaseObject::Release(v30);
            goto LABEL_54;
          }
          v19 = CSlide::_SlideWindowHorizontally(a1, v14, &v29, 0, 0LL, &v28);
          v7 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v19,
              0x367u);
LABEL_28:
            v8 = v28;
            goto LABEL_52;
          }
          v8 = v28;
        }
        else
        {
          v20 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v29, 0, 0LL, &v30);
          v7 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v20,
              0x36Fu);
            goto LABEL_52;
          }
          v21 = CSlide::_SlideWindowHorizontally(a1, v14, &v29, 0, 0LL, &v28);
          v7 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v21,
              0x370u);
            goto LABEL_28;
          }
          v8 = v28;
          *((_DWORD *)v28 + 14) = *((_DWORD *)v30 + 14) + 1;
        }
      }
      else
      {
LABEL_35:
        v22 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v29, 0, 0LL, &v30);
        v7 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x37Au);
          goto LABEL_52;
        }
        v23 = v30;
        CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v30 + 5), 1.0);
        *(_BYTE *)(*((_QWORD *)v23 + 5) + 969LL) = 1;
        if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x18 )
          *(_BYTE *)(*((_QWORD *)v23 + 5) + 976LL) = 1;
      }
      if ( v30 && *((_DWORD *)v30 + 17) != 2 )
        *((_DWORD *)v30 + 17) = 3;
      if ( v8 && *((_DWORD *)v8 + 17) != 2 )
        *((_DWORD *)v8 + 17) = 3;
      goto LABEL_52;
    }
  }
  else if ( v9 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
      *(const struct CTopLevelWindow **)(a2 + 440),
      1,
      1);
    v26 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v7 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v26, 0x3BBu);
  }
LABEL_59:
  *a4 = v7;
  return 1;
}
