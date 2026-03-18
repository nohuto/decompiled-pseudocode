/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18006DB9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  char IsEnabled; // al
  __int64 v4; // rdx
  CExpressionValue *v5; // rax
  float *v6; // rbx
  float v7; // xmm0_4
  __int128 v8; // xmm0
  float v9; // xmm0_4
  __m128 v10; // xmm3
  float v11; // xmm2_4
  __m128 v12; // xmm1
  char v13; // al
  float *v14; // rbx
  __int64 v15; // rdx
  CExpressionValue *v16; // rax
  float *v17; // r15
  char v18; // al
  __int64 v19; // rdx
  CExpressionValue *v20; // rax
  char *v21; // rcx
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  float v27; // xmm1_4
  __m128 v28; // xmm3
  float v29; // xmm2_4
  __m128 v30; // xmm4
  __int128 v31; // xmm0
  unsigned int v32; // ebx
  char v34; // al
  void *v35; // rbx
  __int64 v36; // rdx
  CExpressionValue *v37; // rax
  char v38; // al
  __int64 v39; // rdx
  CExpressionValue *v40; // rax
  float *v41; // r13
  char *v42; // rcx
  char v43; // al
  __int64 v44; // rdx
  CExpressionValue *v45; // rax
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm2_4
  float v49; // xmm3_4
  unsigned int v50; // [rsp+20h] [rbp-59h]
  _BYTE v52[80]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v53; // [rsp+90h] [rbp+17h]

  if ( *((_DWORD *)this + 4) >= a2 )
  {
    if ( a2 == 1 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v4 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( IsEnabled && (unsigned int)v4 >= *((_DWORD *)this + 12) )
      {
        v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
        v6 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
      }
      else
      {
        v6 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v4);
      }
      if ( *((_DWORD *)v6 + 18) == 18 )
      {
        v7 = *v6;
        DWORD2(v53) = 0;
        *(_QWORD *)&v53 = LODWORD(v7);
        *((float *)&v53 + 3) = v7;
        v8 = v53;
        *((_DWORD *)v6 + 18) = 104;
        *(_OWORD *)v6 = v8;
        *((_BYTE *)v6 + 76) = 1;
        *((_QWORD *)v6 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
LABEL_55:
        *((_DWORD *)this + 4) += 1 - a2;
        return 0;
      }
      if ( *((_DWORD *)v6 + 18) == 35 )
      {
        v9 = *v6;
        v10 = 0LL;
        v11 = v6[1];
        v12 = 0LL;
        DWORD2(v53) = 0;
        *(_QWORD *)&v53 = LODWORD(v9);
        *((_DWORD *)v6 + 18) = 104;
        *((float *)&v53 + 3) = v11;
        *((_BYTE *)v6 + 76) = 1;
        v12.m128_f32[0] = 0.0 - (float)(v9 * 0.0);
        v10.m128_f32[0] = 0.0 - (float)(v11 * 0.0);
        *(_OWORD *)v6 = v53;
        *((_QWORD *)v6 + 2) = _mm_unpacklo_ps(v12, v10).m128_u64[0];
        goto LABEL_55;
      }
LABEL_32:
      v50 = 5932;
      goto LABEL_33;
    }
    if ( a2 == 2 )
    {
      v13 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
      v15 = (unsigned int)(*((_DWORD *)this + 4) - 2);
      if ( v13 && (unsigned int)v15 >= *((_DWORD *)this + 12) )
      {
        v16 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v16);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
        v17 = (float *)&CExpressionValueStack::s_emptyValue;
      }
      else
      {
        v17 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v15);
      }
      v18 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
      v19 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( v18 )
      {
        if ( (unsigned int)v19 >= *((_DWORD *)this + 12) )
        {
          v20 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
          CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v20);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
LABEL_23:
          if ( *((_DWORD *)v17 + 18) != 18 )
          {
            if ( *((_DWORD *)v17 + 18) == 35 && *((_DWORD *)v14 + 18) == 35 )
            {
              v27 = *v17;
              v28 = (__m128)*(unsigned int *)v14;
              v29 = v17[1];
              v30 = (__m128)*((unsigned int *)v14 + 1);
              DWORD2(v53) = 0;
              *(_QWORD *)&v53 = LODWORD(v27);
              *((_DWORD *)v17 + 18) = 104;
              *((float *)&v53 + 3) = v29;
              v31 = v53;
              *((_BYTE *)v17 + 76) = 1;
              v28.m128_f32[0] = v28.m128_f32[0] - (float)(v27 * v28.m128_f32[0]);
              *(_OWORD *)v17 = v31;
              v30.m128_f32[0] = v30.m128_f32[0] - (float)(v29 * v30.m128_f32[0]);
              *((_QWORD *)v17 + 2) = _mm_unpacklo_ps(v28, v30).m128_u64[0];
              goto LABEL_55;
            }
            goto LABEL_32;
          }
          if ( *((_DWORD *)v14 + 18) == 18 )
          {
            v22 = *v17;
            v23 = *v14;
            *((_DWORD *)v17 + 18) = 104;
            *v17 = v22;
            v17[1] = 0.0;
            v17[2] = 0.0;
            v17[3] = v23;
            v17[4] = 0.0 - (float)(v22 * 0.0);
            v17[5] = 0.0 - (float)(v23 * 0.0);
          }
          else
          {
            if ( *((_DWORD *)v14 + 18) != 35 )
              goto LABEL_32;
            v24 = *v17;
            v25 = (__m128)*(unsigned int *)v14;
            v26 = (__m128)*((unsigned int *)v14 + 1);
            DWORD2(v53) = 0;
            *(_QWORD *)&v53 = LODWORD(v24);
            *((float *)&v53 + 3) = v24;
            *((_DWORD *)v17 + 18) = 104;
            v25.m128_f32[0] = v25.m128_f32[0] * (float)(1.0 - v24);
            v26.m128_f32[0] = v26.m128_f32[0] * (float)(1.0 - v24);
            *(_OWORD *)v17 = v53;
            *((_QWORD *)v17 + 2) = _mm_unpacklo_ps(v25, v26).m128_u64[0];
          }
LABEL_54:
          *((_BYTE *)v17 + 76) = 1;
          goto LABEL_55;
        }
        v21 = (char *)this + 24;
      }
      else
      {
        v21 = (char *)this + 24;
      }
      v14 = (float *)DynArray<CExpressionValue,1>::operator[](v21, v19);
      goto LABEL_23;
    }
    if ( a2 != 3 )
      goto LABEL_32;
    v34 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v35 = &CExpressionValueStack::s_emptyValue;
    v36 = (unsigned int)(*((_DWORD *)this + 4) - 3);
    if ( v34 && (unsigned int)v36 >= *((_DWORD *)this + 12) )
    {
      v37 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v37);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
      v17 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v17 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v36);
    }
    v38 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v39 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( v38 )
    {
      if ( (unsigned int)v39 >= *((_DWORD *)this + 12) )
      {
        v40 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v40);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
        v41 = (float *)&CExpressionValueStack::s_emptyValue;
        goto LABEL_46;
      }
      v42 = (char *)this + 24;
    }
    else
    {
      v42 = (char *)this + 24;
    }
    v41 = (float *)DynArray<CExpressionValue,1>::operator[](v42, v39);
LABEL_46:
    v43 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v44 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( v43 && (unsigned int)v44 >= *((_DWORD *)this + 12) )
    {
      v45 = CExpressionValue::CExpressionValue((CExpressionValue *)v52);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v45);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v52);
    }
    else
    {
      v35 = (void *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v44);
    }
    if ( *((_DWORD *)v17 + 18) != 18 || *((_DWORD *)v41 + 18) != 18 || *((_DWORD *)v35 + 18) != 35 )
      goto LABEL_32;
    v46 = *(float *)v35;
    v47 = *((float *)v35 + 1);
    v48 = *v17;
    v49 = *v41;
    *((_DWORD *)v17 + 18) = 104;
    *v17 = v48;
    v17[1] = 0.0;
    v17[2] = 0.0;
    v17[3] = v49;
    v17[4] = v46 - (float)(v48 * v46);
    v17[5] = v47 - (float)(v49 * v47);
    goto LABEL_54;
  }
  v50 = 5835;
LABEL_33:
  v32 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v50,
    0LL);
  return v32;
}
