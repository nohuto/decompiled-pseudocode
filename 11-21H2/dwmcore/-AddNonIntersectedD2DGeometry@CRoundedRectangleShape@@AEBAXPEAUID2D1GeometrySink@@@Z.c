/*
 * XREFs of ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800B6188
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800B8000 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$_Insert_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@1Uforward_iterator_tag@1@@Z @ 0x1800B600C (--$_Insert_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@.c)
 *     ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x1800B67D4 (-TryDoubleTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ.c)
 *     ?Step@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800B684C (-Step@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@QEAAPEAVCMilPoint2F@@QEAV2@AEBV2@@Z @ 0x1800B68DC (--$_Emplace_reallocate@AEBVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x1800B70E0 (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800B723C (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?IsClosePointF@@YA_NAEBUMilPoint2F@@0@Z @ 0x1800B72E8 (-IsClosePointF@@YA_NAEBUMilPoint2F@@0@Z.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800B7D2C (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ??0CMilPoint2F@@QEAA@XZ @ 0x1800F94A0 (--0CMilPoint2F@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRoundedRectangleShape::AddNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1GeometrySink *a2)
{
  __int64 v2; // r15
  struct ID2D1GeometrySink *v3; // rdi
  CRoundedRectangleShape *v4; // r13
  void **v5; // r12
  unsigned int *v6; // rcx
  CMilPoint2F *v7; // rsi
  __int64 v8; // rbx
  int *v9; // rbx
  int *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // r9
  int v16; // edx
  float *v17; // rdx
  __int64 v18; // rax
  float *v19; // r8
  _QWORD *v20; // rdx
  _DWORD *v21; // r13
  bool v22; // al
  __int64 v23; // r8
  float v24; // xmm6_4
  CMilPoint2F *v25; // rbx
  __int64 v26; // r15
  CMilPoint2F *v27; // rbx
  __int64 v28; // r15
  CMilPoint2F *v29; // rbx
  __int64 v30; // r15
  int v31; // r15d
  int v32; // xmm1_4
  char v33; // r13
  unsigned int v34; // r11d
  __int64 v35; // r10
  _DWORD *v36; // rbx
  float v37; // xmm1_4
  int v38; // xmm4_4
  __int64 v39; // r10
  float v40; // xmm1_4
  int v41; // xmm1_4
  unsigned int v42; // ebx
  int *v43; // rsi
  int *v44; // r9
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // r12
  __int64 v48; // r13
  __m128 v49; // xmm1
  __int64 v50; // r9
  __int64 v51; // rax
  unsigned __int64 v52; // xmm1_8
  __int64 v53; // rax
  unsigned int v54; // xmm0_4
  unsigned int v55; // xmm1_4
  __int64 v56; // rax
  bool v57; // [rsp+38h] [rbp-D0h]
  __int64 v58; // [rsp+40h] [rbp-C8h]
  int *v59; // [rsp+48h] [rbp-C0h]
  char *v60; // [rsp+48h] [rbp-C0h]
  int *v61; // [rsp+50h] [rbp-B8h]
  const struct MilPoint2F *v63; // [rsp+60h] [rbp-A8h]
  _QWORD *v64; // [rsp+68h] [rbp-A0h]
  _QWORD *v65; // [rsp+70h] [rbp-98h]
  unsigned int v66; // [rsp+78h] [rbp-90h]
  __int128 v68; // [rsp+88h] [rbp-80h]
  __int128 v69; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v70; // [rsp+B0h] [rbp-58h]
  _DWORD v71[8]; // [rsp+B8h] [rbp-50h] BYREF
  float v72; // [rsp+D8h] [rbp-30h]
  float v73; // [rsp+E0h] [rbp-28h]
  float v74; // [rsp+E4h] [rbp-24h]
  _DWORD v75[28]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v76[20]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v77[20]; // [rsp+1A8h] [rbp+A0h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = a2;
  v4 = this;
  v58 = v2;
  if ( *(float *)(v2 + 64) <= 0.0 )
  {
    `vector constructor iterator'((char *)v71, 8LL, 20LL, (void (__fastcall *)(char *))CMilPoint2F::CMilPoint2F);
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v71);
    v42 = 0;
    v60 = (char *)dword_180365160;
    v43 = (int *)&unk_18032CA78;
    do
    {
      if ( CRoundedRectangleGeometryData::IsRoundedCorner(*((_QWORD *)v4 + 2) + 16LL, v42) )
      {
        v45 = *(v43 - 2);
        v46 = *(v43 - 1);
        v47 = *v43;
        v48 = v43[1];
        v49 = (__m128)(unsigned int)v71[2 * v45 + 1];
        v50 = *(_QWORD *)v3;
        if ( v42 )
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v50 + 80))(
            v3,
            _mm_unpacklo_ps((__m128)(unsigned int)v71[2 * v45], v49).m128_u64[0]);
        else
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v50 + 40))(
            v3,
            _mm_unpacklo_ps((__m128)(unsigned int)v71[2 * v45], v49).m128_u64[0],
            0LL);
        v51 = *(_QWORD *)v3;
        DWORD1(v68) = v71[2 * v46 + 1];
        HIDWORD(v68) = v71[2 * v47 + 1];
        LODWORD(v68) = v71[2 * v46];
        DWORD2(v68) = v71[2 * v47];
        v52 = _mm_unpacklo_ps((__m128)(unsigned int)v71[2 * v48], (__m128)(unsigned int)v71[2 * v48 + 1]).m128_u64[0];
        v69 = v68;
        v70 = v52;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v51 + 88))(v3, &v69);
        v4 = this;
      }
      else
      {
        v53 = *v44;
        v54 = v71[2 * v53];
        v55 = v71[2 * v53 + 1];
        v56 = *(_QWORD *)v3;
        if ( v42 )
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v56 + 80))(v3, __PAIR64__(v55, v54));
        else
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v56 + 40))(
            v3,
            __PAIR64__(v55, v54),
            0LL);
      }
      ++v42;
      v43 += 4;
      v60 += 4;
    }
    while ( v42 < 4 );
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
  }
  else
  {
    v5 = (void **)(v2 + 80);
    v6 = *(unsigned int **)(v2 + 80);
    if ( v6 == *(unsigned int **)(v2 + 88) )
    {
      v7 = (CMilPoint2F *)v77;
      v8 = 20LL;
      do
      {
        CMilPoint2F::CMilPoint2F(v7);
        v7 = (CMilPoint2F *)((char *)v7 + 8);
        --v8;
      }
      while ( v8 );
      CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v77);
      v9 = dword_180365160;
      v10 = (int *)&unk_18032CA78;
      v61 = dword_180365160;
      v11 = 0;
      v59 = (int *)&unk_18032CA78;
      do
      {
        v12 = *((_QWORD *)v4 + 2);
        v66 = v11 + 1;
        v13 = 16LL;
        v14 = (v11 + 1) & 3;
        v15 = *(_BYTE *)(v12 + 68);
        if ( !v15 )
          v13 = 8 * v14 + 16;
        if ( *(float *)(v12 + v13 + 16) <= 0.0 || *(float *)(v12 + v13 + 20) <= 0.0 )
          v16 = dword_180365160[v14];
        else
          v16 = *((_DWORD *)&unk_18032CA70 + 4 * v14);
        v17 = (float *)&v77[v16];
        if ( v15 )
          v18 = 16LL;
        else
          v18 = 8LL * v11 + 16;
        if ( *(float *)(v12 + v18 + 16) <= 0.0 || *(float *)(v12 + v18 + 20) <= 0.0 )
        {
          v19 = (float *)&v77[*v9];
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v19 - *v17) & _xmm) > 0.0000011920929
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v19[1] - v17[1]) & _xmm) > 0.0000011920929 )
          {
            v20 = *(_QWORD **)(v2 + 88);
            if ( v20 == *(_QWORD **)(v2 + 96) )
            {
              std::vector<CMilPoint2F>::_Emplace_reallocate<CMilPoint2F const &>(v5);
            }
            else
            {
              *v20 = *(_QWORD *)v19;
              v5[1] = (char *)v5[1] + 8;
            }
          }
        }
        else
        {
          v21 = &v77[*(v10 - 2)];
          v65 = &v77[*(v10 - 1)];
          v64 = &v77[*v10];
          v63 = (const struct MilPoint2F *)&v77[v10[1]];
          v22 = IsClosePointF(v63, (const struct MilPoint2F *)v17);
          v24 = *(float *)(v23 + 64);
          v25 = (CMilPoint2F *)v71;
          v57 = v22;
          v26 = 4LL;
          do
          {
            CMilPoint2F::CMilPoint2F(v25);
            v25 = (CMilPoint2F *)((char *)v25 + 8);
            --v26;
          }
          while ( v26 );
          v27 = (CMilPoint2F *)v75;
          v28 = 4LL;
          do
          {
            CMilPoint2F::CMilPoint2F(v27);
            v27 = (CMilPoint2F *)((char *)v27 + 8);
            --v28;
          }
          while ( v28 );
          v74 = (float)(v24 * v24) * 0.000099999997;
          v72 = fmaxf(v24, 0.0) * 6.0;
          v73 = v72 * 0.25;
          CBezierFlattener<float,CMilPoint2F>::SetPoints(
            (unsigned int)v71,
            (_DWORD)v21,
            (_DWORD)v65,
            (_DWORD)v64,
            (__int64)v63);
          v29 = (CMilPoint2F *)v76;
          v30 = 10LL;
          do
          {
            CMilPoint2F::CMilPoint2F(v29);
            v29 = (CMilPoint2F *)((char *)v29 + 8);
            --v30;
          }
          while ( v30 );
          v31 = 1;
          v32 = v21[1];
          v76[0] = *v21;
          v76[1] = v32;
          do
          {
            v33 = 1;
            v34 = 10 - v31;
            v35 = 0LL;
            v36 = &v76[2 * v31];
            while ( v75[8] > 1 )
            {
              if ( (unsigned int)v35 >= v34 )
                goto LABEL_40;
              CBezierFlattener<float,CMilPoint2F>::Step(v71);
              LODWORD(v37) = v75[4] & _xmm;
              v38 = v75[0];
              v36[2 * v39 + 1] = v75[1];
              v40 = fmaxf(v37, COERCE_FLOAT(v75[5] & _xmm));
              v36[2 * v39] = v38;
              if ( v40 <= v72 || *(float *)&v75[10] <= 0.001 )
              {
                while ( (unsigned __int8)CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(v71) )
                  ;
              }
              else
              {
                CBezierFlattener<float,CMilPoint2F>::HalveTheStep(v71);
              }
            }
            if ( (unsigned int)v35 < v34 )
            {
              if ( !v57 )
              {
                v41 = v71[7];
                v36[2 * v35] = v71[6];
                v36[2 * v35 + 1] = v41;
                LODWORD(v35) = v35 + 1;
              }
              v33 = 0;
            }
LABEL_40:
            std::vector<CMilPoint2F>::_Insert_range<CMilPoint2F *>(
              v5,
              *(__int64 **)(v58 + 88),
              (char *)v76,
              (char *)&v76[2 * (unsigned int)(v35 + v31)]);
            v31 = 0;
          }
          while ( v33 );
          v10 = v59;
          v2 = v58;
          v4 = this;
          v9 = v61;
        }
        v11 = v66;
        ++v9;
        v10 += 4;
        v61 = v9;
        v59 = v10;
      }
      while ( v66 < 4 );
      v6 = (unsigned int *)*v5;
      v3 = a2;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      _mm_unpacklo_ps((__m128)*v6, (__m128)v6[1]).m128_u64[0],
      0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned int *, _QWORD))(*(_QWORD *)v3 + 48LL))(
      v3,
      (unsigned int *)*v5 + 2,
      (unsigned int)(((_BYTE *)v5[1] - (_BYTE *)*v5) >> 3) - 1);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
  }
}
