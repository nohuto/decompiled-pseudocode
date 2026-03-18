/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x18024C5F8
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

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned __int8 v4; // al
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  unsigned __int8 IsEnabled; // al
  unsigned int *v11; // rbx
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  _DWORD *v14; // r13
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  CExpressionValue *v17; // rax
  _QWORD *v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+28h] [rbp-49h]
  _BYTE v24[80]; // [rsp+38h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+88h] [rbp+17h] BYREF

  if ( *((_DWORD *)this + 4) < a2 )
  {
    v23 = 6061;
LABEL_26:
    v21 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v23);
    return v21;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      goto LABEL_25;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v11 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    v12 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v12 >= *((_DWORD *)this + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
      v14 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v14 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v12);
    }
    v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v16 = *((_DWORD *)this + 4) - 1;
    if ( v15 )
    {
      if ( v16 >= *((_DWORD *)this + 12) )
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
LABEL_21:
        if ( v14[18] == 18 && v11[18] == 35 )
        {
          D2D1MakeRotateMatrix(
            *(float *)v14 * 57.295776,
            (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)*v11, (__m128)v11[1]),
            &matrix);
          v19 = *(_OWORD *)&matrix.m11;
          v14[18] = 104;
          v20 = *(_QWORD *)&matrix.m[2][0];
          *(_OWORD *)v14 = v19;
          *((_BYTE *)v14 + 76) = 1;
          *((_QWORD *)v14 + 2) = v20;
          goto LABEL_24;
        }
LABEL_25:
        v23 = 6103;
        goto LABEL_26;
      }
      v18 = (_QWORD *)((char *)this + 24);
    }
    else
    {
      v18 = (_QWORD *)((char *)this + 24);
    }
    v11 = (unsigned int *)DynArray<CExpressionValue,1>::operator[](v18, v16);
    goto LABEL_21;
  }
  v4 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = *((_DWORD *)this + 4) - 1;
  if ( v4 && v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    v7 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
  }
  else
  {
    v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
  }
  if ( v7[18] != 18 )
    goto LABEL_25;
  D2D1MakeRotateMatrix(
    *(float *)v7 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
    &matrix);
  v8 = *(_OWORD *)&matrix.m11;
  v7[18] = 104;
  v9 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v7 = v8;
  *((_BYTE *)v7 + 76) = 1;
  *((_QWORD *)v7 + 2) = v9;
LABEL_24:
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
