/*
 * XREFs of ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750
 * Callers:
 *     ?Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180013578 (-Create@CTexturedRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_.c)
 *     ?Create@CGeneratedVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180030D90 (-Create@CGeneratedVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AE.c)
 * Callees:
 *     ??$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x180004824 (--$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA-AV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003170C (-IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C (-InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsEqual@DirectComposition@@YA_NNNN@Z @ 0x18003227C (-IsEqual@DirectComposition@@YA_NNNN@Z.c)
 *     ?ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA?AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800322A0 (-ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA-AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRI.c)
 *     ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448 (--0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?IsGtOrEqual@DirectComposition@@YA_NNNN@Z @ 0x1800FCFDC (-IsGtOrEqual@DirectComposition@@YA_NNNN@Z.c)
 */

__int64 __fastcall DirectComposition::CTexturedRectanglePrimitive::CTexturedRectanglePrimitive(
        __int64 a1,
        __int64 a2,
        FLOAT *a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        DirectComposition *a10,
        char a11,
        char a12)
{
  struct D2D_MATRIX_3X2_F *v14; // rdx
  char v15; // cl
  struct D2D_RECT_F *v16; // rsi
  _DWORD *v17; // rax
  float v19; // xmm6_4
  float v20; // xmm5_4
  unsigned int v21; // r8d
  DirectComposition *p_top; // rcx
  double v23; // xmm4_8
  struct D2D_RECT_F v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rax
  const struct D2D_MATRIX_3X2_F *v27; // r9
  DirectComposition *v28; // rcx
  __m128 v29; // xmm6
  bool v30; // cc
  float v31; // xmm7_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm8_4
  DirectComposition *v36; // rcx
  struct D2D_RECT_F v37; // [rsp+48h] [rbp-89h] BYREF
  float v38[4]; // [rsp+58h] [rbp-79h] BYREF
  struct D2D_RECT_F v39; // [rsp+68h] [rbp-69h] BYREF
  __int64 v40; // [rsp+78h] [rbp-59h]

  DirectComposition::CPrimitive::CPrimitive(a1);
  v15 = *(_BYTE *)(a1 + 288);
  v16 = (struct D2D_RECT_F *)(a1 + 240);
  *(_QWORD *)a1 = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CTexturedRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  v17 = (_DWORD *)(a1 + 252);
  *(_BYTE *)(a1 + 288) = (4 * a12) | v15 & 0xFB;
  if ( a10 )
  {
    *v16 = *(struct D2D_RECT_F *)a10;
    *(_QWORD *)(a1 + 256) = *((_QWORD *)a10 + 2);
  }
  else
  {
    v16->left = 1.0;
    *v17 = 1065353216;
  }
  if ( a9 && (*(_BYTE *)(a9 + 112) & 4) != 0 )
  {
    *(_DWORD *)(a1 + 244) = 0;
    *v17 = 0;
    *(_DWORD *)(a1 + 260) = 1056964608;
  }
  *(_QWORD *)(a1 + 232) = a9;
  if ( a9 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a9 + 8));
  *(_BYTE *)(a1 + 288) |= 2u;
  if ( a11 )
  {
    v19 = (float)(int)HIDWORD(*(_QWORD *)(a9 + 44));
    DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(&v37.left, (__int64)a3, (float *)(a1 + 240), &v39.left);
    v21 = 0;
    p_top = (DirectComposition *)&v39.top;
    v23 = 0.0;
    while ( 1 )
    {
      a4 = *((float *)p_top - 1);
      if ( a4 <= v23 && !DirectComposition::IsEqual(p_top, v23, 9.999999717180685e-10, a4) )
        break;
      if ( v20 <= a4 && !DirectComposition::IsEqual(p_top, v20, 9.999999717180685e-10, a4) )
        break;
      a4 = *(float *)p_top;
      if ( a4 <= v23 && !DirectComposition::IsEqual(p_top, v23, 9.999999717180685e-10, a4) )
        break;
      if ( v19 <= a4 && !DirectComposition::IsEqual(p_top, v19, 9.999999717180685e-10, a4) )
        break;
      ++v21;
      p_top = (DirectComposition *)((char *)p_top + 8);
      if ( v21 >= 4 )
        goto LABEL_9;
    }
    *(_BYTE *)(a1 + 288) &= ~2u;
  }
LABEL_9:
  if ( (*(_BYTE *)(a1 + 288) & 2) == 0 && (!a10 || DirectComposition::IsAxisAligned(a10, v14)) )
  {
    v24 = *v16;
    v25 = *(_QWORD *)(a1 + 232);
    v37.left = 0.0;
    v37.top = 0.0;
    v39 = v24;
    v26 = *(_QWORD *)(v25 + 44);
    v37.right = (float)(int)v26;
    v37.bottom = (float)SHIDWORD(v26);
    v40 = *(_QWORD *)(a1 + 256);
    if ( DirectComposition::InvertMatrix((DirectComposition *)&v39, v14) )
    {
      v29 = (__m128)_mm_loadu_si128((const __m128i *)DirectComposition::ComputeTransformedRectBoundsAxisAligned(
                                                       (DirectComposition *)v38,
                                                       &v37,
                                                       &v39,
                                                       v27));
      v30 = v29.m128_f32[0] <= *a3;
      v37 = (struct D2D_RECT_F)v29;
      LODWORD(v37.left) = v29.m128_i32[0];
      if ( v30 )
      {
        v37.left = *a3;
        v29 = (__m128)v37;
      }
      v31 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
      v30 = v31 <= a3[1];
      v37.top = v31;
      if ( v30 )
      {
        v37.top = a3[1];
        v29 = (__m128)v37;
      }
      v32 = a3[2];
      v33 = _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
      v37.right = v33;
      if ( v32 <= v33 )
      {
        v37.right = v32;
        v33 = v32;
        v29 = (__m128)v37;
      }
      v34 = a3[3];
      v35 = _mm_shuffle_ps(v29, v29, 255).m128_f32[0];
      if ( v34 <= v35 )
      {
        v37.bottom = a3[3];
        v35 = v34;
        v29 = (__m128)v37;
      }
      if ( DirectComposition::IsGtOrEqual(v28, v33, 9.999999717180685e-10, a4)
        || DirectComposition::IsGtOrEqual(v36, v35, 9.999999717180685e-10, a4) )
      {
        *(_DWORD *)(a1 + 136) = 0;
        *(_DWORD *)(a1 + 140) = 0;
        *(_DWORD *)(a1 + 144) = 0;
        *(_DWORD *)(a1 + 148) = 0;
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = 0;
        *(_DWORD *)(a1 + 188) = 0;
        *(_DWORD *)(a1 + 184) = 0;
      }
      else
      {
        *(__m128 *)(a1 + 136) = v29;
        *(_OWORD *)(a1 + 184) = *(_OWORD *)DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(
                                             v38,
                                             a1 + 136,
                                             (float *)(a1 + 72),
                                             0LL);
      }
    }
    *(_BYTE *)(a1 + 288) |= 2u;
  }
  return a1;
}
