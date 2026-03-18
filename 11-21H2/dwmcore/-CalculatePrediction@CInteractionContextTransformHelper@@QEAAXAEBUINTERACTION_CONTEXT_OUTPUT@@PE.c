/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1802AD94C
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180274574 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _anonymous_namespace_::operator_ @ 0x1802AD8E4 (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x1802AE2EC (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const struct MANIPULATION_TRANSFORM *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  const struct MANIPULATION_TRANSFORM *v10; // rcx
  __m128 v12; // xmm0
  __m128 v13; // xmm12
  int v14; // r14d
  float *v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int128 *v18; // r10
  float v19; // xmm5_4
  __m128 v20; // xmm3
  int v21; // r11d
  float v22; // xmm14_4
  __int64 v23; // xmm1_8
  float v24; // xmm4_4
  float v25; // xmm14_4
  float v26; // xmm10_4
  float v27; // xmm15_4
  float v28; // xmm11_4
  __m128i v29; // xmm6
  int v30; // eax
  float v31; // xmm3_4
  __int128 v32; // xmm0
  float v33; // xmm7_4
  float v34; // xmm6_4
  __int64 v35; // r10
  char v36; // r11
  float v37; // xmm4_4
  __int128 v38; // xmm0
  __int64 v39; // r10
  __int128 v40; // xmm0
  __int64 v41; // r10
  __int128 v42; // xmm0
  float v43; // xmm5_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  __int64 v46; // xmm1_8
  __int128 v47; // xmm0
  float v48; // xmm1_4
  float v49; // [rsp+38h] [rbp-C1h] BYREF
  float v50; // [rsp+3Ch] [rbp-BDh] BYREF
  float v51; // [rsp+40h] [rbp-B9h] BYREF
  float v52; // [rsp+44h] [rbp-B5h] BYREF
  float v53; // [rsp+48h] [rbp-B1h] BYREF
  float v54; // [rsp+4Ch] [rbp-ADh] BYREF
  __m128 v55; // [rsp+50h] [rbp-A9h] BYREF
  _QWORD v56[3]; // [rsp+60h] [rbp-99h] BYREF
  __int64 v57; // [rsp+78h] [rbp-81h]

  v10 = (CInteractionContextTransformHelper *)((char *)this + 176);
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v55.m128_u64[0] = 0LL;
    LODWORD(v56[0]) = 0;
    v55.m128_u64[1] = 1065353216LL;
    v12 = v55;
    *((_BYTE *)this + 196) = 0;
    *(__m128 *)v10 = v12;
    *((_DWORD *)v10 + 4) = 0;
    *((_BYTE *)this + 197) = a5 == 1;
  }
  else
  {
    *((_BYTE *)this + 197) &= a5 == 1;
  }
  if ( a3 )
    v10 = a3;
  v13 = *(__m128 *)v10;
  v14 = *((_DWORD *)v10 + 4);
  LODWORD(v56[0]) = v14;
  v55 = v13;
  v15 = anonymous_namespace_::operator_((float *)&v56[1], v55.m128_f32, (float *)this + 44);
  v20 = *(__m128 *)v15;
  *(float *)&v57 = v15[4];
  *a8 = v20.m128_f32[0] + a6;
  *a9 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0] + a7;
  if ( *(_DWORD *)a2 == v21 && *((_DWORD *)a2 + 2) == 2 && v17 )
  {
    v22 = *((float *)a2 + 10);
    v23 = *((_QWORD *)v18 + 2);
    v24 = v22 + v13.m128_f32[0];
    v25 = v22 - *((float *)a2 + 5);
    v26 = *(float *)v16;
    v27 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v28 = *((float *)v18 + 45);
    v29 = _mm_cvtsi32_si128(v17[2] - *v17);
    v30 = v17[3] - v17[1];
    v31 = *((float *)a2 + 11) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    v49 = v25;
    v32 = *v18;
    v33 = (float)v30 - v19;
    v50 = v27;
    v51 = v26;
    v34 = _mm_cvtepi32_ps(v29).m128_f32[0] - v19;
    v52 = v28;
    v53 = v24;
    v54 = v31;
    *(_OWORD *)&v56[1] = v32;
    v57 = v23;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56[1]) )
    {
      v38 = *(_OWORD *)(v35 + 48);
      v57 = *(_QWORD *)(v35 + 64);
      *(_OWORD *)&v56[1] = v38;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v37,
        v31,
        &v53,
        &v54);
      v40 = *(_OWORD *)(v39 + 48);
      v57 = *(_QWORD *)(v39 + 64);
      *(_OWORD *)&v56[1] = v40;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v25,
        v27,
        &v49,
        &v50);
      v42 = *(_OWORD *)(v41 + 48);
      v57 = *(_QWORD *)(v41 + 64);
      *(_OWORD *)&v56[1] = v42;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v56[1],
        v26,
        v28,
        &v51,
        &v52);
      v37 = v53;
      v31 = v54;
      v25 = v49;
      v27 = v50;
      v26 = v51;
      v28 = v52;
    }
    if ( !*(_BYTE *)(v35 + 197)
      || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm) <= v34
      && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) <= v33 )
    {
      v36 = 0;
    }
    if ( v36 )
    {
      if ( *(_BYTE *)(v35 + 196) )
      {
        *a8 = 0.0;
        *a9 = 0.0;
      }
      else
      {
        v43 = v37;
        v44 = v31;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm) > v34 )
        {
          v37 = v34;
          if ( v43 < 0.0 )
            LODWORD(v37) = LODWORD(v34) ^ _xmm;
          v31 = (float)(v31 * v37) / v43;
        }
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) > v33 )
        {
          v31 = v33;
          if ( v44 < 0.0 )
            LODWORD(v31) = LODWORD(v33) ^ _xmm;
          v37 = (float)(v43 * v31) / v44;
        }
        v45 = v31 - (float)(v28 + v27);
        *a8 = v37 - (float)(v26 + v25);
        *a9 = v45;
        v46 = *(_QWORD *)(v35 + 16);
        *(_OWORD *)&v56[1] = *(_OWORD *)v35;
        v57 = v46;
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v56[1]) )
        {
          v47 = *(_OWORD *)(v35 + 72);
          v48 = *a8;
          v57 = *(_QWORD *)(v35 + 88);
          *(_OWORD *)&v56[1] = v47;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v56[1],
            v48,
            v45,
            a8,
            a9);
        }
      }
    }
    *(_BYTE *)(v35 + 196) = v36;
  }
  *(__m128 *)v16 = v13;
  *(_DWORD *)(v16 + 16) = v14;
}
