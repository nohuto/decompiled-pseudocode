/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18024A040
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

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  _QWORD *v3; // rdi
  unsigned int v4; // edx
  CExpressionValue *v5; // rax
  _QWORD *v6; // rbx
  unsigned __int8 v7; // al
  unsigned int v8; // edx
  CExpressionValue *v9; // rax
  _QWORD *v10; // r14
  unsigned __int8 v11; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  int v14; // eax
  unsigned int v15; // r15d
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  unsigned int v27; // [rsp+28h] [rbp-59h]
  __int128 v28; // [rsp+38h] [rbp-49h]
  float v29; // [rsp+40h] [rbp-41h]
  _BYTE v30[96]; // [rsp+68h] [rbp-19h] BYREF

  if ( *((_DWORD *)this + 4) < 3u )
  {
    v27 = 2539;
LABEL_29:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v27);
    return v15;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = &CExpressionValueStack::s_emptyValue;
  v4 = *((_DWORD *)this + 4) - 3;
  if ( IsEnabled && v4 >= *((_DWORD *)this + 12) )
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v4);
  }
  v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v8 = *((_DWORD *)this + 4) - 2;
  if ( v7 && v8 >= *((_DWORD *)this + 12) )
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v8);
  }
  v11 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v12 = *((_DWORD *)this + 4) - 1;
  if ( v11 && v12 >= *((_DWORD *)this + 12) )
  {
    v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
  }
  else
  {
    v3 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
  }
  v14 = *((_DWORD *)v6 + 18);
  if ( v14 != *((_DWORD *)v10 + 18) || (v15 = 0, v14 != *((_DWORD *)v3 + 18)) )
  {
    v27 = 2564;
    goto LABEL_29;
  }
  switch ( v14 )
  {
    case 18:
      v24 = *(float *)v3;
      v25 = fmaxf(*(float *)v6, *(float *)v10);
      *((_DWORD *)v6 + 18) = 18;
      v23 = fminf(v25, v24);
      goto LABEL_26;
    case 35:
      v22 = fminf(fmaxf(*((float *)v6 + 1), *((float *)v10 + 1)), *((float *)v3 + 1));
      v23 = fminf(fmaxf(*(float *)v6, *(float *)v10), *(float *)v3);
      *((_DWORD *)v6 + 18) = 35;
      *((float *)v6 + 1) = v22;
LABEL_26:
      *(float *)v6 = v23;
      break;
    case 52:
      v19 = fminf(fmaxf(COERCE_FLOAT(HIDWORD(*v6)), COERCE_FLOAT(HIDWORD(*v10))), COERCE_FLOAT(HIDWORD(*v3)));
      v20 = fminf(fmaxf(COERCE_FLOAT(*v6), COERCE_FLOAT(*v10)), COERCE_FLOAT(*v3));
      v21 = fmaxf(*((float *)v6 + 2), *((float *)v10 + 2));
      v29 = *((float *)v3 + 2);
      *((_DWORD *)v6 + 18) = 52;
      *(float *)v6 = v20;
      *((float *)v6 + 1) = v19;
      *((float *)v6 + 2) = fminf(v21, v29);
      break;
    case 69:
      v16 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      v17 = (__m128)_mm_loadu_si128((const __m128i *)v3);
      *((_DWORD *)v6 + 18) = 69;
      v18 = (__m128)_mm_loadu_si128((const __m128i *)v6);
      *(_QWORD *)&v28 = __PAIR64__(
                          COERCE_UNSIGNED_INT(
                            fminf(
                              fmaxf(_mm_shuffle_ps(v18, v18, 85).m128_f32[0], _mm_shuffle_ps(v16, v16, 85).m128_f32[0]),
                              _mm_shuffle_ps(v17, v17, 85).m128_f32[0])),
                          COERCE_UNSIGNED_INT(fminf(fmaxf(v18.m128_f32[0], v16.m128_f32[0]), v17.m128_f32[0])));
      *((_QWORD *)&v28 + 1) = __PAIR64__(
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v18, v18, 255).m128_f32[0],
                                      _mm_shuffle_ps(v16, v16, 255).m128_f32[0]),
                                    _mm_shuffle_ps(v17, v17, 255).m128_f32[0])),
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v18, v18, 170).m128_f32[0],
                                      _mm_shuffle_ps(v16, v16, 170).m128_f32[0]),
                                    _mm_shuffle_ps(v17, v17, 170).m128_f32[0])));
      *(_OWORD *)v6 = v28;
      break;
    default:
      v27 = 2627;
      goto LABEL_29;
  }
  *((_BYTE *)v6 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v15;
}
