/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x18024A5A0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  float *v3; // rbx
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  __m128i *v6; // rbp
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  const __m128i *v10; // r14
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  __int32 v14; // eax
  float v15; // xmm0_4
  unsigned int v16; // ebx
  __m128 v17; // xmm5
  __m128 v18; // xmm4
  float v19; // xmm3_4
  float v20; // xmm0_4
  __int32 v21; // xmm1_4
  float v22; // xmm0_4
  unsigned int v24; // [rsp+20h] [rbp-78h]
  __m128i v25; // [rsp+30h] [rbp-68h]
  _BYTE v26[80]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) < 3u )
  {
    v24 = 3294;
LABEL_21:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v24);
    return v16;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (float *)&CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 3;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    v6 = (__m128i *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 4) - 2;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
    v10 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (const __m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *((_DWORD *)this + 4) - 1;
  if ( v11 && v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v26);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v26);
  }
  else
  {
    v3 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
  }
  v14 = v6[4].m128i_i32[2];
  v15 = *v3;
  if ( *((_DWORD *)v3 + 18) != 18 || (v16 = 0, v14 != v10[4].m128i_i32[2]) )
  {
    v24 = 3320;
    goto LABEL_21;
  }
  if ( v14 != 70 )
  {
    v24 = 3351;
    goto LABEL_21;
  }
  v17 = (__m128)_mm_loadu_si128(v10);
  v6[4].m128i_i32[2] = 70;
  v18 = (__m128)_mm_loadu_si128(v6);
  v6[4].m128i_i8[12] = 1;
  v19 = fmaxf(0.0, fminf(v15, 1.0));
  *(float *)v25.m128i_i32 = (float)((float)(v17.m128_f32[0] - v18.m128_f32[0]) * v19) + v18.m128_f32[0];
  v20 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  *(float *)&v21 = (float)((float)(_mm_shuffle_ps(v17, v17, 85).m128_f32[0] - v20) * v19) + v20;
  v22 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
  v25.m128i_i32[1] = v21;
  *(float *)&v25.m128i_i32[2] = (float)((float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] - v22) * v19) + v22;
  *(float *)&v25.m128i_i32[3] = (float)((float)(_mm_shuffle_ps(v17, v17, 255).m128_f32[0] - v18.m128_f32[0]) * v19)
                              + v18.m128_f32[0];
  *v6 = v25;
  *((_DWORD *)this + 4) -= 2;
  return v16;
}
