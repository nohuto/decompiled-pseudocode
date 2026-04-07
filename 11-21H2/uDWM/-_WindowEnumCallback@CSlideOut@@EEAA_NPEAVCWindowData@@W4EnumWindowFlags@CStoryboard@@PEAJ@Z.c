/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E00F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D0EB0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800D7484 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D86C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@w.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9C28 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DB94C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DBBA0 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DBE14 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800ECFB4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x1800EDC40 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r15
  struct CAnimationComponent *v6; // rsi
  int *v7; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rax
  HWND v15; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v17; // r13
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  struct tagRECT v30; // xmm0
  __int128 v31; // xmm6
  struct tagPOINT *v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char result; // al
  struct tagRECT v38; // [rsp+30h] [rbp-40h] BYREF
  struct CAnimationComponent *v39; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v40; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  *(_QWORD *)&v38.left = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v38.right = 0LL;
  v39 = 0LL;
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_68;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v40);
  v12 = *(_DWORD *)(a2 + 672);
  if ( (v12 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 672) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_68;
      *(_DWORD *)(a2 + 672) |= 0x200000u;
      v35 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v40, 0, (struct CAnimationComponent **)&v38);
      v4 = v35;
      if ( v35 >= 0 )
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v38.left + 40LL) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v35, 0x3D3u);
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(a2 + 672) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 672) = v12 | 0x200000;
      v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v34;
      if ( v34 >= 0 )
        *(_DWORD *)(a2 + 672) = v12;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v34, 0x3DEu);
      goto LABEL_68;
    }
    if ( (*(_DWORD *)(a2 + 672) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 672) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 672) & 0xFFF) == 0x45 )
      {
        v21 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v40, 0, (struct CAnimationComponent **)&v38);
        v4 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0x3F3u);
        goto LABEL_58;
      }
      if ( (*(_DWORD *)(a2 + 672) & 0xFFF) == 0x46 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
          0,
          v10,
          v11);
        if ( (*(_DWORD *)(a2 + 672) & 0x1800000) == 0 )
          goto LABEL_68;
        v20 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, (struct CAnimationComponent **)&v38);
        v4 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x3EDu);
        goto LABEL_58;
      }
      if ( (*(_DWORD *)(a2 + 672) & 0xFFF) != 0x57 )
      {
LABEL_63:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_68;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v13 = *(_DWORD *)(a2 + 672) & 0xFFF, v13 == 42) || v13 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v14 = *((_QWORD *)a1 + 17);
      if ( !v14 )
        goto LABEL_35;
      v15 = *(HWND *)(v14 + 16);
      if ( v15 == *(HWND *)(a2 + 40) )
        goto LABEL_68;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v15);
      v17 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 168) = *(_DWORD *)(a2 + 672) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 40LL) + 744LL) == 1.0 )
        {
          v18 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(unsigned int *)(a2 + 672));
          v19 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                  a1,
                  (struct CWindowData *)a2,
                  v18,
                  1,
                  (struct CAnimationComponent **)&v38);
          v4 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v19,
              0x38Fu);
            goto LABEL_58;
          }
          v22 = CSlide::_SlideWindowHorizontally(a1, v17, &v40, 0, 0LL, (struct CAnimationComponent **)&v38.right);
          v4 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v22,
              0x390u);
LABEL_28:
            v5 = *(CBaseObject **)&v38.right;
LABEL_58:
            if ( *(_QWORD *)&v38.left )
              CBaseObject::Release(*(CBaseObject **)&v38.left);
            if ( v5 )
              CBaseObject::Release(v5);
            v7 = a4;
            goto LABEL_63;
          }
          v5 = *(CBaseObject **)&v38.right;
        }
        else
        {
          v23 = CSlide::_SlideWindowHorizontally(
                  a1,
                  (struct CWindowData *)a2,
                  &v40,
                  0,
                  0LL,
                  (struct CAnimationComponent **)&v38);
          v4 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v23,
              0x398u);
            goto LABEL_58;
          }
          v24 = CSlide::_SlideWindowHorizontally(a1, v17, &v40, 0, 0LL, (struct CAnimationComponent **)&v38.right);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v24,
              0x399u);
            goto LABEL_28;
          }
          v5 = *(CBaseObject **)&v38.right;
          *(_DWORD *)(*(_QWORD *)&v38.right + 56LL) = *(_DWORD *)(*(_QWORD *)&v38.left + 56LL) + 1;
        }
      }
      else
      {
LABEL_35:
        v25 = CSlide::_SlideWindowHorizontally(
                a1,
                (struct CWindowData *)a2,
                &v40,
                0,
                0LL,
                (struct CAnimationComponent **)&v38);
        v4 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x3A3u);
          goto LABEL_58;
        }
        v26 = *(_QWORD *)&v38.left;
        CAnimatedTransitionVisual::SetBeginAlpha(*(CAnimatedTransitionVisual **)(*(_QWORD *)&v38.left + 40LL), 1.0);
        *(_BYTE *)(*(_QWORD *)(v26 + 40) + 969LL) = 1;
        if ( (*(_DWORD *)(a2 + 672) & 0xFFF) == 0x18 )
          *(_BYTE *)(*(_QWORD *)(v26 + 40) + 976LL) = 1;
      }
      if ( *(_QWORD *)&v38.left && *(_DWORD *)(*(_QWORD *)&v38.left + 68LL) != 2 )
        *(_DWORD *)(*(_QWORD *)&v38.left + 68LL) = 3;
      if ( v5 && *((_DWORD *)v5 + 17) != 2 )
        *((_DWORD *)v5 + 17) = 3;
      v27 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(_DWORD *)(a2 + 672) & 0xFFF);
      v28 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v27, &v39);
      v4 = v28;
      if ( v28 >= 0 )
      {
        v6 = v39;
        if ( v39 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)&v38.left + 40LL);
          v30 = *(struct tagRECT *)(v29 + 856);
          v31 = *(_OWORD *)(v29 + 872);
          v32 = (struct tagPOINT *)*((_QWORD *)v39 + 5);
          v40 = v30;
          CAnimatedTransitionVisual::SetBeginRect(v32, &v40);
          v33 = *((_QWORD *)v6 + 5);
          *(_OWORD *)(v33 + 872) = v31;
          CVisual::SetDirtyFlags((CVisual *)(v33 + 8), 4096);
          *(_BYTE *)(*((_QWORD *)v6 + 5) + 987LL) = 1;
          *((_BYTE *)v6 + 74) = 1;
          if ( *((_DWORD *)v6 + 17) != 2 )
            *((_DWORD *)v6 + 17) = 1;
          *(_DWORD *)(*(_QWORD *)&v38.left + 56LL) = *((_DWORD *)v6 + 14) + 1;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v28, 0x3B9u);
        v6 = v39;
      }
      goto LABEL_58;
    }
  }
  else if ( v12 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      *(const struct CTopLevelWindow **)(a2 + 440),
      1,
      1);
    v36 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v36, 0x3FCu);
  }
LABEL_68:
  result = 1;
  *v7 = v4;
  return result;
}
