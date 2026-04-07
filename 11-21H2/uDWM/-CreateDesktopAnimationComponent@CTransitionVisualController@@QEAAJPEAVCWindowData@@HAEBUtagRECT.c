/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB88C
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D81C0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D9EA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180011F7C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z @ 0x18009EFB0 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualIma.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B2368 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B2884 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B2904 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800D7618 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800ECFB4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x1800EF1AC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800EFF90 (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  int v10; // esi
  CAnimatedTransitionVisual *v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // rax
  char v16; // al
  RECT v17; // xmm0
  unsigned int v18; // edi
  int v19; // eax
  HWND ShellWindowForDesktop; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  int DesktopThumbnail; // eax
  CBaseObject *v24; // rsi
  CBaseObject *v25; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __m128i *v32; // rbx
  RECT v33; // xmm0
  int v34; // r9d
  int v35; // r10d
  int v36; // edx
  int v37; // ebx
  int v38; // eax
  int v39; // edx
  __int32 v40; // ebx
  CAnimatedTransitionVisual *v41; // rsi
  int v42; // edx
  int v43; // ecx
  __int128 v44; // xmm0
  __int64 v47; // [rsp+50h] [rbp-B0h]
  CAnimatedTransitionVisual *v48; // [rsp+58h] [rbp-A8h] BYREF
  CBaseObject *v49; // [rsp+60h] [rbp-A0h] BYREF
  CBaseObject *v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h]
  struct tagRECT v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+90h] [rbp-70h]
  unsigned __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  CBaseObject *v55; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v56; // [rsp+A8h] [rbp-58h] BYREF
  struct CStoryboard *v57; // [rsp+B0h] [rbp-50h]
  struct CAnimationComponent **v58; // [rsp+B8h] [rbp-48h]
  struct tagRECT v59; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v60; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v62; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 168);
  v58 = a8;
  v49 = 0LL;
  v13 = 0LL;
  v50 = 0LL;
  v14 = v10 & 0xFFF;
  v48 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v15 = *(_QWORD *)a7;
  v57 = a7;
  v16 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v15 + 120))(a7, v14);
  v17 = *a4;
  v53 = v16 & 0x10;
  rc2 = v17;
  if ( (v16 & 0x10) != 0 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  if ( !(unsigned int)GetDesktopID(1LL, &v54) )
  {
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x564u);
    return v18;
  }
  v19 = CTransitionVisualController::_SetDesktopId(this, v54);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      0x568u);
    return v18;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 52));
  if ( !ShellWindowForDesktop )
  {
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x56Du);
    return v18;
  }
  v21 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  v51 = v21;
  if ( !v21
    || (v22 = CAnimationComponent::CAnimationComponent(v21, (__int64)ShellWindowForDesktop, v14, a3, (__int64)a7)) == 0 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x571u);
    return v18;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v49);
  v18 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x573u);
LABEL_63:
    v24 = v49;
    goto LABEL_64;
  }
  v24 = v49;
  v25 = v49;
  *((_QWORD *)v49 + 35) = v54;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v25);
  v18 = updated;
  if ( updated >= 0 )
  {
    v60 = rc2;
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v24, &v60, &v50);
    v18 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        PerMonitorDesktopThumbnail,
        0x575u);
      goto LABEL_64;
    }
    v28 = CAnimatedTransitionVisual::Create(&v48);
    v18 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v28,
        0x577u);
LABEL_19:
      v13 = v48;
      goto LABEL_64;
    }
    if ( a5 )
      *(_BYTE *)(v22 + 67) = 1;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v30 = CDesktopThumbnailCVI::CreateBrush(v50, &v55, &v56, 0LL, &rc2);
      v18 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v30,
          0x584u);
        goto LABEL_19;
      }
      v13 = v48;
      v31 = CAnimatedTransitionVisual::SetCVIBrush(v48, v55, v56);
      v18 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v31,
          0x585u);
        goto LABEL_64;
      }
    }
    else
    {
      v13 = v48;
      v29 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v48, v24, 1, &rc2);
      v18 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v29,
          0x580u);
        goto LABEL_64;
      }
    }
    *((_DWORD *)v13 + 184) = *((_DWORD *)v57 + 18);
    *((_DWORD *)v13 + 185) = a3;
    *((_BYTE *)v13 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v22 + 40) = v13;
    _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
    v32 = (__m128i *)v50;
    *(_QWORD *)(v22 + 48) = v50;
    if ( v32 )
    {
      _InterlockedIncrement(&v32->m128i_i32[2]);
      v32 = (__m128i *)v50;
    }
    if ( (*((_DWORD *)a2 + 168) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 676), &rc2)
      || (*((_DWORD *)a2 + 168) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 708), &rc2) )
    {
      v33 = rc2;
      v52 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v52);
      v33 = v52;
    }
    *(RECT *)(v22 + 88) = v33;
    if ( a6 )
    {
      v34 = 0;
      v35 = 0;
      if ( rc2.right - rc2.left >= 0 )
        v34 = rc2.right - rc2.left;
      v51 = 0LL;
      if ( rc2.bottom - rc2.top >= 0 )
        v35 = rc2.bottom - rc2.top;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v59);
      v34 = 0;
      LODWORD(v51) = v52.left - v59.left;
      HIDWORD(v51) = v52.top - v59.top;
      if ( v52.right - v52.left >= 0 )
        v34 = v52.right - v52.left;
      v35 = v52.bottom - v52.top;
      if ( v52.bottom - v52.top < 0 )
      {
        v35 = 0;
        HIDWORD(v47) = 0;
        goto LABEL_44;
      }
    }
    HIDWORD(v47) = v35;
LABEL_44:
    v36 = 0;
    LODWORD(v47) = v34;
    v62 = v32[2];
    v37 = _mm_cvtsi128_si32(_mm_srli_si128(v62, 8)) - _mm_cvtsi128_si32(v62);
    if ( v37 >= 0 )
      v36 = v37;
    if ( v34 > v36 )
    {
      v38 = MulDiv(v35, v36, v34);
      v34 = v37;
      v35 = v38;
      HIDWORD(v47) = v38;
      if ( v37 < 0 )
        v34 = 0;
      LODWORD(v47) = v34;
    }
    v39 = 0;
    v40 = v62.m128i_i32[3] - v62.m128i_i32[1];
    if ( v62.m128i_i32[3] - v62.m128i_i32[1] >= 0 )
      v39 = v62.m128i_i32[3] - v62.m128i_i32[1];
    if ( v35 > v39 )
    {
      LODWORD(v47) = MulDiv(v34, v39, v35);
      if ( v40 < 0 )
        v40 = 0;
      HIDWORD(v47) = v40;
    }
    v41 = v48;
    *((_QWORD *)v48 + 118) = v51;
    *((_QWORD *)v41 + 119) = v47;
    if ( v53 )
    {
      *(_OWORD *)((char *)v41 + 888) = *(_OWORD *)((char *)a2 + 676);
      *(_OWORD *)((char *)v41 + 824) = *(_OWORD *)((char *)a2 + 676);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v41 + 8), 4096);
      *(_OWORD *)((char *)v41 + 904) = *(_OWORD *)((char *)a2 + 708);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v41 + 8), 4096);
      *((_BYTE *)v41 + 986) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 740)) )
    {
      v44 = *(_OWORD *)((char *)a2 + 740);
      *(_DWORD *)(v22 + 68) = 2;
      *(_OWORD *)(v22 + 104) = v44;
    }
    *v58 = (struct CAnimationComponent *)v22;
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddddd_EtwEventWriteTransfer(
        v43,
        v42,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v57 + 18),
        *((_DWORD *)a2 + 168),
        1,
        a4->left,
        a4->top,
        a4->bottom,
        a4->right);
    v13 = v48;
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    updated,
    0x574u);
LABEL_64:
  CBaseObject::Release((CBaseObject *)v22);
  if ( v24 )
    CBaseObject::Release(v24);
  if ( v50 )
    CBaseObject::Release(v50);
  if ( v13 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v13 + 8));
  if ( v55 )
    CBaseObject::Release(v55);
  if ( v56 )
    CBaseObject::Release(v56);
  return v18;
}
