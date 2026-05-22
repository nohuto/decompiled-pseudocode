/*
 * XREFs of ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74
 * Callers:
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 * Callees:
 *     ??$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAUD2D_POINT_2F@@@Z @ 0x180004824 (--$ComputeTransformedRectBounds@UD2D_RECT_F@@@DirectComposition@@YA-AV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Create@CGeneratedVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@34_NPEAPEAV12@@Z @ 0x180030D90 (-Create@CGeneratedVirtualSurfacePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AE.c)
 *     ?IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003170C (-IsAxisAligned@DirectComposition@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C (-InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA?AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800322A0 (-ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA-AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRI.c)
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     ?FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ @ 0x18003B75C (-FreeRealization@CVirtualSurfacePrimitive@DirectComposition@@AEAAXXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C0FC (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimitive@2@@Z @ 0x180089598 (-AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimit.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800F9A00 (-AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfacePrimitive::RealizeAndRebuild(
        DirectComposition::CVirtualSurfacePrimitive *this,
        struct DirectComposition::CPrimitiveGroup *a2,
        struct DirectComposition::BatchedOccluder *a3,
        struct DirectComposition::BatchedOccluder *a4)
{
  __int64 v4; // rsi
  __int64 v6; // xmm1_8
  int v7; // ebx
  const struct D2D_MATRIX_3X2_F *v8; // rdx
  DirectComposition *v9; // r11
  float v10; // xmm13_4
  float v11; // xmm12_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  FLOAT v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  unsigned int v24; // r13d
  float v25; // xmm5_4
  const struct D2D_MATRIX_3X2_F *v26; // r8
  const struct D2D_MATRIX_3X2_F *v27; // r9
  DirectComposition::CPrimitiveGroup *v28; // r10
  const struct D2D_RECT_F *v29; // r11
  __int64 v30; // rcx
  _QWORD *v31; // r14
  __int64 v32; // rcx
  _DWORD *v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  unsigned __int64 v37; // r8
  FastRegion::Internal::CRgnData *v38; // rcx
  __m128i v39; // xmm8
  __m128i v40; // xmm10
  struct D2D_RECT_F *v41; // r15
  float *v42; // r12
  int v43; // esi
  __int64 v44; // rcx
  float v45; // xmm8_4
  __m128i v46; // xmm7
  __m128i v47; // xmm9
  float v48; // xmm7_4
  float v49; // xmm9_4
  float v50; // xmm10_4
  const struct D2D_MATRIX_3X2_F *v51; // rdx
  FastRegion::Internal::CRgnData *v52; // rcx
  __m128i v53; // xmm6
  float v54; // xmm5_4
  float top; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  int v58; // eax
  const struct D2D_MATRIX_3X2_F *v59; // r9
  struct D2D_MATRIX_3X2_F *v60; // rdx
  bool v61; // zf
  char v62; // dl
  struct DirectComposition::CPrimitive *v63; // rsi
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  int v68; // eax
  float *v69; // rax
  char v70; // [rsp+68h] [rbp-A0h]
  __int64 v71; // [rsp+6Ch] [rbp-9Ch] BYREF
  __m128 v72; // [rsp+78h] [rbp-90h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h]
  D2D_RECT_F v74; // [rsp+90h] [rbp-78h]
  float v75; // [rsp+A0h] [rbp-68h]
  float v76; // [rsp+A4h] [rbp-64h]
  float v77; // [rsp+A8h] [rbp-60h]
  float v78; // [rsp+ACh] [rbp-5Ch]
  float v79; // [rsp+B0h] [rbp-58h]
  float v80; // [rsp+B4h] [rbp-54h]
  float v81; // [rsp+B8h] [rbp-50h]
  float v82; // [rsp+BCh] [rbp-4Ch]
  float *v83; // [rsp+C0h] [rbp-48h]
  struct DirectComposition::CPrimitive *v84; // [rsp+C8h] [rbp-40h] BYREF
  struct DirectComposition::BatchedOccluder *v85; // [rsp+D0h] [rbp-38h]
  DirectComposition::CPrimitiveGroup *v86; // [rsp+D8h] [rbp-30h]
  _DWORD *v87; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v88; // [rsp+E8h] [rbp-20h]
  FastRegion::Internal::CRgnData *v89; // [rsp+F8h] [rbp-10h]
  int v90; // [rsp+100h] [rbp-8h]
  int v91; // [rsp+104h] [rbp-4h]
  struct DirectComposition::BatchedOccluder *v92; // [rsp+110h] [rbp+8h]
  __int64 v93; // [rsp+118h] [rbp+10h]
  _BYTE v94[16]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v95[16]; // [rsp+130h] [rbp+28h] BYREF
  D2D_RECT_F v96; // [rsp+140h] [rbp+38h] BYREF
  struct D2D_RECT_F v97; // [rsp+150h] [rbp+48h] BYREF
  __int64 v98; // [rsp+160h] [rbp+58h]
  float v99[6]; // [rsp+168h] [rbp+60h] BYREF
  float v100[6]; // [rsp+180h] [rbp+78h] BYREF
  float v101[6]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v102; // [rsp+1B0h] [rbp+A8h] BYREF
  float v103; // [rsp+1C0h] [rbp+B8h]
  float v104; // [rsp+1C4h] [rbp+BCh]
  __int128 v105; // [rsp+1C8h] [rbp+C0h] BYREF
  int v106; // [rsp+1D8h] [rbp+D0h]
  int v107; // [rsp+1DCh] [rbp+D4h]
  float v108[4]; // [rsp+1E0h] [rbp+D8h] BYREF

  v4 = *((_QWORD *)this + 32);
  v6 = *((_QWORD *)this + 31);
  v72 = *(__m128 *)((char *)this + 232);
  v92 = a4;
  v85 = a3;
  v7 = 0;
  v86 = a2;
  v73 = v6;
  if ( DirectComposition::InvertMatrix(&v72, (struct D2D_MATRIX_3X2_F *)a2) )
  {
    v10 = *((float *)&v73 + 1);
    v11 = *(float *)&v73;
  }
  else
  {
    v11 = 0.0;
    v72 = (__m128)_xmm;
    v10 = 0.0;
  }
  v12 = *((float *)this + 20);
  v13 = *((float *)this + 19);
  v14 = *((float *)this + 21);
  v15 = *((float *)this + 18);
  v106 = 0;
  v107 = 0;
  v70 = 0;
  v97.left = (float)(v15 * v72.m128_f32[0]) + (float)(v12 * v72.m128_f32[1]);
  v16 = (float)(v15 * v72.m128_f32[2]) + (float)(v12 * v72.m128_f32[3]);
  v97.top = (float)(v13 * v72.m128_f32[0]) + (float)(v14 * v72.m128_f32[1]);
  v17 = v14;
  v18 = (float)(v15 * v11) + (float)(v12 * v10);
  v19 = *((float *)this + 28);
  v97.right = v16;
  *(float *)&v98 = v18 + *((float *)this + 22);
  v105 = _xmm;
  v20 = (float)((float)(v14 * v10) + (float)(v13 * v11)) + *((float *)this + 23);
  v97.bottom = (float)(v17 * v72.m128_f32[3]) + (float)(v13 * v72.m128_f32[2]);
  v21 = *((float *)this + 30);
  *((float *)&v98 + 1) = v20;
  v22 = *((float *)this + 31);
  v77 = (float)(v19 * v72.m128_f32[0]) + (float)(v21 * v72.m128_f32[1]);
  v99[0] = v77;
  v23 = *((float *)this + 29);
  v79 = (float)(v23 * v72.m128_f32[0]) + (float)(v22 * v72.m128_f32[1]);
  v99[1] = v79;
  v78 = (float)(v19 * v72.m128_f32[2]) + (float)(v21 * v72.m128_f32[3]);
  v99[2] = v78;
  v80 = (float)(v22 * v72.m128_f32[3]) + (float)(v23 * v72.m128_f32[2]);
  v99[3] = v80;
  v24 = -1;
  LODWORD(v71) = -1;
  v25 = (float)((float)(v22 * v10) + (float)(v23 * v11)) + *((float *)this + 33);
  v81 = (float)((float)(v19 * v11) + (float)(v21 * v10)) + *((float *)this + 32);
  v99[4] = v81;
  v82 = v25;
  v99[5] = v25;
  if ( !DirectComposition::IsAxisAligned(v9, v8) )
  {
    v68 = DirectComposition::CPrimitiveGroup::AddClippingPrimitive(
            v28,
            (const struct D2D_RECT_F *)((char *)this + 136),
            v26,
            (unsigned int *)&v71);
    v24 = v71;
    v29 = (const struct D2D_RECT_F *)((char *)this + 232);
    v7 = v68;
  }
  v30 = *(_QWORD *)(v4 + 256);
  v93 = v4 + 256;
  v31 = (_QWORD *)(v30 - 16);
  if ( v30 == v4 + 256 )
    v31 = 0LL;
  if ( v7 < 0 )
  {
LABEL_73:
    DirectComposition::CVirtualSurfacePrimitive::FreeRealization(this);
    return (unsigned int)v7;
  }
  v71 = v73;
  while ( v31 )
  {
    v32 = v31[7];
    v33 = (_DWORD *)v31[12];
    v102 = _xmm;
    v84 = 0LL;
    v87 = v33;
    v34 = *v33;
    LODWORD(v75) = COERCE_UNSIGNED_INT((float)(int)v32) ^ _xmm;
    v103 = v75;
    LODWORD(v76) = COERCE_UNSIGNED_INT((float)SHIDWORD(v32)) ^ _xmm;
    v104 = v76;
    if ( v34 )
    {
      v90 = 0;
      v35 = (int)v33[4];
      v36 = &v33[2 * v34 + 1];
      v37 = (unsigned __int64)(v33 + 3);
      v38 = (FastRegion::Internal::CRgnData *)(v37 + v35);
      *(_QWORD *)&v88 = v36;
      *((_QWORD *)&v88 + 1) = v37;
      v89 = v38;
      v91 = (__int64)(v37 + 8 + *(int *)(v37 + 12) - (_QWORD)v38) >> 3;
      if ( v91 > 0 )
        goto LABEL_12;
      FastRegion::Internal::CRgnData::StepIterator(v38, (struct FastRegion::CRegion::Iterator *)&v87);
    }
    else
    {
      v88 = 0LL;
    }
    while ( 2 )
    {
      v37 = *((_QWORD *)&v88 + 1);
LABEL_12:
      if ( v37 >= (unsigned __int64)v88 )
        break;
      v39 = _mm_cvtsi32_si128(*(_DWORD *)v37);
      v40 = _mm_cvtsi32_si128(*(_DWORD *)(v37 + 8));
      v41 = &v97;
      v83 = v99;
      v42 = (float *)&v102;
      v43 = 0;
      v44 = 2 * v90;
      LODWORD(v45) = _mm_cvtepi32_ps(v39).m128_u32[0];
      v46 = _mm_cvtsi32_si128(*((_DWORD *)v89 + v44));
      v47 = _mm_cvtsi32_si128(*((_DWORD *)v89 + v44 + 1));
      v96.top = v45;
      LODWORD(v48) = _mm_cvtepi32_ps(v46).m128_u32[0];
      LODWORD(v49) = _mm_cvtepi32_ps(v47).m128_u32[0];
      v96.left = v48;
      v96.right = v49;
      LODWORD(v50) = _mm_cvtepi32_ps(v40).m128_u32[0];
      v96.bottom = v50;
      if ( v24 == -1 )
      {
        v53 = _mm_loadu_si128((const __m128i *)DirectComposition::ComputeTransformedRectBoundsAxisAligned(
                                                 (DirectComposition *)v94,
                                                 (struct D2D_RECT_F *)((char *)this + 136),
                                                 v29,
                                                 v27));
        v74 = (D2D_RECT_F)v53;
        if ( *(float *)v53.m128i_i32 > v48 )
          v54 = *(float *)v53.m128i_i32;
        else
          v54 = fminf(*(float *)&v53.m128i_i32[2], v48);
        v96.left = v54;
        if ( v74.top > v45 )
          top = v74.top;
        else
          top = fminf(v74.bottom, v45);
        v96.top = top;
        if ( *(float *)v53.m128i_i32 > v49 )
          v56 = *(float *)v53.m128i_i32;
        else
          v56 = fminf(*(float *)&v53.m128i_i32[2], v49);
        v96.right = v56;
        if ( v74.top > v50 )
          v57 = v74.top;
        else
          v57 = fminf(v74.bottom, v50);
        v96.bottom = v57;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v57 - top)) & _xmm) <= 9.999999717180685e-10
          || COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v56 - v54)) & _xmm) <= 9.999999717180685e-10 )
        {
          goto LABEL_47;
        }
        v58 = *((_DWORD *)this + 45);
        if ( (v58 & 0x3000000) != 0
          && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v54 - *(float *)v53.m128i_i32)) & _xmm) <= 9.999999717180685e-10 )
        {
          v43 = 50331648;
        }
        if ( (v58 & 3) != 0
          && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(top - v74.top)) & _xmm) <= 9.999999717180685e-10 )
        {
          v43 |= 3u;
        }
        if ( (v58 & 0x300) != 0
          && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v56 - *(float *)&v53.m128i_i32[2])) & _xmm) <= 9.999999717180685e-10 )
        {
          v43 |= 0x300u;
        }
        if ( (v58 & 0x30000) != 0
          && COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v57 - v74.bottom)) & _xmm) <= 9.999999717180685e-10 )
        {
          v43 |= 0x30000u;
        }
        if ( DirectComposition::IsAxisAligned((DirectComposition *)&v97, v51) )
        {
          v74 = *DirectComposition::ComputeTransformedRectBoundsAxisAligned((DirectComposition *)v95, &v96, &v97, v59);
          if ( !v70 )
          {
            v72 = (__m128)v97;
            v73 = v98;
            if ( DirectComposition::InvertMatrix(&v72, v60) )
            {
              v71 = v73;
            }
            else
            {
              v72 = (__m128)_xmm;
              v71 = 0LL;
            }
            v70 = 1;
          }
          v61 = *((_QWORD *)this + 13) == 0LL;
          v101[0] = (float)(v72.m128_f32[1] * 0.0) + v72.m128_f32[0];
          v101[1] = (float)(v72.m128_f32[0] * 0.0) + v72.m128_f32[1];
          v101[2] = (float)(v72.m128_f32[3] * 0.0) + v72.m128_f32[2];
          v101[3] = (float)(v72.m128_f32[2] * 0.0) + v72.m128_f32[3];
          v101[4] = (float)((float)(*((float *)&v71 + 1) * 0.0) + *(float *)&v71) + v75;
          v101[5] = (float)((float)(*(float *)&v71 * 0.0) + *((float *)&v71 + 1)) + v76;
          if ( !v61 )
          {
            v83 = v100;
            v100[0] = (float)(v72.m128_f32[0] * v77) + (float)(v72.m128_f32[1] * v78);
            v100[1] = (float)(v79 * v72.m128_f32[0]) + (float)(v72.m128_f32[1] * v80);
            v100[2] = (float)(v72.m128_f32[2] * v77) + (float)(v72.m128_f32[3] * v78);
            v100[3] = (float)(v72.m128_f32[3] * v80) + (float)(v72.m128_f32[2] * v79);
            v100[4] = (float)((float)(*(float *)&v71 * v77) + (float)(*((float *)&v71 + 1) * v78)) + v81;
            v100[5] = (float)((float)(*((float *)&v71 + 1) * v80) + (float)(*(float *)&v71 * v79)) + v82;
          }
          v41 = (struct D2D_RECT_F *)&v105;
          v42 = v101;
          v96 = v74;
        }
        v62 = 1;
      }
      else
      {
        v69 = DirectComposition::ComputeTransformedRectBounds<D2D_RECT_F>(v108, (__int64)&v96, &v97.left, 0LL);
        if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                 (char *)this + 184,
                                 v69) )
          goto LABEL_47;
        v62 = 0;
      }
      v7 = DirectComposition::CGeneratedVirtualSurfacePrimitive::Create(
             *((_QWORD *)this + 5),
             (__int64)&v96,
             (__int64)v41,
             *((float *)this + 24),
             *((_QWORD *)this + 13),
             (__int64)v83,
             v43,
             v31[9],
             (__int64)v42,
             v62,
             &v84);
      if ( v7 >= 0 )
      {
        v63 = v84;
        v64 = DirectComposition::CPrimitiveGroup::AddPrimitiveInternal(v86, v84, v24, v85, v92);
        v85 = 0LL;
        v7 = v64;
        if ( v64 < 0 )
        {
          if ( v63 )
            (*(void (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v63 + 16LL))(v63);
        }
        else
        {
          *((_QWORD *)v63 + 7) = *((_QWORD *)this + 33);
          v65 = *((_QWORD *)this + 33);
          if ( v65 )
            *(_QWORD *)(v65 + 48) = v63;
          *((_QWORD *)this + 33) = v63;
        }
      }
LABEL_47:
      FastRegion::Internal::CRgnData::StepIterator(v52, (struct FastRegion::CRegion::Iterator *)&v87);
      if ( v7 >= 0 )
      {
        v29 = (const struct D2D_RECT_F *)((char *)this + 232);
        continue;
      }
      break;
    }
    v66 = v31[2];
    v29 = (const struct D2D_RECT_F *)((char *)this + 232);
    v31 = (_QWORD *)(v66 - 16);
    if ( v66 == v93 )
      v31 = 0LL;
    if ( v7 < 0 )
      goto LABEL_73;
  }
  if ( v24 == -1 )
    DirectComposition::CPrimitiveGroup::AddAdditionalHitTestPrimitive(v86, this);
  return (unsigned int)v7;
}
