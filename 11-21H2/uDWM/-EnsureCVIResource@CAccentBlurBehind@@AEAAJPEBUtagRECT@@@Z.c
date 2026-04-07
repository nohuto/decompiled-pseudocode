/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180097528
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DF0C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18001B0D4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180027C54 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800385B8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A854C (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z @ 0x1800BD2B4 (-Update@CGaussianBlurEffectProxy@@QEAAJMII@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  unsigned int **v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  CGaussianBlurEffectProxy **v7; // rsi
  int v8; // eax
  __int64 i; // rax
  float v10; // xmm2_4
  unsigned int v11; // eax
  __m128i v12; // xmm0
  int v13; // eax
  float v14; // xmm0_4
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rsi
  int v20; // eax
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-59h]
  __int64 v26; // [rsp+50h] [rbp-29h]
  CBaseObject *v27; // [rsp+70h] [rbp-9h] BYREF
  __int128 v28; // [rsp+78h] [rbp-1h] BYREF
  __int128 v29; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v30; // [rsp+98h] [rbp+1Fh] BYREF

  v2 = (unsigned int **)(this + 46);
  v27 = 0LL;
  v28 = 0LL;
  if ( !this[46] )
  {
    v5 = CVisual::Create(this + 46);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1363;
LABEL_4:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v25);
      goto LABEL_47;
    }
    CVisual::SetInterpolationMode(*v2, 0);
  }
  if ( !this[47] )
  {
    v5 = CRenderDataVisual::Create(this + 47);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1369;
      goto LABEL_4;
    }
  }
  if ( !this[44] )
  {
    v5 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           this + 44);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1374;
      goto LABEL_4;
    }
  }
  v7 = this + 45;
  if ( !this[45] )
  {
    v8 = CCompositor::CreateProxy<CGaussianBlurEffectProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           this + 45);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x564u);
LABEL_47:
      v22 = this[42];
      if ( v22 )
      {
        CBaseObject::Release(v22);
        this[42] = 0LL;
      }
      v23 = this[43];
      if ( v23 )
      {
        CBaseObject::Release(v23);
        this[43] = 0LL;
      }
      return v6;
    }
    v5 = CGaussianBlurEffectProxy::Update(*v7, 3.0, 0, 1u);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1381;
      goto LABEL_4;
    }
    v5 = CVisualProxy::SetEffect(*((CVisualProxy **)*v2 + 2), *v7);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1382;
      goto LABEL_4;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v29 + i) = (float)*(&a2->left + i);
  v10 = *((float *)this + 82);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v11 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v11 = a2->bottom - a2->top;
    v12 = _mm_cvtsi32_si128(v11);
    v13 = 0;
    LODWORD(v14) = _mm_cvtepi32_ps(v12).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v13 = a2->right - a2->left;
    *((double *)&v28 + 1) = (float)(v14 * v10);
    *(double *)&v28 = (float)((float)v13 * v10);
  }
  v15 = (__int64)this[42];
  if ( !v15 )
  {
    v5 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           this + 42);
    v6 = v5;
    if ( v5 < 0 )
    {
      v25 = 1400;
      goto LABEL_4;
    }
    v15 = (__int64)this[42];
  }
  v5 = CCachedVisualImageProxy::Update(v15, (__int64)&v29, (__int64)&v28, 0LL, 0LL, *((_QWORD *)*v2 + 2), 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v25 = 1409;
    goto LABEL_4;
  }
  if ( this[43] )
    return v6;
  v16 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v27);
  v6 = v16;
  if ( v16 >= 0 )
  {
    v18 = (__int64)this[42];
    v19 = (volatile signed __int32 *)v27;
    v30 = _xmm;
    v29 = _xmm;
    v20 = CImageLegacyMilBrushProxy::Update(
            (__int64)v27,
            v17,
            (__int64)&v30,
            (__int64)&v29,
            0LL,
            1u,
            1,
            0LL,
            0LL,
            1,
            v26,
            0,
            0,
            v18);
    v6 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x59Fu);
      goto LABEL_44;
    }
    v21 = this[43];
    if ( v21 )
      CBaseObject::Release(v21);
    this[43] = (struct CVisual *)v19;
    if ( !v19 )
      return v6;
    _InterlockedIncrement(v19 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x585u);
  }
  v19 = (volatile signed __int32 *)v27;
LABEL_44:
  if ( v19 )
    CBaseObject::Release((CBaseObject *)v19);
  if ( (v6 & 0x80000000) != 0 )
    goto LABEL_47;
  return v6;
}
