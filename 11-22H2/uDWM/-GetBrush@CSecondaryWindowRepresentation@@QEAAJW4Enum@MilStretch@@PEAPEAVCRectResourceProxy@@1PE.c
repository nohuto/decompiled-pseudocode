/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000A7A0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C251C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000AB7C (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18000C964 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x180012CFC (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x180012F54 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x18001CD98 (-GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA-AW4TLWRootVisualType@@XZ.c)
 *     ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x18001CDD8 (-GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180035D8C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18004326C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v8; // rsi
  CBaseObject *v12; // rax
  CBaseObject *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  CBaseObject *v16; // rax
  int v17; // eax
  CTransitionWindowSnapshot *v18; // rcx
  CBaseObject *v19; // rax
  int v20; // eax
  __int64 v21; // rsi
  CWindowData *v22; // rcx
  CWindowData *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned int TLWRootVisualType; // eax
  __int64 RootVisualNoAddRef; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int Brush; // eax
  CBaseObject *v44; // [rsp+40h] [rbp-59h] BYREF
  CBaseObject *v45; // [rsp+48h] [rbp-51h] BYREF
  int v46; // [rsp+50h] [rbp-49h]
  CBaseObject *v47; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v48; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject *v49; // [rsp+68h] [rbp-31h] BYREF
  CBaseObject **v50; // [rsp+70h] [rbp-29h]
  __int128 v51; // [rsp+78h] [rbp-21h] BYREF
  __int128 v52; // [rsp+88h] [rbp-11h] BYREF

  v8 = a8;
  v50 = a8;
  v49 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  if ( a3 )
  {
    v12 = *a3;
    v45 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    }
    else
    {
      v40 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v45);
      v15 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x3A1u, 0LL);
        goto LABEL_59;
      }
    }
  }
  if ( a4 )
  {
    v13 = *a4;
    v47 = v13;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
    }
    else
    {
      v14 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3ABu, 0LL);
        goto LABEL_59;
      }
    }
  }
  if ( a6 )
  {
    v16 = *a6;
    v48 = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    }
    else
    {
      v17 = CCompositor::CreateProxy<CSizeResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
              &v48);
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x3BFu, 0LL);
        goto LABEL_59;
      }
    }
  }
  v18 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v18 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v18, &v49, &v44, (float *)(a1 + 368));
    v15 = Brush;
    if ( Brush >= 0 )
      goto LABEL_32;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3C6u, 0LL);
    goto LABEL_57;
  }
  if ( a7 && (v19 = *a7) != 0LL )
  {
    v44 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
  }
  else
  {
    v20 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            &v44);
    v15 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3D0u, 0LL);
      goto LABEL_59;
    }
  }
  v51 = 0LL;
  if ( v45 )
  {
    v46 = 0;
    v51 = 0LL;
  }
  else
  {
    v51 = _xmm;
    v46 = 1;
  }
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x100) == 0 )
    v21 = *(_QWORD *)(a1 + 48);
  v22 = 0LL;
  v23 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v41 = *((_QWORD *)v23 + 60);
      if ( v41 )
      {
        v22 = *(CWindowData **)(v41 + 32);
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_20;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v22 = *(CWindowData **)(*((_QWORD *)v23 + 61) + 80LL);
        goto LABEL_20;
      }
    }
  }
  v22 = v23;
LABEL_20:
  if ( CWindowData::IsImmersiveWindow(v22) && *(_DWORD *)(a1 + 72) == 3 )
  {
    RootVisualNoAddRef = *(_QWORD *)(a1 + 376);
    if ( !RootVisualNoAddRef )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( !v21 )
  {
    v24 = 0LL;
    v25 = *(_QWORD *)(a1 + 64);
    switch ( *(_DWORD *)(a1 + 72) )
    {
      case 1:
LABEL_23:
        v24 = v25;
        break;
      case 2:
        v42 = *(_QWORD *)(v25 + 480);
        if ( !v42 )
          goto LABEL_23;
        v24 = *(_QWORD *)(v42 + 32);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
          goto LABEL_23;
        v24 = *(_QWORD *)(*(_QWORD *)(v25 + 488) + 80LL);
        break;
    }
    v26 = *(_QWORD *)(v24 + 440);
    if ( v26 )
    {
      TLWRootVisualType = CSecondaryWindowRepresentation::GetTLWRootVisualType(a1);
      RootVisualNoAddRef = CTopLevelWindow::GetRootVisualNoAddRef(v26, TLWRootVisualType);
LABEL_26:
      v21 = RootVisualNoAddRef;
    }
  }
LABEL_27:
  v52 = 0LL;
  if ( v21 )
    v29 = *(_QWORD *)(v21 + 16);
  else
    v29 = 0LL;
  v30 = CCachedVisualImageProxy::Update(v44, &v51, &v52, v45, v48, v29, v46);
  v15 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x404u, 0LL);
    goto LABEL_59;
  }
  v33 = CSecondaryWindowRepresentation::CreateBrushForCVI(v32, v31, v44, v47, 0LL, &v49);
  v15 = v33;
  if ( v33 >= 0 )
  {
    v8 = v50;
LABEL_32:
    if ( v8 )
    {
      if ( *v8 )
        CBaseObject::Release(*v8);
      v34 = v49;
      *v8 = v49;
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)v34 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v35 = v45;
      *a3 = v45;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v36 = v47;
      *a4 = v47;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v37 = v48;
      *a6 = v48;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v38 = v44;
      *a7 = v44;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    goto LABEL_57;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x406u, 0LL);
LABEL_57:
  if ( v49 )
    CBaseObject::Release(v49);
LABEL_59:
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v47 )
    CBaseObject::Release(v47);
  if ( v48 )
    CBaseObject::Release(v48);
  if ( v44 )
    CBaseObject::Release(v44);
  return v15;
}
