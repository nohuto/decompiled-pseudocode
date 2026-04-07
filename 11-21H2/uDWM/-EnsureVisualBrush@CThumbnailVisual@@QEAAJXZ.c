/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18000E0AC (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18000E2FC (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AB4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18001A870 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001C5E4 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001CEF4 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001D828 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18002726C (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180037D1C (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A90E0 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHBITMAP__@@@@YAXAEAPEAUHBITMAP__@@@Z @ 0x1800AF614 (--$ReleaseGDIObject@PEAUHBITMAP__@@@@YAXAEAPEAUHBITMAP__@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800D1CC8 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ??$ReleaseGDIObject@PEAUHBRUSH__@@@@YAXAEAPEAUHBRUSH__@@@Z @ 0x1800E2CA0 (--$ReleaseGDIObject@PEAUHBRUSH__@@@@YAXAEAPEAUHBRUSH__@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800E2E28 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E3738 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x1800F0578 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CThumbnailVisual *this)
{
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r15
  CBaseObject *v4; // r14
  HDC CompatibleDC; // r12
  int v6; // eax
  __int64 v7; // rdx
  signed int v8; // ebx
  struct CBaseLegacyMilBrushProxy **v9; // r13
  __int64 v10; // rcx
  int Brush; // eax
  int v12; // eax
  __int64 v13; // rax
  struct CRectangleGeometryProxy **v14; // rsi
  int v15; // eax
  CThumbnailVisual *v16; // rcx
  int v17; // eax
  int v18; // eax
  CBaseObject *v19; // rsi
  CBaseObject *v20; // r13
  CBaseObject *v21; // r14
  HBITMAP v22; // r14
  CBaseObject *v23; // rsi
  CRenderDataVisual *v25; // rcx
  int v26; // eax
  bool IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int v33; // eax
  const struct _MARGINS *v34; // rdx
  int v35; // eax
  CScaleTransformProxy *v36; // r10
  _DWORD *v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // ecx
  __m128i v44; // xmm2
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  CTranslateTransformProxy *v51; // r9
  int v52; // eax
  _DWORD *v53; // r10
  int v54; // eax
  int v55; // r11d
  __int64 v56; // r8
  int v57; // ecx
  int v58; // eax
  __m128i v59; // xmm2
  int v60; // ecx
  int v61; // r10d
  double v62; // xmm2_8
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  CThumbnailAnimatedVisual *v71; // rcx
  int v72; // eax
  int v73; // eax
  CBaseObject *v74; // rcx
  void *lpBits; // [rsp+28h] [rbp-59h]
  unsigned int lpBitsa; // [rsp+28h] [rbp-59h]
  CBaseObject *v77; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v78; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v79; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v80; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v81; // [rsp+68h] [rbp-19h] BYREF
  struct CPushTransformInstruction *v82; // [rsp+70h] [rbp-11h] BYREF
  struct CDrawBitmapInstruction *v83; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v84; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v85; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v86; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v3 = 0LL;
  v83 = 0LL;
  v4 = 0LL;
  v82 = 0LL;
  CompatibleDC = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v86 = 0LL;
  v78 = 0LL;
  h = 0LL;
  v84 = 0LL;
  v77 = 0LL;
  v85 = 0LL;
  if ( !*((_BYTE *)this + 480) )
  {
    v73 = CRenderDataVisual::ClearInstructions(this);
    v8 = v73;
    if ( v73 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0x2E8u);
      goto LABEL_32;
    }
    v74 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( !v74 )
      goto LABEL_32;
    CBaseObject::Release(v74);
    *((_QWORD *)this + 48) = 0LL;
    goto LABEL_18;
  }
  v6 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x25Bu);
    goto LABEL_32;
  }
  v9 = (struct CBaseLegacyMilBrushProxy **)((char *)this + 392);
  if ( *((_QWORD *)this + 49) )
  {
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v26 = CRenderDataVisual::ClearInstructions(v25);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x27Au);
        goto LABEL_32;
      }
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 48);
    *((_BYTE *)this + 482) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(
              v10,
              v7,
              (volatile signed __int32 **)this + 50,
              (CBaseObject **)this + 51,
              (__int64)lpBits,
              (CBaseObject **)this + 52,
              (CBaseObject **)this + 55,
              (CBaseObject **)this + 49);
    v8 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x26Au);
      goto LABEL_32;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
    v12 = CRenderDataVisual::ClearInstructions(this);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x274u);
      goto LABEL_32;
    }
  }
  if ( *((_DWORD *)this + 70) )
    goto LABEL_32;
  if ( !*((_QWORD *)this + 55) || (v13 = *((_QWORD *)this + 47)) == 0 || (*(_DWORD *)(v13 + 36) & 0x4000000) == 0 )
  {
    if ( !*v9 )
      goto LABEL_32;
    v14 = (struct CRectangleGeometryProxy **)((char *)this + 424);
    if ( !*((_QWORD *)this + 53) )
    {
      v15 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (CBaseObject **)this + 53);
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x2CBu);
        goto LABEL_32;
      }
    }
    if ( CThumbnailVisual::_HasBorder(this) )
    {
      v70 = CThumbnailVisual::_AddBorderInstructions(v16);
      v8 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x2D0u);
        goto LABEL_32;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic(this) && !CThumbnailVisual::_HasBorder(this) )
    {
      v72 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v71, *v14, 0, 1.0);
      v8 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v72, 0x2D9u);
        goto LABEL_32;
      }
    }
    v17 = CDrawGeometryInstruction::Create(*v9, *v14, (struct CDrawGeometryInstruction **)&rc);
    v8 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x2E1u);
      v2 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v2 = *(CBaseObject **)&rc.left;
      v18 = CRenderDataVisual::AddInstruction(this, *(struct CRenderDataInstruction **)&rc.left);
      v8 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x2E3u);
    }
LABEL_18:
    if ( v2 )
    {
      CBaseObject::Release(v2);
      v19 = v81;
      goto LABEL_20;
    }
LABEL_32:
    v22 = v78;
LABEL_33:
    v23 = v77;
    goto LABEL_34;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
  {
    v19 = v81;
    goto LABEL_118;
  }
  v28 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 47) + 24LL) + 200LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v78 = Bitmap;
  v22 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    lpBitsa = 661;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v86 = SolidBrush;
  if ( !SolidBrush )
  {
    v8 = -2147024890;
    lpBitsa = 664;
LABEL_64:
    v31 = v8;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, lpBitsa);
    goto LABEL_33;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v33 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 30)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          v22,
          0LL,
          2LL,
          &v84);
  v8 = v33;
  if ( v33 < 0 )
  {
    lpBitsa = 668;
LABEL_66:
    v31 = v33;
    goto LABEL_67;
  }
  v33 = CBitmapSource::Create(v84, v34, &v77);
  v8 = v33;
  if ( v33 < 0 )
  {
    lpBitsa = 670;
    goto LABEL_66;
  }
  v23 = v77;
  v35 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v77 + 2), &v85);
  v8 = v35;
  if ( v35 >= 0 )
  {
    v36 = (CScaleTransformProxy *)*((_QWORD *)this + 58);
    if ( !v36 )
    {
      v33 = CCompositor::CreateProxy<CScaleTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (CBaseObject **)this + 58);
      v8 = v33;
      if ( v33 < 0 )
      {
        lpBitsa = 675;
        goto LABEL_66;
      }
      v36 = (CScaleTransformProxy *)*((_QWORD *)this + 58);
    }
    v37 = (_DWORD *)*((_QWORD *)this + 47);
    v38 = v37[13] - v37[11];
    v39 = v37[12] - v37[10];
    v40 = 0;
    if ( v38 >= 0 )
      v40 = v38;
    v41 = 0;
    if ( rc.bottom - rc.top >= 0 )
      v41 = rc.bottom - rc.top;
    v42 = v40 / v41;
    v43 = 0;
    v44 = _mm_cvtsi32_si128(v42);
    v45 = 0;
    if ( v39 >= 0 )
      v45 = v39;
    if ( rc.right - rc.left >= 0 )
      v43 = rc.right - rc.left;
    v33 = CScaleTransformProxy::Update(v36, (double)(v45 / v43), _mm_cvtepi32_pd(v44).m128d_f64[0], 0.0, 0.0);
    v8 = v33;
    if ( v33 < 0 )
    {
      lpBitsa = 681;
      goto LABEL_66;
    }
    v46 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 58), &v81);
    v8 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x2AAu);
      v19 = v81;
LABEL_27:
      v21 = v79;
LABEL_28:
      if ( v19 )
        CBaseObject::Release(v19);
      if ( v21 )
        CBaseObject::Release(v21);
      goto LABEL_32;
    }
    v19 = v81;
    v47 = CRenderDataVisual::AddInstruction(this, v81);
    v8 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x2ABu);
      goto LABEL_27;
    }
    v48 = CRenderDataVisual::AddInstruction(this, v85);
    v8 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x2ACu);
      goto LABEL_27;
    }
    v49 = CPopInstruction::Create(&v79);
    v8 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x2ADu);
      goto LABEL_27;
    }
    v21 = v79;
    v50 = CRenderDataVisual::AddInstruction(this, v79);
    v8 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x2AEu);
      goto LABEL_28;
    }
    v51 = (CTranslateTransformProxy *)*((_QWORD *)this + 57);
    if ( !v51 )
    {
      v52 = CCompositor::CreateProxy<CTranslateTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (char *)this + 456);
      v8 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x2B3u);
        goto LABEL_27;
      }
      v51 = (CTranslateTransformProxy *)*((_QWORD *)this + 57);
    }
    v53 = (_DWORD *)*((_QWORD *)this + 47);
    v54 = 0;
    v55 = 0;
    if ( v53[13] - v53[11] >= 0 )
      v54 = v53[13] - v53[11];
    v56 = *(_QWORD *)(*((_QWORD *)this + 48) + 376LL);
    if ( v56 )
      v55 = *(_DWORD *)(v56 + 132);
    v57 = v54 / 2;
    v58 = 0;
    v59 = _mm_cvtsi32_si128(v57 - v55 / 2);
    v60 = v53[12] - v53[10];
    v61 = 0;
    *(_QWORD *)&v62 = *(_OWORD *)&_mm_cvtepi32_pd(v59);
    if ( v60 >= 0 )
      v58 = v60;
    if ( v56 )
      v61 = *(_DWORD *)(v56 + 128);
    v63 = CTranslateTransformProxy::Update(v51, (double)(v58 / 2 - v61 / 2), v62);
    v8 = v63;
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0x2B7u);
      goto LABEL_27;
    }
    v64 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 57), &v82);
    v8 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x2B8u);
      v4 = v82;
LABEL_114:
      v20 = v80;
LABEL_23:
      if ( v4 )
        CBaseObject::Release(v4);
      if ( v20 )
        CBaseObject::Release(v20);
      goto LABEL_27;
    }
    v4 = v82;
    v65 = CRenderDataVisual::AddInstruction(this, v82);
    v8 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0x2B9u);
      goto LABEL_114;
    }
LABEL_118:
    v66 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)this + 55), &v83);
    v8 = v66;
    if ( v66 >= 0 )
    {
      v3 = v83;
      v67 = CRenderDataVisual::AddInstruction(this, v83);
      v8 = v67;
      if ( v67 >= 0 )
      {
        if ( v4 )
        {
          v68 = CPopInstruction::Create(&v80);
          v8 = v68;
          if ( v68 >= 0 )
          {
            v20 = v80;
            v69 = CRenderDataVisual::AddInstruction(this, v80);
            v8 = v69;
            if ( v69 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v69, 0x2C2u);
            goto LABEL_21;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x2C1u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v67, 0x2BDu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0x2BCu);
      v3 = v83;
    }
LABEL_20:
    v20 = v80;
LABEL_21:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x29Fu);
LABEL_34:
  if ( v84 )
    ((void (__fastcall *)(struct IWICBitmap *))v84->lpVtbl->Release)(v84);
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v85 )
    CBaseObject::Release(v85);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v22 )
    ReleaseGDIObject<HBITMAP__ *>(&v78);
  if ( v86 )
    ReleaseGDIObject<HBRUSH__ *>(&v86);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v8;
}
