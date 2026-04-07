/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18000CA28
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x180017974 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003858C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180043888 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E4D54 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18010D664 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  unsigned int v8; // r15d
  const struct tagRECT *v9; // r10
  volatile signed __int32 *v11; // rdi
  unsigned int CVI; // esi
  CWindowSnapshot *v13; // rcx
  float v15; // xmm0_4
  __int64 v16; // rax
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  CBaseObject *v22; // [rsp+78h] [rbp-79h] BYREF
  CBaseObject *v23; // [rsp+80h] [rbp-71h] BYREF
  __int64 v24; // [rsp+88h] [rbp-69h] BYREF
  int v25; // [rsp+90h] [rbp-61h]
  const struct tagRECT *v26; // [rsp+98h] [rbp-59h] BYREF
  int v27; // [rsp+A0h] [rbp-51h]
  __int128 v28; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-39h] BYREF

  v8 = 0;
  v9 = a4;
  v26 = a4;
  *a8 = 1.0;
  v11 = 0LL;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  v27 = a3;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 480);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v22, (float *)&v26);
    v15 = 1.0 / *(float *)&v26;
    a8[1] = 1.0 / *(float *)&v26;
    *a8 = v15;
    if ( (CVI & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 592) )
      return CVI;
    while ( 1 )
    {
      v16 = *(_QWORD *)(a2 + 568);
      v24 = 0x3F8000003F800000LL;
      v25 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v16 + 8LL * v8) + 88LL),
             v9,
             &v22,
             (struct MilPoint3F *)&v24) >= 0
        && (!a5
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v24 - 1.0) & _xmm) <= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v24 + 1) - 1.0) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      if ( ++v8 >= *(_DWORD *)(a2 + 592) )
        goto LABEL_28;
      v9 = v26;
    }
    v17 = v25;
    *(_QWORD *)a8 = v24;
    *((_DWORD *)a8 + 2) = v17;
  }
  v18 = (volatile signed __int32 *)v22;
  if ( (v27 & 0x4000000) != 0 )
    CCachedVisualImageProxy::Freeze(v22);
  v19 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          &v23);
  CVI = v19;
  if ( v19 >= 0 )
  {
    v11 = (volatile signed __int32 *)v23;
    v29 = _xmm;
    v28 = _xmm;
    v21 = CImageLegacyMilBrushProxy::Update(v23, v20, &v29, &v28);
    CVI = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v21,
        0x94Du,
        0LL);
      goto LABEL_29;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = (CBaseObject *)v18;
    if ( v18 )
    {
      _InterlockedAdd(v18 + 2, 1u);
      v18 = (volatile signed __int32 *)v22;
      v11 = (volatile signed __int32 *)v23;
    }
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v11;
    if ( !v11 )
      goto LABEL_29;
    _InterlockedAdd(v11 + 2, 1u);
    v11 = (volatile signed __int32 *)v23;
LABEL_28:
    v18 = (volatile signed __int32 *)v22;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v19,
    0x932u,
    0LL);
  v11 = (volatile signed __int32 *)v23;
LABEL_29:
  if ( v18 )
    CBaseObject::Release((CBaseObject *)v18);
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  return CVI;
}
