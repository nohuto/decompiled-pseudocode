/*
 * XREFs of ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB360
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_fmodf_0 @ 0x180101910 (_o_fmodf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        CRenderData *this,
        const struct CVisualTree **a2,
        struct CDrawListEntryBuilder *a3,
        struct CImageSource *a4,
        float a5,
        __int64 a6,
        float *a7)
{
  __int64 v7; // rax
  __int64 *v11; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r9
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm8_4
  float bottom; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm7_4
  __int64 v25; // rcx
  double v26; // xmm0_8
  float v27; // xmm11_4
  double v28; // xmm0_8
  float v29; // xmm10_4
  float v30; // xmm13_4
  float v31; // xmm12_4
  float v32; // xmm9_4
  float v33; // xmm6_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  bool v37; // zf
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  int v44; // eax
  __int64 v45; // rcx
  float v46; // xmm0_4
  float v47; // xmm0_4
  __int64 v49; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v50; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v51[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v52; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v53; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v54; // [rsp+C8h] [rbp-40h] BYREF

  v7 = *((_QWORD *)a4 + 8);
  v52 = 0;
  v54 = 0LL;
  v11 = (__int64 *)((char *)a4 + *(int *)(v7 + 8) + 64);
  v13 = *v11;
  v49 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 56))(v11, &v49);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x3C2u);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __m128 *))(*(_QWORD *)v49 + 8LL))(v49, v51, &v54) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v51, (__int64)&v54, &v53.left, v18);
      top = v53.top;
      left = v53.left;
      bottom = v53.bottom;
      right = v53.right;
    }
    else
    {
      left = v54.m128_f32[0];
      LODWORD(top) = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
      LODWORD(right) = _mm_shuffle_ps(v54, v54, 170).m128_u32[0];
      LODWORD(bottom) = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
      v53 = (struct D2D_RECT_F)v54;
    }
    v23 = right - left;
    v24 = bottom - top;
    v26 = o_fmodf_0(v17);
    v27 = *(float *)&v26;
    if ( *(float *)&v26 < 0.0 )
      v27 = *(float *)&v26 + v23;
    v28 = o_fmodf_0(v25);
    v29 = *(float *)&v28;
    if ( *(float *)&v28 < 0.0 )
      v29 = *(float *)&v28 + v24;
    v30 = v23 - v27;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - v27) & _xmm) < 0.0000011920929 )
      v30 = v23;
    v31 = v24 - v29;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - v29) & _xmm) < 0.0000011920929 )
      v31 = v24;
    v32 = a7[1];
    if ( a7[3] > v32 )
    {
      while ( 1 )
      {
        v33 = *a7;
        v34 = a7[2];
        if ( v34 > *a7 )
          break;
LABEL_31:
        if ( v32 == a7[1] )
          v47 = v31;
        else
          v47 = v24;
        v32 = v32 + v47;
        if ( a7[3] <= v32 )
          goto LABEL_34;
      }
      v35 = *a7;
      while ( 1 )
      {
        v50.left = v33;
        v50.top = v32;
        if ( v33 == v35 )
          v36 = v30;
        else
          v36 = v23;
        v37 = v32 == a7[1];
        v38 = v36 + v33;
        v50.right = v38;
        if ( v37 )
          v39 = v31;
        else
          v39 = v24;
        v40 = v39 + v32;
        v50.bottom = v40;
        if ( v34 <= v38 )
        {
          v50.right = v34;
          v38 = v34;
        }
        v41 = a7[3];
        if ( v41 <= v40 )
        {
          v50.bottom = a7[3];
          v40 = v41;
        }
        v42 = v33 == v35 ? v27 : 0.0;
        v37 = v32 == a7[1];
        v53.left = v42;
        v43 = v37 ? v29 : 0.0;
        v53.top = v43;
        v53.right = (float)(v38 - v33) + v42;
        v53.bottom = (float)(v40 - v32) + v43;
        v44 = CRenderData::DrawImageResource_FillMode(this, a2, a3, a4, &v53, &v50, a5);
        v16 = v44;
        if ( v44 < 0 )
          break;
        v35 = *a7;
        if ( v33 == *a7 )
          v46 = v30;
        else
          v46 = v23;
        v34 = a7[2];
        v33 = v33 + v46;
        if ( v34 <= v33 )
          goto LABEL_31;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, v44, 0x415u);
    }
  }
LABEL_34:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v49);
  return v16;
}
