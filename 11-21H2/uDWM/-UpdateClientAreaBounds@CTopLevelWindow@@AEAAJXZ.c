/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800181B0 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18001DD04 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800366A8 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VUdwmTopVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800970B4 (--1-$ComPtr@VUdwmTopVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x1800BDDEC (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800C0AF4 (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E5CFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailUnifiedDpi@@@details@wil@@QEAAX_NW4Re.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180107AFC (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  CIndirectSwapchainRenderTargetProxy *v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v15; // rdi
  struct CVisualProxy *v16; // rcx
  int v17; // eax
  struct CVisual *v18; // rdx
  int inserted; // eax
  int updated; // eax
  CTopLevelWindow *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int cxLeftWidth; // ebx
  unsigned int cyTopHeight; // edi
  unsigned __int64 v26; // xmm0_8
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // rax
  float v31; // xmm2_4
  unsigned __int64 v32; // r11
  int v33; // eax
  CHolographicSlate *v34; // rcx
  _DWORD *v35; // rax
  signed int v36; // r8d
  signed int v37; // edx
  int v38; // eax
  int v39; // eax
  LONG v40; // ecx
  LONG v41; // edx
  LONG v42; // eax
  LONG v43; // eax
  _DWORD *v44; // rax
  int v45; // ebx
  int v46; // edi
  int v47; // eax
  int v48; // eax
  struct CBaseGeometryProxy *v49; // rbx
  CBaseObject *v50; // rcx
  struct CClientArea *v51; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v52; // [rsp+38h] [rbp-31h] BYREF
  struct CBaseGeometryProxy *v53; // [rsp+48h] [rbp-21h] BYREF
  struct _MARGINS v54; // [rsp+50h] [rbp-19h] BYREF
  struct _MARGINS v55; // [rsp+60h] [rbp-9h] BYREF
  struct _MARGINS v56; // [rsp+70h] [rbp+7h] BYREF
  struct _MARGINS v57; // [rsp+80h] [rbp+17h] BYREF
  __int128 v58; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 62) )
  {
    v15 = *((_QWORD *)this + 94);
    v16 = *(struct CVisualProxy **)(v15 + 144);
    if ( v16 )
    {
      v51 = 0LL;
      v17 = CClientArea::Create(v16, &v51);
      v2 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<UdwmTopVisual>::~ComPtr<UdwmTopVisual>(&v51);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x856u);
        v3 = v2;
        goto LABEL_19;
      }
      *((_QWORD *)v51 + 31) = v15;
      v18 = v51;
      v51 = 0LL;
      *((_QWORD *)this + 62) = v18;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), v18, 0LL, 1, 1);
      v2 = inserted;
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x859u);
        goto LABEL_19;
      }
      v57 = 0LL;
      CVisual::SetInsetFromParent(*((CVisual **)this + 62), &v57);
      if ( (*((_BYTE *)this + 248) & 4) != 0 )
      {
        updated = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v2 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x860u);
          goto LABEL_19;
        }
      }
    }
  }
  v3 = v2;
  if ( v2 < 0 )
  {
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14ACu);
    return v3;
  }
  v4 = *((_QWORD *)this + 62);
  if ( !v4 )
    return v3;
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 248);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 384LL))(
             v7,
             v6 + 216,
             v6 + 232,
             v6 + 248);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xA2u);
        v3 = v5;
        goto LABEL_29;
      }
    }
  }
  v3 = v5;
  if ( v5 < 0 )
  {
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x14B1u);
    return v3;
  }
  if ( !*((_QWORD *)this + 109) )
    goto LABEL_9;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer() )
  {
    v21 = this;
    v22 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
    if ( v22 )
      v21 = *(CTopLevelWindow **)(v22 + 24);
    CTopLevelWindow::GetFrameMargins(v21, &v54);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailUnifiedDpi>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VailUnifiedDpi>::GetImpl'::`2'::impl,
      0LL);
    v58 = *(_OWORD *)(*((_QWORD *)v21 + 94) + 48LL);
  }
  else
  {
    v58 = *(_OWORD *)(*((_QWORD *)this + 94) + 48LL);
    CTopLevelWindow::GetFrameMargins(this, &v54);
  }
  LODWORD(v58) = v54.cxLeftWidth + v58;
  DWORD1(v58) += v54.cyTopHeight;
  DWORD2(v58) -= v54.cxRightWidth;
  HIDWORD(v58) -= v54.cyBottomHeight;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 109) + 40LL))(*((_QWORD *)this + 109), &v58);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                        + 24LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 24LL));
  if ( v10 >= 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 62) + 16LL) + 16LL);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 16) + 360LL))(
            *(_QWORD *)(v9 + 16),
            *(unsigned int *)(v9 + 24));
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14E7u);
      return (unsigned int)v10;
    }
    v11 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 102);
    if ( v11 )
    {
      cxLeftWidth = 0;
      cyTopHeight = 0;
      if ( *((_BYTE *)this + 808) )
      {
        CTopLevelWindow::GetFrameMargins(this, &v55);
        cxLeftWidth = v55.cxLeftWidth;
        cyTopHeight = v55.cyTopHeight;
        v26 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 94) + 48LL), 8).m128i_u64[0];
        v27 = *(_QWORD *)(*((_QWORD *)this + 94) + 48LL);
        v28 = v26 - v55.cxRightWidth - v27 - v55.cxLeftWidth;
        v29 = HIDWORD(v26) - HIDWORD(v27) - v55.cyBottomHeight - v55.cyTopHeight;
        v11 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 102);
      }
      else
      {
        v30 = *((_QWORD *)this + 94);
        v31 = *(float *)(v30 + 332);
        v32 = _mm_srli_si128(*(__m128i *)(v30 + 232), 8).m128i_u64[0];
        v28 = (int)(float)((float)(int)(v32 - *(_OWORD *)(v30 + 232)) * v31);
        v29 = (int)(float)((float)(int)(HIDWORD(v32) - HIDWORD(*(_QWORD *)(v30 + 232))) * v31);
      }
      v33 = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(v11, cxLeftWidth, cyTopHeight, v28, v29);
      v10 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x1777u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14EAu);
        return (unsigned int)v10;
      }
    }
    v12 = 0;
    if ( (*((_BYTE *)this + 249) & 2) != 0 )
    {
      v34 = (CHolographicSlate *)*((_QWORD *)this + 103);
      if ( v34 )
      {
        v35 = (_DWORD *)*((_QWORD *)this + 94);
        v36 = v35[61] - v35[59];
        if ( v36 < 0 )
          v36 = 0;
        v37 = v35[60] - v35[58];
        if ( v37 < 0 )
          v37 = 0;
        v38 = CHolographicSlate::SetSize(v34, v37, v36);
        v12 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x1A8u);
          v3 = v12;
          goto LABEL_26;
        }
      }
    }
    v3 = v12;
    if ( v12 < 0 )
    {
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x14ECu);
      return v3;
    }
    v13 = *((_QWORD *)this + 105);
    if ( !v13 )
      return 0;
    v39 = CVisualProxy::SetSize(
            *(CVisualProxy **)(v13 + 16),
            (double)(*(_DWORD *)(*((_QWORD *)this + 94) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 94) + 48LL)),
            (double)(*(_DWORD *)(*((_QWORD *)this + 94) + 60LL) - *(_DWORD *)(*((_QWORD *)this + 94) + 52LL)));
    v10 = v39;
    if ( v39 >= 0 )
    {
      if ( (*((_BYTE *)this + 248) & 4) != 0 )
      {
        v40 = *((_DWORD *)this + 165);
        v52.left = v40;
        v41 = *((_DWORD *)this + 167);
        v52.top = v41;
        v42 = *((_DWORD *)this + 32) - *((_DWORD *)this + 166);
        if ( v40 > v42 )
          v42 = v40;
        v52.right = v42;
        v43 = *((_DWORD *)this + 33) - *((_DWORD *)this + 168);
        if ( v41 > v43 )
          v43 = v41;
      }
      else
      {
        v44 = (_DWORD *)*((_QWORD *)this + 94);
        v45 = v44[14] - v44[12];
        v46 = v44[15] - v44[13];
        CTopLevelWindow::GetFrameMargins(this, &v56);
        v52.left = v56.cxLeftWidth;
        v52.top = v56.cyTopHeight;
        v47 = 0;
        if ( v45 >= 0 )
          v47 = v45;
        v52.right = v47 - v56.cxRightWidth;
        v48 = 0;
        if ( v46 >= 0 )
          v48 = v46;
        v43 = v48 - v56.cyBottomHeight;
      }
      v52.bottom = v43;
      v53 = 0LL;
      v39 = ResourceHelper::CreateRectangleGeometry(&v52, &v53);
      v10 = v39;
      if ( v39 >= 0 )
      {
        v49 = v53;
        CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 105) + 16LL), v53);
        v50 = (CBaseObject *)*((_QWORD *)this + 106);
        if ( v50 )
          CBaseObject::Release(v50);
        *((_QWORD *)this + 106) = v49;
        if ( v49 )
          _InterlockedIncrement((volatile signed __int32 *)v49 + 2);
        return 0;
      }
      v23 = 6336LL;
    }
    else
    {
      v23 = 6304LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v39);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14EEu);
    return (unsigned int)v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14E1u);
  return (unsigned int)v10;
}
