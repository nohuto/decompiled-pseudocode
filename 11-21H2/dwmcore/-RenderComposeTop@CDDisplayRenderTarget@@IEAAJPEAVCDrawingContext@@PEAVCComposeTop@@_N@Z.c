/*
 * XREFs of ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C90AC
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E3B8 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801C0B24 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C8868 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247BB4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247D6C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderComposeTop(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  __int64 v23; // r9
  __int64 v24; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  CDDisplayRenderTarget *v26; // rbx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  _OWORD v35[4]; // [rsp+30h] [rbp-49h] BYREF
  int v36; // [rsp+70h] [rbp-9h]
  __int128 v37; // [rsp+80h] [rbp+7h] BYREF
  __int128 v38; // [rsp+90h] [rbp+17h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_31;
    if ( *((_BYTE *)this + 11209) )
    {
      v11 = *((_DWORD *)this + 4547);
      v12 = 0;
      v13 = *((_DWORD *)this + 4548);
      *(_QWORD *)&v37 = 0LL;
      *((_QWORD *)&v37 + 1) = __PAIR64__(v13, v11);
    }
    else
    {
      v37 = *(_OWORD *)((char *)this + 18172);
      v11 = DWORD2(v37);
      v12 = v37;
    }
    v5 = 1;
    *(float *)&v38 = (float)v12;
    *((float *)&v38 + 1) = (float)SDWORD1(v37);
    v14 = (float)SHIDWORD(v37);
    *((float *)&v38 + 2) = (float)v11;
    v37 = 0LL;
    *((float *)&v38 + 3) = v14;
    v15 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v38, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x336u);
      return v4;
    }
    v17 = CComposeTop::Render(a3, a2, (char *)this + (*((_BYTE *)this + 11209) != 0 ? 18336LL : 18200LL), &v37);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x341u);
    }
    else
    {
      v19 = *(float *)&v37;
      if ( *(float *)&v38 > *(float *)&v37 )
      {
        LODWORD(v37) = v38;
        v19 = *(float *)&v38;
      }
      v20 = *((float *)&v37 + 1);
      if ( *((float *)&v38 + 1) > *((float *)&v37 + 1) )
      {
        DWORD1(v37) = DWORD1(v38);
        v20 = *((float *)&v38 + 1);
      }
      v21 = *((float *)&v37 + 2);
      if ( *((float *)&v37 + 2) > *((float *)&v38 + 2) )
      {
        DWORD2(v37) = DWORD2(v38);
        v21 = *((float *)&v38 + 2);
      }
      v22 = *((float *)&v37 + 3);
      if ( *((float *)&v37 + 3) > *((float *)&v38 + 3) )
      {
        HIDWORD(v37) = HIDWORD(v38);
        v22 = *((float *)&v38 + 3);
      }
      if ( v21 <= v19 || v22 <= v20 )
        v37 = 0uLL;
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v37) )
        goto LABEL_31;
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v37, 1, v23);
      v26 = *((_BYTE *)this + 11209)
          ? (CDDisplayRenderTarget *)((char *)this + 18336)
          : (CDDisplayRenderTarget *)((char *)this + 18200);
      v27 = *(_OWORD *)v26;
      v28 = *((_OWORD *)v26 + 1);
      v36 = *((_DWORD *)v26 + 16);
      v35[0] = v27;
      v29 = *((_OWORD *)v26 + 2);
      v35[1] = v28;
      v30 = *((_OWORD *)v26 + 3);
      v35[2] = v29;
      v35[3] = v30;
      CMILMatrix::Invert((CMILMatrix *)v35, v24, v25);
      v38 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v35, (__int64)&v37, (float *)&v38, v31);
      v32 = CComposeTop::NewContentRendered(a3);
      v4 = v32;
      if ( v32 >= 0 )
        goto LABEL_31;
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x355u);
    }
LABEL_34:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)this + (*((_BYTE *)this + 11209) != 0 ? 18336LL : 18200LL));
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x324u);
    return v4;
  }
LABEL_31:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_34;
  return v4;
}
