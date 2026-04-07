/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE1C4 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18000E6F0 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x18000F810 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ABA4 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800385B8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800F0288 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v9; // rdi
  CBaseObject **v11; // r15
  volatile signed __int32 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  CBaseObject *v20; // rax
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rdi
  CWindowData *v24; // rdx
  CWindowData *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  int Brush; // eax
  CBaseObject *v43; // [rsp+40h] [rbp-59h] BYREF
  CBaseObject *v44; // [rsp+48h] [rbp-51h] BYREF
  CBaseObject *v45; // [rsp+50h] [rbp-49h] BYREF
  CBaseObject *v46; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v47; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject **v48; // [rsp+68h] [rbp-31h]
  CBaseObject **v49; // [rsp+70h] [rbp-29h]
  __int128 v50; // [rsp+78h] [rbp-21h] BYREF
  __int128 v51; // [rsp+88h] [rbp-11h] BYREF

  v47 = 0LL;
  v44 = 0LL;
  v9 = (CBaseObject **)a3;
  v45 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v11 = a8;
  v48 = (CBaseObject **)a3;
  v49 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v44 = (CBaseObject *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
    }
    else
    {
      v13 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v44);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3A1u);
        goto LABEL_63;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v45 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v45);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3ABu);
        goto LABEL_63;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v46 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CCompositor::CreateProxy<CSizeResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v46);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x3BFu);
        goto LABEL_63;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v47, &v43, (float *)(a1 + 368));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_36;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x3C6u);
    goto LABEL_61;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v43 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v43);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x3D0u);
      goto LABEL_63;
    }
  }
  v50 = 0LL;
  if ( v44 )
  {
    v22 = 0;
    v50 = 0LL;
  }
  else
  {
    v22 = 1;
    v50 = _xmm;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x100) != 0 )
    v23 = 0LL;
  else
    v23 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    goto LABEL_72;
  if ( *(_DWORD *)(a1 + 72) != 2 )
  {
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_22;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v24 = *(CWindowData **)(*((_QWORD *)v25 + 61) + 80LL);
      goto LABEL_22;
    }
    goto LABEL_72;
  }
  v26 = *((_QWORD *)v25 + 60);
  if ( !v26 )
  {
LABEL_72:
    v24 = v25;
    goto LABEL_22;
  }
  v24 = *(CWindowData **)(v26 + 32);
LABEL_22:
  if ( CWindowData::IsImmersiveWindow(v24) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 376) )
      v23 = *(_QWORD *)(a1 + 376);
    goto LABEL_31;
  }
  if ( !v23 )
  {
    v27 = 0LL;
    v28 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      if ( *(_DWORD *)(a1 + 72) == 2 )
      {
        v29 = *(_QWORD *)(v28 + 480);
        if ( v29 )
        {
          v27 = *(_QWORD *)(v29 + 32);
          goto LABEL_28;
        }
        goto LABEL_73;
      }
      if ( *(_DWORD *)(a1 + 72) != 3 )
      {
LABEL_28:
        v30 = *(_QWORD *)(v27 + 440);
        if ( v30 )
        {
          if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
            v23 = *(_QWORD *)(v30 + 552);
          else
            v23 = *(_QWORD *)(v30 + 264);
        }
        goto LABEL_31;
      }
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v28 + 488) + 80LL);
        goto LABEL_28;
      }
    }
LABEL_73:
    v27 = v28;
    goto LABEL_28;
  }
LABEL_31:
  v51 = 0LL;
  if ( v23 )
    v31 = *(_QWORD *)(v23 + 16);
  else
    v31 = 0LL;
  v32 = CCachedVisualImageProxy::Update(v43, &v50, &v51, v44, v46, v31, v22);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x404u);
    goto LABEL_63;
  }
  v35 = CSecondaryWindowRepresentation::CreateBrushForCVI(v34, v33, v43, v45, 0LL, &v47);
  v14 = v35;
  if ( v35 >= 0 )
  {
    v9 = v48;
    v11 = v49;
LABEL_36:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v36 = v47;
      *v11 = v47;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( v9 )
    {
      if ( *v9 )
        CBaseObject::Release(*v9);
      v37 = v44;
      *v9 = v44;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v38 = v45;
      *a4 = v45;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v39 = v46;
      *a6 = v46;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v40 = v43;
      *a7 = v43;
      if ( v40 )
        _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
    }
    goto LABEL_61;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x406u);
LABEL_61:
  if ( v47 )
    CBaseObject::Release(v47);
LABEL_63:
  if ( v44 )
    CBaseObject::Release(v44);
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v43 )
    CBaseObject::Release(v43);
  return v14;
}
