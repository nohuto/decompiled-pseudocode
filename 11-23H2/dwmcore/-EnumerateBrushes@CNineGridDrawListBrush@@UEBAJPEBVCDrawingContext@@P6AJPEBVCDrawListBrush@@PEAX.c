/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180070420
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180039448 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005503C (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18007D9F8 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008F058 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098418 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x1800A8C98 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800CAA34 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$?0$0?0V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@M$0?0@gsl@@QEAA@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E9448 (--$-0$0-0V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x180103A2C (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180103AB0 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$?0M$0?0$0?0$0A@@?$span@$$CBM$0?0@gsl@@QEAA@AEBV?$span@M$0?0@1@@Z @ 0x180103C14 (--$-0M$0-0$0-0$0A@@-$span@$$CBM$0-0@gsl@@QEAA@AEBV-$span@M$0-0@1@@Z.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801040C4 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18025293C (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  int v4; // r14d
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64); // r9
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // rsi
  CSurfaceDrawListBrush *v13; // rcx
  CSurfaceDrawListBrush *v14; // rax
  CSurfaceDrawListBrush *v15; // rax
  CMILMatrix *v16; // rax
  struct D2D_RECT_F v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  _BYTE *v21; // rdx
  unsigned int v22; // r8d
  _BYTE *v23; // r11
  _BYTE *v24; // rcx
  struct D2D_MATRIX_3X2_F *v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r14
  float v28; // xmm0_4
  __int64 v29; // r15
  unsigned int v30; // r13d
  __int64 v31; // r10
  float v32; // xmm2_4
  __int64 v33; // r8
  unsigned int v34; // xmm0_4
  FLOAT v35; // xmm1_4
  FLOAT v36; // xmm0_4
  char v37; // r15
  float *v38; // r10
  __int64 v39; // r10
  __int64 v40; // rax
  CSurfaceDrawListBrush *v41; // rcx
  struct D2D_RECT_F v42; // xmm0
  CSurfaceDrawListBrush *v43; // rax
  int v44; // r11d
  int v45; // eax
  unsigned int v46; // ecx
  void *v47; // rcx
  bool v48; // zf
  void *v49; // rcx
  void *v50; // rcx
  struct D2D_MATRIX_3X2_F *v51; // rcx
  CSurfaceDrawListBrush *v52; // rcx
  __int64 v54; // r10
  struct D2D_RECT_F v55; // xmm0
  int v56; // r11d
  struct D2D_MATRIX_3X2_F *v57; // r9
  __int64 v58; // rax
  __int64 v59; // xmm1_8
  int v60; // eax
  unsigned int v61; // ecx
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  int v66; // eax
  unsigned int v67; // ecx
  float v68; // xmm1_4
  float v69; // xmm1_4
  __m128 left_low; // xmm2
  __int64 v71; // rax
  __m128 top_low; // xmm1
  float v73; // xmm0_4
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  struct D2D_MATRIX_3X2_F *v77; // rcx
  char v78; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v79; // [rsp+50h] [rbp-B8h] BYREF
  int v80; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v81; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v82; // [rsp+78h] [rbp-90h] BYREF
  __int64 v83; // [rsp+88h] [rbp-80h]
  unsigned int v84; // [rsp+90h] [rbp-78h]
  float v85; // [rsp+94h] [rbp-74h] BYREF
  float v86[4]; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v87; // [rsp+A8h] [rbp-60h] BYREF
  struct D2D_RECT_F v88; // [rsp+B8h] [rbp-50h] BYREF
  void *v89; // [rsp+C8h] [rbp-40h]
  int (*v90)(const struct CDrawListBrush *, void *); // [rsp+D0h] [rbp-38h]
  __int64 v91; // [rsp+D8h] [rbp-30h] BYREF
  __m256i v92; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v93; // [rsp+108h] [rbp+0h]
  __int128 v94; // [rsp+118h] [rbp+10h]
  int v95; // [rsp+128h] [rbp+20h]
  _BYTE v96[68]; // [rsp+12Ch] [rbp+24h] BYREF
  struct D2D_RECT_F v97; // [rsp+170h] [rbp+68h] BYREF
  _BYTE *v98; // [rsp+180h] [rbp+78h] BYREF
  _BYTE *v99; // [rsp+188h] [rbp+80h]
  struct D2D_MATRIX_3X2_F **v100; // [rsp+190h] [rbp+88h]
  _BYTE v101[24]; // [rsp+198h] [rbp+90h] BYREF
  struct D2D_MATRIX_3X2_F *v102; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE *v103; // [rsp+1B8h] [rbp+B0h]
  _QWORD *v104; // [rsp+1C0h] [rbp+B8h]
  _BYTE v105[24]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v106[3]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v107[24]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v108[3]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v109[24]; // [rsp+228h] [rbp+120h] BYREF
  char v110; // [rsp+240h] [rbp+138h] BYREF
  __m256i v111; // [rsp+248h] [rbp+140h] BYREF
  __int128 v112; // [rsp+268h] [rbp+160h]
  __int128 v113; // [rsp+278h] [rbp+170h]
  int v114; // [rsp+288h] [rbp+180h]

  v89 = a4;
  v90 = a3;
  v4 = (_DWORD)this + 112;
  v7 = 0;
  if ( CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
    v66 = v9(*((_QWORD *)this + 9), v10);
    v7 = v66;
    if ( v66 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x90u, 0LL);
    return v7;
  }
  v79 = 0LL;
  v78 = 0;
  v11 = 1LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 2LL) )
  {
    v12 = *((_QWORD *)this + 9);
    *(_QWORD *)&v82.left = &v79;
    *(_QWORD *)&v82.right = 0LL;
    LOBYTE(v83) = 1;
    LOWORD(v80) = *(_WORD *)(v12 + 80);
    BYTE2(v80) = *(_BYTE *)(v12 + 82);
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(v12 + 56, &v80, &Matrix3x3::Identity, &v82.right);
    if ( (_BYTE)v83 )
    {
      v13 = **(CSurfaceDrawListBrush ***)&v82.left;
      **(_QWORD **)&v82.left = *(_QWORD *)&v82.right;
      if ( v13 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1u);
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v7, 0xA2u, 0LL);
      goto LABEL_44;
    }
    if ( !*(_BYTE *)(v12 + 145) )
    {
      v14 = v79;
      *(_OWORD *)((char *)v79 + 120) = *(_OWORD *)(v12 + 120);
      *((_BYTE *)v14 + 145) = 0;
    }
    v15 = v79;
    *(_OWORD *)((char *)v79 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v15 + 3) = *((_QWORD *)this + 3);
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v79, (const struct D2D_VECTOR_2F *)this + 7);
    if ( *(_BYTE *)(v12 + 144) )
    {
      v78 = 1;
      v114 = 0;
      CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)&v111);
      v16 = CMILMatrix::CMILMatrix((CMILMatrix *)v96, (const struct D2D_MATRIX_3X2_F *)((char *)this + 8));
      v92 = *(__m256i *)v16;
      v93 = *((_OWORD *)v16 + 2);
      v94 = *((_OWORD *)v16 + 3);
      v95 = *((_DWORD *)v16 + 16);
      CMILMatrix::Multiply((CMILMatrix *)&v92, (const struct CMILMatrix *)&v111);
      v114 = v95;
      v111 = v92;
      v112 = v93;
      v17 = (struct D2D_RECT_F)*((_OWORD *)this + 2);
      v113 = v94;
      v97 = v17;
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v111, &v85, v86);
      *((_BYTE *)v79 + 147) = 1;
    }
  }
  v102 = (struct D2D_MATRIX_3X2_F *)v105;
  v103 = v105;
  v104 = v106;
  v98 = v101;
  v99 = v101;
  v100 = &v102;
  CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    v4,
    (unsigned int)&v102,
    (unsigned int)&v98,
    (_DWORD)this + 32,
    LODWORD(FLOAT_1_1920929eN7));
  v108[0] = v109;
  v108[1] = v109;
  v108[2] = &v110;
  v106[0] = v107;
  v106[1] = v107;
  v106[2] = v108;
  v18 = gsl::span<float,-1>::span<float,-1>(&v97, &v98);
  v88 = *(struct D2D_RECT_F *)gsl::span<float const,-1>::span<float const,-1>(&v81, v18);
  v19 = gsl::span<float,-1>::span<float,-1>(&v91, &v102);
  v87 = *(struct D2D_RECT_F *)gsl::span<float const,-1>::span<float const,-1>(&v82, v19);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    v4,
    v20,
    (unsigned int)&v87,
    (unsigned int)&v88,
    (__int64)v108,
    (__int64)v106,
    LODWORD(FLOAT_1_1920929eN7));
  v21 = v99;
  v22 = 1;
  v23 = v98;
  v80 = 1;
  if ( (unsigned __int64)((v99 - v98) >> 2) <= 1 )
  {
LABEL_35:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v106);
    v47 = (void *)v106[0];
    v48 = v106[0] == (_QWORD)v107;
    v106[0] = 0LL;
    if ( v48 )
      v47 = 0LL;
    operator delete(v47);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v108);
    v49 = (void *)v108[0];
    v48 = v108[0] == (_QWORD)v109;
    v108[0] = 0LL;
    if ( v48 )
      v49 = 0LL;
    operator delete(v49);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v98);
    v50 = v98;
    v48 = v98 == v101;
    v98 = 0LL;
    if ( v48 )
      v50 = 0LL;
    operator delete(v50);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v102);
    v51 = v102;
    v48 = v102 == (struct D2D_MATRIX_3X2_F *)v105;
    v102 = 0LL;
    if ( v48 )
      v51 = 0LL;
    operator delete(v51);
LABEL_44:
    v52 = v79;
    if ( v79 )
      goto LABEL_45;
    return v7;
  }
  v24 = v103;
  v25 = v102;
  v26 = v108[0];
  v27 = v106[0];
  while ( 1 )
  {
    v28 = *(float *)&v23[4 * v22 - 4] - *(float *)&v23[4 * v11];
    v29 = v22 - 1;
    v84 = v22 - 1;
    v91 = v29;
    if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > 0.0000011920929 )
    {
      v30 = 1;
      if ( (unsigned __int64)((v24 - (_BYTE *)v25) >> 2) > 1 )
        break;
    }
LABEL_34:
    v11 = ++v22;
    v80 = v22;
    if ( v22 >= (unsigned __int64)((v21 - v23) >> 2) )
      goto LABEL_35;
  }
  v31 = 1LL;
  while ( 1 )
  {
    v32 = *(&v25->m11 + v31);
    v33 = v30 - 1;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(&v25->m11 + v33) - v32) & _xmm) > 0.0000011920929 )
      break;
LABEL_32:
    v31 = ++v30;
    if ( v30 >= (unsigned __int64)((v24 - (_BYTE *)v25) >> 2) )
    {
      v22 = v80;
      goto LABEL_34;
    }
  }
  v34 = *(_DWORD *)&v23[4 * v29];
  v87.left = *(&v25->m11 + v33);
  v87.bottom = *(FLOAT *)&v23[4 * v11];
  v35 = *(float *)(v26 + 4 * v33);
  *(_QWORD *)&v87.top = __PAIR64__(LODWORD(v32), v34);
  v88.left = v35;
  v88.right = *(FLOAT *)(v26 + 4 * v31);
  v97 = v87;
  v36 = *(float *)(v27 + 4 * v29);
  v37 = *((_BYTE *)this + 569);
  v88.top = v36;
  v88.bottom = *(FLOAT *)(v27 + 4 * v11);
  v81 = v88;
  if ( v37
    && (float)(*((float *)this + 138) - v87.left) <= 0.0000011920929
    && (float)(*((float *)this + 139) - v87.top) <= 0.0000011920929
    && (float)(v32 - *((float *)this + 140)) <= 0.0000011920929
    && (float)(v87.bottom - *((float *)this + 141)) <= 0.0000011920929 )
  {
LABEL_31:
    v29 = v91;
    goto LABEL_32;
  }
  if ( !v79 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v81.left - v81.right) & _xmm) <= 0.0009765625 )
    {
      v68 = (float)(v81.right + v81.left) * 0.5;
      v81.left = v68 - 0.00048828125;
      v81.right = v68 + 0.00048828125;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v81.top - v81.bottom) & _xmm) <= 0.0009765625 )
    {
      v69 = (float)(v81.bottom + v81.top) * 0.5;
      v81.top = v69 - 0.00048828125;
      v81.bottom = v69 + 0.00048828125;
    }
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v81, &v97, (const struct D2D_RECT_F *)&v111, v25);
    v54 = *((_QWORD *)this + 9);
    v55 = v81;
    *(_BYTE *)(v54 + 52) = 1;
    *(struct D2D_RECT_F *)(v54 + 32) = v55;
    *(_DWORD *)(v54 + 48) = v56;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v82,
      (const struct D2D1::Matrix3x2F *)&v111,
      (CNineGridDrawListBrush *)((char *)this + 8));
    v58 = *((_QWORD *)this + 9);
    v59 = v83;
    *(struct D2D_RECT_F *)(v58 + 8) = v82;
    *(_QWORD *)(v58 + 24) = v59;
    if ( *((_BYTE *)this + 64) )
    {
      D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v97, &v81, &v82, v57);
      left_low = (__m128)LODWORD(v82.left);
      v71 = *((_QWORD *)this + 9);
      top_low = (__m128)LODWORD(v82.top);
      top_low.m128_f32[0] = v82.top * *((float *)this + 14);
      left_low.m128_f32[0] = (float)(v82.left * *((float *)this + 14)) + (float)(v82.right * *((float *)this + 15));
      v73 = v82.bottom * *((float *)this + 15);
      *(_BYTE *)(v71 + 64) = 1;
      left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v83;
      top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v73) + *((float *)&v83 + 1);
      *(_QWORD *)(v71 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
    }
    v60 = ((__int64 (__fastcall *)(_QWORD, void *))v90)(*((_QWORD *)this + 9), v89);
    v7 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x1BFu, 0LL);
      goto LABEL_75;
    }
    goto LABEL_30;
  }
  v38 = (float *)*((_QWORD *)this + 9);
  if ( v78 )
  {
    if ( (float)(v81.right - v81.left) > 0.5
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v32 - v87.left) / (float)(v81.right - v81.left)) * v85) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( v81.left <= v38[8] )
        v64 = 0.0;
      else
        v64 = FLOAT_0_5;
      v81.left = v81.left + v64;
      if ( v38[10] <= v81.right )
        v65 = 0.0;
      else
        v65 = FLOAT_0_5;
      v81.right = v81.right - v65;
    }
    if ( (float)(v81.bottom - v81.top) > 0.5
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v87.bottom - v87.top) / (float)(v81.bottom - v81.top))
                                                * v86[0]) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( v81.top <= v38[9] )
        v62 = 0.0;
      else
        v62 = FLOAT_0_5;
      v81.top = v81.top + v62;
      if ( v38[11] <= v81.bottom )
        v63 = 0.0;
      else
        v63 = FLOAT_0_5;
      v81.bottom = v81.bottom - v63;
    }
  }
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v97, &v81, &v82, v25);
  v111.m256i_i32[5] = 0;
  v111.m256i_i32[0] = LODWORD(v82.left);
  *(__int64 *)((char *)v111.m256i_i64 + 4) = LODWORD(v82.top);
  *(__int64 *)((char *)&v111.m256i_i64[1] + 4) = *(_QWORD *)&v82.right;
  v111.m256i_i64[3] = v83;
  LODWORD(v112) = 1065353216;
  v40 = Matrix3x3::operator*(&v111, &v92, v39 + 84);
  v41 = v79;
  *(_OWORD *)((char *)v79 + 84) = *(_OWORD *)v40;
  v42 = v97;
  *(_OWORD *)((char *)v41 + 100) = *(_OWORD *)(v40 + 16);
  *((_DWORD *)v41 + 29) = *(_DWORD *)(v40 + 32);
  v43 = v79;
  *((_BYTE *)v79 + 52) = 1;
  *((struct D2D_RECT_F *)v43 + 2) = v42;
  *((_DWORD *)v43 + 12) = v44;
  v45 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v90)(v79, v89);
  v7 = v45;
  if ( v45 >= 0 )
  {
LABEL_30:
    v24 = v103;
    v25 = v102;
    v21 = v99;
    v23 = v98;
    v26 = v108[0];
    v27 = v106[0];
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x18Eu, 0LL);
LABEL_75:
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v106);
  v74 = (void *)v106[0];
  v48 = v106[0] == (_QWORD)v107;
  v106[0] = 0LL;
  if ( v48 )
    v74 = 0LL;
  operator delete(v74);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v108);
  v75 = (void *)v108[0];
  v48 = v108[0] == (_QWORD)v109;
  v108[0] = 0LL;
  if ( v48 )
    v75 = 0LL;
  operator delete(v75);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v98);
  v76 = v98;
  v48 = v98 == v101;
  v98 = 0LL;
  if ( v48 )
    v76 = 0LL;
  operator delete(v76);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v102);
  v77 = v102;
  v48 = v102 == (struct D2D_MATRIX_3X2_F *)v105;
  v102 = 0LL;
  if ( v48 )
    v77 = 0LL;
  operator delete(v77);
  v52 = v79;
  if ( v79 )
LABEL_45:
    CSurfaceDrawListBrush::`vector deleting destructor'(v52, 1u);
  return v7;
}
