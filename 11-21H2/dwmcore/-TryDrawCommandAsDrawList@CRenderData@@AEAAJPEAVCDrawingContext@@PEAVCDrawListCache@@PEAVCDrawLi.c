/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18005B470
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x180059634 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x18005B9A0 (-GetOpacity@CLegacyMilBrush@@KAMMPEAV-$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005BB20 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUM.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x18005BD74 (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18005C274 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C274.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB360 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PE.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18023B320 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18023B5D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        CRenderData *this,
        const struct CVisualTree **a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        int a5,
        CRenderData *a6,
        bool *a7)
{
  unsigned int v7; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  const __m128i *v14; // rsi
  CRectangleGeometry *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  float v18; // xmm0_4
  __int64 v19; // rax
  CRenderData *v20; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  struct CImageSource *v30; // rdi
  int v31; // eax
  unsigned int v32; // ecx
  struct D2D_RECT_F *v33; // rsi
  struct D2D_RECT_F *v34; // rdi
  struct CDrawListEntryBuilder *v35; // r13
  __int64 v36; // rax
  int v37; // eax
  CImageLegacyMilBrush *v38; // rdi
  __int64 v39; // rcx
  bool v40; // zf
  __int64 v41; // rcx
  struct D2D_RECT_F v42; // xmm1
  __int64 v43; // rdx
  float Opacity; // xmm0_4
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rdx
  CRenderData *v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  __int64 v55; // rcx
  int v56; // eax
  CRenderData *v57; // rcx
  int v58; // eax
  unsigned int v59; // ecx
  int ShapeData; // eax
  unsigned int v61; // ecx
  __int64 v62; // rdi
  struct CDrawListEntryBuilder *v63; // rsi
  CRenderData *v64; // rcx
  struct CDrawListEntryBuilder *v65; // rdi
  struct CDrawListEntryBuilder *v66; // r15
  struct CDrawListEntryBuilder *v67; // r13
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // r8
  int BoundsSafe; // eax
  unsigned int v72; // ecx
  __int32 v73; // eax
  struct D2D_RECT_F *v74; // rcx
  float v75; // xmm0_4
  const struct D2D_RECT_F *v76; // rcx
  int v77; // eax
  unsigned int v78; // ecx
  struct D2D_RECT_F v79; // [rsp+48h] [rbp-61h] BYREF
  void *v80[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v81; // [rsp+68h] [rbp-41h]
  struct D2D_RECT_F v82; // [rsp+70h] [rbp-39h] BYREF
  struct CDrawListEntryBuilder *v83[2]; // [rsp+80h] [rbp-29h] BYREF
  struct D2D_RECT_F v84; // [rsp+90h] [rbp-19h] BYREF

  v7 = 0;
  v83[0] = a4;
  *a7 = 0;
  if ( a5 == 455 )
  {
    v30 = *(struct CImageSource **)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 1) + 4LL));
    if ( !v30 || !(*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)v30 + 56LL))(v30, 83LL) )
      return v7;
    if ( !*(_QWORD *)(a3 + 32) )
    {
      v31 = CRenderData::DrawImageResource_FillMode(this, a2, a4, v30, 0LL, 0LL, 1.0);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x281u, 0LL);
        return v7;
      }
    }
    goto LABEL_8;
  }
  if ( a5 != 456 )
  {
    switch ( a5 )
    {
      case 458:
        v26 = *((_QWORD *)a6 + 1);
        v27 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(v26 + 4));
        *(_QWORD *)&v79.left = v27;
        if ( !v27 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, 83LL) )
          return v7;
        if ( !*(_QWORD *)(a3 + 32) )
        {
          v82 = *(struct D2D_RECT_F *)(v26 + 8);
          v28 = CRenderData::DrawImageResource_FillMode(
                  (int)this,
                  (int)a2,
                  (int)a4,
                  SLODWORD(v79.left),
                  (__int64)&v82,
                  1.0);
          v7 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x26Au, 0LL);
            return v7;
          }
        }
        break;
      case 460:
        v83[0] = *((struct CDrawListEntryBuilder **)a6 + 1);
        v38 = *(CImageLegacyMilBrush **)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)v83[0] + 1));
        if ( !v38 )
          return v7;
        if ( (*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)v38 + 56LL))(v38, 174LL) )
        {
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v49 = *((_QWORD *)v38 + 9);
            v82 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)v38 + 6);
            v82.bottom = _mm_shuffle_ps((__m128)v82, (__m128)v82, 255).m128_f32[0]
                       * CLegacyMilBrush::GetOpacity(v39, v49);
            v51 = CRenderData::DrawSolidColorRectangle(
                    v50,
                    (struct CDrawingContext *)a2,
                    a4,
                    (struct CDrawListEntryBuilder *)((char *)v83[0] + 8),
                    (const struct _D3DCOLORVALUE *)&v82);
            v7 = v51;
            if ( v51 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x206u, 0LL);
              return v7;
            }
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)v38 + 56LL))(v38, 98LL) )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(CImageLegacyMilBrush *, __int64))(*(_QWORD *)v38 + 56LL))(
                    v38,
                    82LL) )
              return v7;
            *(_QWORD *)&v84.left = *((_QWORD *)v38 + 31);
            v40 = *(_QWORD *)&v84.left == 0LL;
            if ( *(_QWORD *)&v84.left )
            {
              if ( CImageLegacyMilBrush::ReducesToFillImage(v38) )
              {
                if ( !*(_QWORD *)(a3 + 32) )
                {
                  v42 = (struct D2D_RECT_F)*((_OWORD *)v38 + 12);
                  v43 = *((_QWORD *)v38 + 17);
                  v82 = *(struct D2D_RECT_F *)((char *)v83[0] + 8);
                  v79 = v82;
                  v82 = v42;
                  Opacity = CLegacyMilBrush::GetOpacity(v41, v43);
                  v45 = CRenderData::DrawImageResource_FillMode(
                          this,
                          a2,
                          a4,
                          *(struct CImageSource **)&v84.left,
                          &v82,
                          &v79,
                          Opacity);
                  v7 = v45;
                  if ( v45 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x227u, 0LL);
                    return v7;
                  }
                }
                break;
              }
              v40 = *(_QWORD *)&v84.left == 0LL;
            }
            *a7 = v40;
            return v7;
          }
          if ( !*(_QWORD *)(a3 + 32) )
          {
            v53 = CLinearGradientLegacyMilBrush::Draw(
                    v38,
                    (struct CDrawingContext *)a2,
                    a4,
                    (struct CDrawListEntryBuilder *)((char *)v83[0] + 8));
            v7 = v53;
            if ( v53 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x213u, 0LL);
              return v7;
            }
          }
        }
        break;
      case 461:
        if ( !*(_QWORD *)(a3 + 32) )
        {
          v47 = CRenderData::DrawSolidColorRectangle(
                  a6,
                  (struct CDrawingContext *)a2,
                  a4,
                  (const struct MilRectF *)(*((_QWORD *)a6 + 1) + 4LL),
                  (const struct _D3DCOLORVALUE *)(*((_QWORD *)a6 + 1) + 20LL));
          v7 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x23Fu, 0LL);
            return v7;
          }
        }
        break;
      case 462:
        v22 = *((_QWORD *)a6 + 1);
        v23 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *(unsigned int *)(v22 + 4));
        *(_QWORD *)&v79.left = v23;
        if ( !v23 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 56LL))(v23, 83LL) )
          return v7;
        if ( !*(_QWORD *)(a3 + 32) )
        {
          v82 = *(struct D2D_RECT_F *)(v22 + 8);
          v24 = CRenderData::DrawImageResource_TileMode(
                  this,
                  (struct CDrawingContext *)a2,
                  a4,
                  *(struct CImageSource **)&v79.left,
                  *(float *)(v22 + 24),
                  v22 + 28,
                  (__int64)&v82);
          v7 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x254u, 0LL);
            return v7;
          }
        }
        break;
      default:
        return v7;
    }
LABEL_8:
    *a7 = 1;
    return v7;
  }
  v12 = *((_QWORD *)a6 + 1);
  v13 = *((_QWORD *)this + 17);
  v14 = *(const __m128i **)(v13 + 8LL * *(unsigned int *)(v12 + 4));
  v15 = *(CRectangleGeometry **)(v13 + 8LL * *(unsigned int *)(v12 + 8));
  if ( !v14 || !v15 )
    return v7;
  if ( !(*(unsigned __int8 (__fastcall **)(const __m128i *, __int64))(v14->m128i_i64[0] + 56))(v14, 174LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(const __m128i *, __int64))(v14->m128i_i64[0] + 56))(v14, 82LL) )
      return v7;
    if ( !(*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 137LL) )
      return v7;
    *(_QWORD *)&v79.left = v14[15].m128i_i64[1];
    if ( CRectangleGeometry::IsRoundedRectangleGeometry(v15) )
      return v7;
    if ( !*(_QWORD *)(a3 + 32) && v70 )
    {
      v82 = 0LL;
      BoundsSafe = CGeometry::GetBoundsSafe(v69, 0LL, &v82);
      v7 = BoundsSafe;
      if ( BoundsSafe < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, BoundsSafe, 0x2E0u, 0LL);
        return v7;
      }
      v73 = v14[13].m128i_i32[2];
      v74 = 0LL;
      v84 = v82;
      if ( !v73 || v73 == 2 )
        v74 = &v84;
      v75 = CLegacyMilBrush::GetOpacity(v74, v14[8].m128i_i64[1]);
      v77 = CRenderData::DrawImageResource_FillMode(
              this,
              a2,
              v83[0],
              *(struct CImageSource **)&v79.left,
              v76,
              &v84,
              v75);
      v7 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x2FFu, 0LL);
        return v7;
      }
    }
    goto LABEL_8;
  }
  v17 = v14[4].m128i_i64[1];
  v79 = (struct D2D_RECT_F)_mm_loadu_si128(v14 + 6);
  v18 = CLegacyMilBrush::GetOpacity(v16, v17);
  v19 = *(_QWORD *)v15;
  v79.bottom = _mm_shuffle_ps((__m128)v79, (__m128)v79, 255).m128_f32[0] * v18;
  if ( !(*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(v19 + 56))(v15, 141LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 137LL) )
    {
      if ( CRectangleGeometry::IsRoundedRectangleGeometry(v15) )
        return v7;
      if ( !*(_QWORD *)(a3 + 32) )
      {
        v82 = 0LL;
        v56 = CGeometry::GetBoundsSafe(v55, 0LL, &v82);
        v7 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v57, 0LL, 0, v56, 0x2AFu, 0LL);
          return v7;
        }
        v58 = CRenderData::DrawSolidColorRectangle(
                v57,
                (struct CDrawingContext *)a2,
                v83[0],
                (const struct MilRectF *)&v82,
                (const struct _D3DCOLORVALUE *)&v79);
        v7 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x2B0u, 0LL);
          return v7;
        }
      }
      goto LABEL_8;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 25LL) )
      return v7;
    *(_QWORD *)&v82.left = 0LL;
    LOBYTE(v82.right) = 0;
    ShapeData = CGeometry::GetShapeData(v15, 0LL, (struct CShapePtr *)&v82);
    v7 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, ShapeData, 0x2BBu, 0LL);
      goto LABEL_86;
    }
    if ( !*(_QWORD *)&v82.left
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, struct D2D_RECT_F *))(**(_QWORD **)&v82.left + 64LL))(
            *(_QWORD *)&v82.left,
            &v84) )
    {
      goto LABEL_86;
    }
    v81 = 0LL;
    v62 = 0LL;
    *(_OWORD *)v80 = 0LL;
    if ( LODWORD(v84.left) )
    {
      std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
        v80,
        LODWORD(v84.left));
      v62 = v81;
    }
    v63 = (struct CDrawListEntryBuilder *)v80[0];
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(**(_QWORD **)&v82.left + 80LL))(
           *(_QWORD *)&v82.left,
           v80[0]) )
    {
      if ( *(_QWORD *)(a3 + 32) || (v66 = v63, v63 == v80[1]) )
      {
LABEL_80:
        *a7 = 1;
      }
      else
      {
        v67 = v83[0];
        while ( 1 )
        {
          *(_OWORD *)v83 = *(_OWORD *)v66;
          v68 = CRenderData::DrawSolidColorRectangle(
                  v64,
                  (struct CDrawingContext *)a2,
                  v67,
                  (const struct MilRectF *)v83,
                  (const struct _D3DCOLORVALUE *)&v79);
          v7 = v68;
          if ( v68 < 0 )
            break;
          v66 = (struct CDrawListEntryBuilder *)((char *)v66 + 16);
          if ( v66 == v80[1] )
            goto LABEL_80;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, v68, 0x2CDu, 0LL);
      }
      if ( !v63 )
        goto LABEL_86;
      v83[0] = v63;
      v65 = (struct CDrawListEntryBuilder *)((v62 - (_QWORD)v63) & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)&v79.left = v65;
      if ( (unsigned __int64)v65 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned((void **)v83, (unsigned __int64 *)&v79);
        v65 = *(struct CDrawListEntryBuilder **)&v79.left;
        v63 = v83[0];
      }
    }
    else
    {
      v7 = -2003304309;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2003304309, 0x2C5u, 0LL);
      if ( !v63 )
      {
LABEL_86:
        CShapePtr::Release((CShapePtr *)&v82);
        return v7;
      }
      *(_QWORD *)&v79.left = v63;
      v65 = (struct CDrawListEntryBuilder *)((v62 - (_QWORD)v63) & 0xFFFFFFFFFFFFFFF0uLL);
      v83[0] = v65;
      if ( (unsigned __int64)v65 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned((void **)&v79, (unsigned __int64 *)v83);
        v65 = v83[0];
        v63 = *(struct CDrawListEntryBuilder **)&v79.left;
      }
    }
    operator delete(v63, (unsigned __int64)v65);
    goto LABEL_86;
  }
  if ( *(_QWORD *)(a3 + 32) )
    goto LABEL_8;
  v33 = (struct D2D_RECT_F *)*((_QWORD *)v15 + 18);
  v34 = (struct D2D_RECT_F *)*((_QWORD *)v15 + 19);
  if ( v33 == v34 )
    goto LABEL_8;
  v35 = v83[0];
  while ( 1 )
  {
    v36 = 0LL;
    v82 = *v33;
    do
    {
      *(float *)((char *)v83 + v36) = (float)*(int *)((char *)&v82.left + v36);
      v36 += 4LL;
    }
    while ( v36 < 16 );
    v37 = CRenderData::DrawSolidColorRectangle(
            v20,
            (struct CDrawingContext *)a2,
            v35,
            (const struct MilRectF *)v83,
            (const struct _D3DCOLORVALUE *)&v79);
    v7 = v37;
    if ( v37 < 0 )
      break;
    if ( ++v33 == v34 )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v37, 0x2A1u, 0LL);
  return v7;
}
