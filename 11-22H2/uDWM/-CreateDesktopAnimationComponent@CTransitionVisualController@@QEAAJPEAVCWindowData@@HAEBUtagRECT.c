/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EAAC0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DBE20 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD118 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18000227C (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800031B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180007BB8 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C350 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C7C4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x18000CBCC (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180016640 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z @ 0x1800A7610 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualIma.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B6818 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B6898 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
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
  int v10; // edi
  CBaseObject *v13; // r14
  CAnimatedTransitionVisual *v14; // rsi
  unsigned int v15; // edi
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // r8
  unsigned int v19; // ebx
  int v20; // eax
  HWND ShellWindowForDesktop; // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  int DesktopThumbnail; // eax
  CDesktopThumbnailBase *v25; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  struct CStoryboard *v32; // r14
  __m128i *v33; // rsi
  RECT v34; // xmm0
  int v35; // r9d
  int v36; // r10d
  int v37; // edx
  int v38; // esi
  int v39; // eax
  int v40; // edx
  __int32 v41; // esi
  CAnimatedTransitionVisual *v42; // rsi
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int128 v47; // xmm0
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  char v50; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  CAnimatedTransitionVisual *v53; // [rsp+60h] [rbp-A0h] BYREF
  CBaseObject *v54; // [rsp+68h] [rbp-98h] BYREF
  CBaseObject *v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  struct tagRECT v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  struct CStoryboard *v59; // [rsp+98h] [rbp-68h]
  CBaseObject *v60; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v61; // [rsp+A8h] [rbp-58h] BYREF
  struct CAnimationComponent **v62; // [rsp+B0h] [rbp-50h]
  struct tagRECT v63; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v64; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __m128i v66; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 170);
  v62 = a8;
  v13 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v14 = 0LL;
  v53 = 0LL;
  v15 = v10 & 0xFFF;
  v60 = 0LL;
  v61 = 0LL;
  v16 = *(_QWORD *)a7;
  v59 = a7;
  v17 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v16 + 120))(a7, v15);
  rc2 = *a4;
  if ( (v17 & 0x10) != 0 )
  {
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
    v50 = 1;
  }
  else
  {
    v50 = 0;
  }
  if ( !(unsigned int)GetDesktopID(1LL, &v58, v18) )
  {
    v49 = 1327;
LABEL_6:
    v19 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      v49);
    return v19;
  }
  v20 = CTransitionVisualController::_SetDesktopId(this, v58);
  v19 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v20,
      0x533u);
    return v19;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                            v58);
  if ( !ShellWindowForDesktop )
  {
    v49 = 1336;
    goto LABEL_6;
  }
  v22 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v56 = v22;
  if ( !v22
    || (v23 = CAnimationComponent::CAnimationComponent(v22, (__int64)ShellWindowForDesktop, v15, a3, (__int64)v59)) == 0 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x53Cu);
    goto LABEL_76;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v54);
  v19 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x53Eu);
LABEL_69:
    v13 = v54;
    goto LABEL_70;
  }
  v13 = v54;
  v25 = v54;
  *((_QWORD *)v54 + 35) = v58;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v25);
  v19 = updated;
  if ( updated >= 0 )
  {
    v64 = rc2;
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v13, &v64, &v55);
    v19 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        PerMonitorDesktopThumbnail,
        0x540u);
      goto LABEL_70;
    }
    v28 = CAnimatedTransitionVisual::Create(&v53);
    v19 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v28,
        0x542u);
LABEL_21:
      v14 = v53;
      goto LABEL_70;
    }
    if ( a5 )
      *(_BYTE *)(v23 + 67) = 1;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v30 = CDesktopThumbnailCVI::CreateBrush(v55, &v60, &v61, 0LL, &rc2);
      v19 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v30,
          0x54Fu);
        goto LABEL_21;
      }
      v14 = v53;
      v31 = CAnimatedTransitionVisual::SetCVIBrush(v53, v60, v61);
      v19 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v31,
          0x550u);
        goto LABEL_70;
      }
    }
    else
    {
      v14 = v53;
      v29 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v53, v13, 1, &rc2);
      v19 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v29,
          0x54Bu);
        goto LABEL_70;
      }
    }
    v32 = v59;
    *((_DWORD *)v14 + 184) = *((_DWORD *)v59 + 18);
    *((_DWORD *)v14 + 185) = a3;
    *((_BYTE *)v14 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v23 + 40) = v14;
    _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
    v33 = (__m128i *)v55;
    *(_QWORD *)(v23 + 48) = v55;
    if ( v33 )
    {
      _InterlockedIncrement(&v33->m128i_i32[2]);
      v33 = (__m128i *)v55;
    }
    if ( (*((_DWORD *)a2 + 170) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 684), &rc2)
      || (*((_DWORD *)a2 + 170) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 716), &rc2) )
    {
      v34 = rc2;
      v57 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v57);
      v34 = v57;
    }
    *(RECT *)(v23 + 88) = v34;
    if ( a6 )
    {
      v35 = 0;
      v36 = 0;
      if ( rc2.right - rc2.left >= 0 )
        v35 = rc2.right - rc2.left;
      v56 = 0LL;
      if ( rc2.bottom - rc2.top >= 0 )
        v36 = rc2.bottom - rc2.top;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v63);
      v35 = 0;
      LODWORD(v56) = v57.left - v63.left;
      HIDWORD(v56) = v57.top - v63.top;
      if ( v57.right - v57.left >= 0 )
        v35 = v57.right - v57.left;
      v36 = v57.bottom - v57.top;
      if ( v57.bottom - v57.top < 0 )
      {
        v36 = 0;
        HIDWORD(v52) = 0;
        goto LABEL_46;
      }
    }
    HIDWORD(v52) = v36;
LABEL_46:
    v37 = 0;
    LODWORD(v52) = v35;
    v66 = v33[2];
    v38 = _mm_cvtsi128_si32(_mm_srli_si128(v66, 8)) - _mm_cvtsi128_si32(v66);
    if ( v38 >= 0 )
      v37 = v38;
    if ( v35 > v37 )
    {
      v39 = MulDiv(v36, v37, v35);
      v35 = v38;
      v36 = v39;
      HIDWORD(v52) = v39;
      if ( v38 < 0 )
        v35 = 0;
      LODWORD(v52) = v35;
    }
    v40 = 0;
    v41 = v66.m128i_i32[3] - v66.m128i_i32[1];
    if ( v66.m128i_i32[3] - v66.m128i_i32[1] >= 0 )
      v40 = v66.m128i_i32[3] - v66.m128i_i32[1];
    if ( v36 > v40 )
    {
      LODWORD(v52) = MulDiv(v35, v40, v36);
      if ( v41 < 0 )
        v41 = 0;
      HIDWORD(v52) = v41;
    }
    v42 = v53;
    *((_QWORD *)v53 + 118) = v56;
    *((_QWORD *)v42 + 119) = v52;
    if ( v50 )
    {
      *(_OWORD *)((char *)v42 + 888) = *(_OWORD *)((char *)a2 + 684);
      *(_OWORD *)((char *)v42 + 824) = *(_OWORD *)((char *)a2 + 684);
      v43 = *((_DWORD *)v42 + 24);
      if ( (v43 & 0x1000) == 0 )
      {
        *((_DWORD *)v42 + 24) = v43 | 0x1000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v42 + 8));
      }
      *(_OWORD *)((char *)v42 + 904) = *(_OWORD *)((char *)a2 + 716);
      v44 = *((_DWORD *)v42 + 24);
      if ( (v44 & 0x1000) == 0 )
      {
        *((_DWORD *)v42 + 24) = v44 | 0x1000;
        CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v42 + 8));
      }
      *((_BYTE *)v42 + 986) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 748)) )
    {
      v47 = *(_OWORD *)((char *)a2 + 748);
      *(_DWORD *)(v23 + 68) = 2;
      *(_OWORD *)(v23 + 104) = v47;
    }
    *v62 = (struct CAnimationComponent *)v23;
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddddd_EtwEventWriteTransfer(
        v46,
        v45,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v32 + 18),
        *((_DWORD *)a2 + 170),
        1,
        a4->left,
        a4->top,
        a4->bottom,
        a4->right);
    v14 = v53;
    goto LABEL_69;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    updated,
    0x53Fu);
LABEL_70:
  CBaseObject::Release((CBaseObject *)v23);
LABEL_76:
  if ( v13 )
    CBaseObject::Release(v13);
  if ( v55 )
    CBaseObject::Release(v55);
  if ( v14 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v14 + 8));
  if ( v60 )
    CBaseObject::Release(v60);
  if ( v61 )
    CBaseObject::Release(v61);
  return v19;
}
