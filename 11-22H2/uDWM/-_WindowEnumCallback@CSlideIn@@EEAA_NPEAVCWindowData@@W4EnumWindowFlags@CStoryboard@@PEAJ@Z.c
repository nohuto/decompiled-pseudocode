/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E27A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000F38C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180014240 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800A7684 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800D6290 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D62E8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DB2D4 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD3FC (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE680 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DE8C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DEB44 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // eax
  struct tagRECT v22; // xmm0
  HWND v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CBaseObject *v28; // rsi
  double v29; // xmm8_8
  __int64 v30; // rax
  LONG *TaggedWindow; // rax
  LONG bottom; // edi
  int v33; // edx
  double v34; // xmm6_8
  int v35; // ecx
  __m128i v36; // xmm6
  int v37; // ecx
  struct tagSIZE *v38; // r8
  struct tagPOINT *v39; // rdx
  CBaseObject *v41; // [rsp+38h] [rbp-79h] BYREF
  struct tagPOINT v42; // [rsp+40h] [rbp-71h] BYREF
  struct tagSIZE v43; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v44; // [rsp+50h] [rbp-61h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-51h] BYREF
  RECT rcSrc2; // [rsp+70h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+80h] [rbp-31h] BYREF
  RECT v48; // [rsp+90h] [rbp-21h] BYREF

  v4 = 0;
  v41 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_69;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v44);
  v8 = *(_DWORD *)(a2 + 680);
  v9 = v8 & 0xFFF;
  if ( v9 <= 0x2B )
  {
    if ( v9 == 43 )
    {
      v16 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
      v17 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v16, 1, &v41);
      v4 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x2DDu);
      goto LABEL_67;
    }
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( v8 < 0 )
      {
        v15 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
        v4 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x2D7u);
      }
      goto LABEL_69;
    }
    if ( v9 == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_69;
      *(_DWORD *)(a2 + 680) |= 0x200000u;
      v14 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v44, 1, &v41);
      v4 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x286u);
        goto LABEL_67;
      }
      goto LABEL_36;
    }
    if ( v9 != 11 )
    {
      if ( v9 != 24 && v9 != 42 )
        goto LABEL_69;
      goto LABEL_25;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 680) = v8;
LABEL_11:
    v10 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v41);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x294u);
      goto LABEL_67;
    }
    *(_DWORD *)(a2 + 680) = v8;
    if ( (v8 & 0xFFF) != 0x3C )
    {
LABEL_67:
      if ( v41 )
        CBaseObject::Release(v41);
      goto LABEL_69;
    }
    v28 = v41;
    v29 = 0.0;
    v43 = 0LL;
    *(double *)&v42 = 0.0;
    *(_BYTE *)(*((_QWORD *)v41 + 5) + 976LL) = 1;
    v48 = *(RECT *)(*((_QWORD *)v28 + 5) + 856LL);
    v30 = *((_QWORD *)v28 + 5);
    rc = 0LL;
    rcSrc1 = *(RECT *)(v30 + 872);
    rcSrc2 = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow(v12, v11, v13);
    bottom = v44.bottom;
    if ( TaggedWindow )
    {
      v33 = 0;
      rcSrc2.left = TaggedWindow[12];
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v33 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v44.bottom - v33;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v44.bottom;
    }
    v34 = 0.0;
    if ( v48.bottom <= rcSrc1.bottom )
    {
      if ( v48.bottom < rcSrc1.bottom )
      {
        if ( IntersectRect(&rc, &v48, &rcSrc2) && !IsRectEmpty(&rc) )
        {
          v37 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v37 = rc.bottom - rc.top;
          v29 = (double)-v37;
          *(double *)&v42 = v29;
        }
        v36 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
        goto LABEL_59;
      }
    }
    else
    {
      v29 = (double)(v44.bottom - v48.bottom);
      *(double *)&v42 = v29;
      if ( IntersectRect(&rc, &rcSrc1, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v35 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v35 = rc.bottom - rc.top;
        v36 = _mm_cvtsi32_si128(-v35);
LABEL_59:
        *(_QWORD *)&v34 = *(_OWORD *)&_mm_cvtepi32_pd(v36);
        v43 = *(struct tagSIZE *)&v34;
      }
    }
    if ( v34 == 0.0 )
      v38 = 0LL;
    else
      v38 = &v43;
    if ( v29 == 0.0 )
      v39 = 0LL;
    else
      v39 = &v42;
    CAnimatedTransitionVisual::SetChopPosition(
      *((CAnimatedTransitionVisual **)v28 + 5),
      (const double *)v39,
      (const double *)v38);
    goto LABEL_67;
  }
  v18 = v9 - 60;
  if ( !v18 )
    goto LABEL_11;
  v19 = v18 - 9;
  if ( !v19 )
  {
    v27 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v44, 1, &v41);
    v4 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v27, 0x27Cu);
    goto LABEL_67;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v26 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v41);
    v4 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v26, 0x278u);
    goto LABEL_67;
  }
  if ( v20 != 17 )
    goto LABEL_69;
LABEL_25:
  if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
         (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
         *(HWND *)(a2 + 40),
         0)
    || ((v21 = *(_DWORD *)(a2 + 680) & 0xFFF, v21 == 42) || v21 == 87)
    && CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
  {
    v22 = *(struct tagRECT *)(a2 + 48);
    v23 = *(HWND *)(a2 + 40);
    *(double *)&v42 = 0.0;
    v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    v43 = 0LL;
    rc = v22;
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition((CWindowPropertyTracker *)(v24 + 48), v23, &v42) >= 0 )
      OffsetRect(&rc, v42.x - rc.left, v42.y - rc.top);
    if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *(HWND *)(a2 + 40),
                &v43) >= 0 )
    {
      rc.right = v43.cx + rc.left;
      rc.bottom = v43.cy + rc.top;
    }
    CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v44);
    v25 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v44, 1, (__m128i *)&rc, &v41);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x272u);
      goto LABEL_67;
    }
LABEL_36:
    *(_BYTE *)(*((_QWORD *)v41 + 5) + 976LL) = 1;
    goto LABEL_67;
  }
LABEL_69:
  *a4 = v4;
  return 1;
}
