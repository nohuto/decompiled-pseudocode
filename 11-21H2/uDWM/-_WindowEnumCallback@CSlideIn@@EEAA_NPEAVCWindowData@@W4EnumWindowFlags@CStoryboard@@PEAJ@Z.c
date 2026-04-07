/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFA30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000D05C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18009F024 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800D0E58 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D0EB0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D7354 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800D7484 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9C28 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DB94C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DBBA0 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DBE14 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800ECFB4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  int v8; // esi
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct tagRECT v16; // xmm0
  HWND v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  CBaseObject *v20; // rsi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  struct tagPOINT *v24; // rcx
  __int128 v25; // xmm6
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  CBaseObject *v29; // rsi
  __int64 v30; // rax
  LONG *TaggedWindow; // rax
  LONG bottom; // edi
  int v33; // edx
  double v34; // xmm7_8
  double v35; // xmm8_8
  int v36; // ecx
  __m128i v37; // xmm7
  int v38; // ecx
  struct CAnimationComponent **v39; // r8
  struct tagSIZE *v40; // rdx
  char result; // al
  CBaseObject *v42; // [rsp+38h] [rbp-89h] BYREF
  struct tagSIZE v43; // [rsp+40h] [rbp-81h] BYREF
  struct CAnimationComponent *v44; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v45; // [rsp+50h] [rbp-71h] BYREF
  int *v46; // [rsp+60h] [rbp-61h]
  struct tagRECT rc; // [rsp+68h] [rbp-59h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-39h] BYREF
  RECT v50; // [rsp+98h] [rbp-29h] BYREF

  v4 = 0;
  v46 = a4;
  v42 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_77;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v45);
  v8 = *(_DWORD *)(a2 + 672);
  v9 = v8 & 0xFFF;
  if ( v9 > 0x2B )
  {
    if ( v9 != 60 )
    {
      switch ( v9 )
      {
        case 'E':
          v28 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v45, 1, &v42);
          v4 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v28,
              0x2A2u);
          break;
        case 'F':
          v27 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v42);
          v4 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v27,
              0x29Eu);
          break;
        case 'W':
LABEL_26:
          if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                  (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                  *(HWND *)(a2 + 40),
                  0) )
          {
            v15 = *(_DWORD *)(a2 + 672) & 0xFFF;
            if ( v15 != 42 && v15 != 87 )
              goto LABEL_77;
            if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
              goto LABEL_77;
          }
          v16 = *(struct tagRECT *)(a2 + 48);
          v17 = *(HWND *)(a2 + 40);
          *(_QWORD *)&rcSrc2.left = 0LL;
          v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
          *(double *)&v43 = 0.0;
          rc = v16;
          if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                      (CWindowPropertyTracker *)(v18 + 48),
                      v17,
                      (struct tagPOINT *)&rcSrc2) >= 0 )
            OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
          if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                      *(HWND *)(a2 + 40),
                      &v43) >= 0 )
          {
            rc.right = rc.left + v43.cx;
            rc.bottom = v43.cy + rc.top;
          }
          CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v45);
          v19 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v45, 1, (__m128i *)&rc, &v42);
          v4 = v19;
          if ( v19 >= 0 )
          {
            v20 = v42;
            *(_BYTE *)(*((_QWORD *)v42 + 5) + 976LL) = 1;
            v21 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
            v22 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v21, &v44);
            v4 = v22;
            if ( v22 >= 0 )
            {
              v5 = v44;
              if ( v44 )
              {
                v23 = *((_QWORD *)v20 + 5);
                v24 = (struct tagPOINT *)*((_QWORD *)v44 + 5);
                v25 = *(_OWORD *)(v23 + 872);
                v50 = *(RECT *)(v23 + 856);
                CAnimatedTransitionVisual::SetBeginRect(v24, &v50);
                v26 = *((_QWORD *)v5 + 5);
                *(_OWORD *)(v26 + 872) = v25;
                CVisual::SetDirtyFlags((CVisual *)(v26 + 8), 4096);
                *(_BYTE *)(*((_QWORD *)v5 + 5) + 987LL) = 1;
                *((_BYTE *)v5 + 74) = 1;
                if ( *((_DWORD *)v5 + 17) != 2 )
                  *((_DWORD *)v5 + 17) = 1;
                *((_DWORD *)v42 + 14) = *((_DWORD *)v5 + 14) + 1;
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v22,
                0x28Au);
              v5 = v44;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v19,
              0x287u);
          }
          break;
        default:
          goto LABEL_77;
      }
LABEL_73:
      if ( v42 )
        CBaseObject::Release(v42);
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_77;
    }
LABEL_11:
    v10 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v42);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x2BAu);
      goto LABEL_73;
    }
    *(_DWORD *)(a2 + 672) = v8;
    if ( (v8 & 0xFFF) != 0x3C )
      goto LABEL_73;
    v29 = v42;
    v44 = 0LL;
    *(double *)&v43 = 0.0;
    *(_BYTE *)(*((_QWORD *)v42 + 5) + 976LL) = 1;
    v50 = *(RECT *)(*((_QWORD *)v29 + 5) + 856LL);
    v30 = *((_QWORD *)v29 + 5);
    rc = 0LL;
    rcSrc1 = *(RECT *)(v30 + 872);
    rcSrc2 = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v45.bottom;
    if ( TaggedWindow )
    {
      v33 = 0;
      rcSrc2.left = TaggedWindow[12];
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v33 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v45.bottom - v33;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v45.bottom;
    }
    v34 = 0.0;
    if ( v50.bottom <= rcSrc1.bottom )
    {
      v35 = 0.0;
      if ( v50.bottom < rcSrc1.bottom )
      {
        if ( IntersectRect(&rc, &v50, &rcSrc2) && !IsRectEmpty(&rc) )
        {
          v38 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v38 = rc.bottom - rc.top;
          v35 = (double)-v38;
          *(double *)&v43 = v35;
        }
        v37 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
        goto LABEL_65;
      }
    }
    else
    {
      v35 = (double)(v45.bottom - v50.bottom);
      *(double *)&v43 = v35;
      if ( IntersectRect(&rc, &rcSrc1, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v36 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v36 = rc.bottom - rc.top;
        v37 = _mm_cvtsi32_si128(-v36);
LABEL_65:
        *(_QWORD *)&v34 = *(_OWORD *)&_mm_cvtepi32_pd(v37);
        v44 = *(struct CAnimationComponent **)&v34;
      }
    }
    if ( v34 == 0.0 )
      v39 = 0LL;
    else
      v39 = &v44;
    if ( v35 == 0.0 )
      v40 = 0LL;
    else
      v40 = &v43;
    CAnimatedTransitionVisual::SetChopPosition(
      *((CAnimatedTransitionVisual **)v29 + 5),
      (const double *)v40,
      (const double *)v39);
    goto LABEL_73;
  }
  if ( v9 == 43 )
  {
    v13 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
    v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v13, 1, &v42);
    v4 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x303u);
    goto LABEL_73;
  }
  if ( (v8 & 0xFFF) != 0 )
  {
    if ( v9 == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_77;
      *(_DWORD *)(a2 + 672) |= 0x200000u;
      v11 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v45, 1, &v42);
      v4 = v11;
      if ( v11 >= 0 )
        *(_BYTE *)(*((_QWORD *)v42 + 5) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x2ACu);
      goto LABEL_73;
    }
    if ( v9 != 11 )
    {
      if ( v9 != 24 && v9 != 42 )
        goto LABEL_77;
      goto LABEL_26;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 672) = v8;
    goto LABEL_11;
  }
  if ( v8 < 0 )
  {
    v12 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x2FDu);
  }
LABEL_77:
  result = 1;
  *v46 = v4;
  return result;
}
