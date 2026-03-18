/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18024B4CC
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
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18026CB5C (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v3; // edx
  CExpressionValue *v4; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-39h]
  float v15[4]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v16[5]; // [rsp+40h] [rbp-19h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+90h] [rbp+37h] BYREF

  if ( !*((_DWORD *)this + 4) )
  {
    v14 = 2899;
LABEL_17:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v14);
    return v12;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = *((_DWORD *)this + 4) - 1;
  if ( IsEnabled && v3 >= *((_DWORD *)this + 12) )
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
    v5 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
  }
  else
  {
    v5 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v3);
  }
  if ( *((_DWORD *)v5 + 18) == 104 )
  {
    v9 = v5[2];
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v5;
    *(_QWORD *)&matrix.m[2][0] = v9;
    if ( !D2D1InvertMatrix(&matrix) )
    {
      v14 = 2925;
      goto LABEL_17;
    }
    v10 = *(_OWORD *)&matrix.m11;
    *((_DWORD *)v5 + 18) = 104;
    v11 = *(_QWORD *)&matrix.m[2][0];
    *(_OWORD *)v5 = v10;
    v5[2] = v11;
  }
  else
  {
    if ( *((_DWORD *)v5 + 18) != 265 )
    {
      v14 = 2964;
      goto LABEL_17;
    }
    v15[0] = 0.0;
    D2DMatrixInverse((struct D2DMatrix *)v16, v15, (const struct D2DMatrix *)v5);
    if ( v15[0] == 0.0 )
    {
      v14 = 2949;
      goto LABEL_17;
    }
    v6 = v16[1];
    *(_OWORD *)v5 = v16[0];
    *((_DWORD *)v5 + 18) = 265;
    v7 = v16[2];
    *((_OWORD *)v5 + 1) = v6;
    v8 = v16[3];
    *((_OWORD *)v5 + 2) = v7;
    *((_OWORD *)v5 + 3) = v8;
  }
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
