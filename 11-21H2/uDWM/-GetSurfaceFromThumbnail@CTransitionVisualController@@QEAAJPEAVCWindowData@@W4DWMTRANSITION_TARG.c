/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800ED3B8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DF0C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001B0D4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x180046EDC (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800E3514 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x180107258 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
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
  float v14; // xmm0_4
  __int64 v15; // rax
  int v16; // eax
  volatile signed __int32 *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // [rsp+58h] [rbp-99h]
  CBaseObject *v23; // [rsp+78h] [rbp-79h] BYREF
  CBaseObject *v24; // [rsp+80h] [rbp-71h] BYREF
  __int64 v25; // [rsp+88h] [rbp-69h] BYREF
  int v26; // [rsp+90h] [rbp-61h]
  const struct tagRECT *v27; // [rsp+98h] [rbp-59h] BYREF
  int v28; // [rsp+A0h] [rbp-51h]
  __int128 v29; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-39h] BYREF

  v8 = 0;
  v9 = a4;
  v27 = a4;
  *a8 = 1.0;
  v11 = 0LL;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  v28 = a3;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 480);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v23, (float *)&v27);
    v14 = 1.0 / *(float *)&v27;
    a8[1] = 1.0 / *(float *)&v27;
    *a8 = v14;
    if ( (CVI & 0x80000000) != 0 )
      goto LABEL_27;
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 592) )
      return CVI;
    while ( 1 )
    {
      v15 = *(_QWORD *)(a2 + 568);
      v25 = 0x3F8000003F800000LL;
      v26 = 1065353216;
      if ( (int)CThumbnailVisual::GetCVI(
                  *(CThumbnailVisual **)(*(_QWORD *)(v15 + 8LL * v8) + 88LL),
                  v9,
                  &v23,
                  (struct MilPoint3F *)&v25) >= 0
        && (!a5
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v25 - 1.0) & _xmm) <= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v25 + 1) - 1.0) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      if ( ++v8 >= *(_DWORD *)(a2 + 592) )
        goto LABEL_27;
      v9 = v27;
    }
    v16 = v26;
    *(_QWORD *)a8 = v25;
    *((_DWORD *)a8 + 2) = v16;
  }
  v17 = (volatile signed __int32 *)v23;
  if ( (v28 & 0x4000000) != 0 )
    CCachedVisualImageProxy::Freeze(v23);
  v18 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v24);
  CVI = v18;
  if ( v18 >= 0 )
  {
    v11 = (volatile signed __int32 *)v24;
    v30 = _xmm;
    v29 = _xmm;
    v20 = CImageLegacyMilBrushProxy::Update(
            (__int64)v24,
            v19,
            (__int64)&v30,
            (__int64)&v29,
            0LL,
            1u,
            1,
            0LL,
            0LL,
            1,
            v22,
            0,
            0,
            (__int64)v17);
    CVI = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v20,
        0x982u);
      goto LABEL_28;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = (CBaseObject *)v17;
    if ( v17 )
    {
      _InterlockedAdd(v17 + 2, 1u);
      v17 = (volatile signed __int32 *)v23;
      v11 = (volatile signed __int32 *)v24;
    }
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v11;
    if ( !v11 )
      goto LABEL_28;
    _InterlockedAdd(v11 + 2, 1u);
    v11 = (volatile signed __int32 *)v24;
LABEL_27:
    v17 = (volatile signed __int32 *)v23;
    goto LABEL_28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v18,
    0x967u);
  v11 = (volatile signed __int32 *)v24;
LABEL_28:
  if ( v17 )
    CBaseObject::Release((CBaseObject *)v17);
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  return CVI;
}
