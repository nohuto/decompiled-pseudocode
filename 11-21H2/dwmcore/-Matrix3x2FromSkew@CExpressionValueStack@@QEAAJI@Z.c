/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x18024C878
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

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  unsigned __int8 v3; // al
  float *v4; // rbx
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r15
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  _QWORD *v11; // rcx
  float v12; // xmm1_4
  __m128 v13; // xmm4
  __m128 v14; // xmm3
  unsigned __int8 IsEnabled; // al
  unsigned int *v16; // rbx
  unsigned int v17; // edx
  CExpressionValue *v18; // rax
  unsigned __int8 v19; // al
  unsigned int v20; // edx
  CExpressionValue *v21; // rax
  float *v22; // r12
  _QWORD *v23; // rcx
  unsigned __int8 v24; // al
  unsigned int v25; // edx
  CExpressionValue *v26; // rax
  __int64 v27; // xmm1_8
  unsigned int v28; // ebx
  unsigned int v30; // [rsp+20h] [rbp-59h]
  _BYTE v32[80]; // [rsp+40h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+90h] [rbp+17h] BYREF

  if ( *((_DWORD *)this + 4) < a2 )
  {
    v30 = 5965;
LABEL_38:
    v28 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v30);
    return v28;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_37;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v16 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    v17 = *((_DWORD *)this + 4) - 3;
    if ( IsEnabled && v17 >= *((_DWORD *)this + 12) )
    {
      v18 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v17);
    }
    v19 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v20 = *((_DWORD *)this + 4) - 2;
    if ( v19 )
    {
      if ( v20 >= *((_DWORD *)this + 12) )
      {
        v21 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v21);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
        v22 = (float *)&CExpressionValueStack::s_emptyValue;
LABEL_28:
        v24 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
        v25 = *((_DWORD *)this + 4) - 1;
        if ( v24 && v25 >= *((_DWORD *)this + 12) )
        {
          v26 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v26);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
        }
        else
        {
          v16 = (unsigned int *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v25);
        }
        if ( v7[18] == 18 && *((_DWORD *)v22 + 18) == 18 && v16[18] == 35 )
        {
          v13 = (__m128)v16[1];
          v12 = *v22;
          v14 = (__m128)*v16;
          goto LABEL_36;
        }
LABEL_37:
        v30 = 6027;
        goto LABEL_38;
      }
      v23 = (_QWORD *)((char *)this + 24);
    }
    else
    {
      v23 = (_QWORD *)((char *)this + 24);
    }
    v22 = (float *)DynArray<CExpressionValue,1>::operator[](v23, v20);
    goto LABEL_28;
  }
  v3 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  v5 = *((_DWORD *)this + 4) - 2;
  if ( v3 && v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
  }
  v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v9 = *((_DWORD *)this + 4) - 1;
  if ( !v8 )
  {
    v11 = (_QWORD *)((char *)this + 24);
    goto LABEL_13;
  }
  if ( v9 < *((_DWORD *)this + 12) )
  {
    v11 = (_QWORD *)((char *)this + 24);
LABEL_13:
    v4 = (float *)DynArray<CExpressionValue,1>::operator[](v11, v9);
    goto LABEL_14;
  }
  v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
  CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
LABEL_14:
  if ( v7[18] != 18 || *((_DWORD *)v4 + 18) != 18 )
    goto LABEL_37;
  v12 = *v4;
  v13 = 0LL;
  v14 = 0LL;
LABEL_36:
  D2D1MakeSkewMatrix(
    *(float *)v7 * 57.295776,
    v12 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v14, v13),
    &matrix);
  v27 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v7 = *(_OWORD *)&matrix.m11;
  *((_BYTE *)v7 + 76) = 1;
  *((_QWORD *)v7 + 2) = v27;
  v7[18] = 104;
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
