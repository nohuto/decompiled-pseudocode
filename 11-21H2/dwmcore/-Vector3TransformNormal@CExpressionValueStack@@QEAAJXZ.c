/*
 * XREFs of ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x180251794
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E8A0 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3TransformNormal(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  _OWORD *v4; // rbx
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int v18; // [rsp+28h] [rbp-29h]
  __int64 v19; // [rsp+38h] [rbp-19h] BYREF
  int v20; // [rsp+40h] [rbp-11h]
  __int64 v21; // [rsp+48h] [rbp-9h] BYREF
  int v22; // [rsp+50h] [rbp-1h]
  _OWORD v23[5]; // [rsp+58h] [rbp+7h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = &CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 2;
    if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = *((_DWORD *)this + 4) - 1;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    else
    {
      v4 = (_OWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    if ( v7[18] == 52 )
    {
      if ( *((_DWORD *)v4 + 18) == 265 )
      {
        v11 = v4[1];
        v12 = v7[2];
        v19 = *(_QWORD *)v7;
        v13 = *v4;
        v20 = v12;
        v23[1] = v11;
        v14 = v4[3];
        v23[0] = v13;
        v15 = v4[2];
        v23[3] = v14;
        v23[2] = v15;
        D3DXVec3TransformNormal(
          (struct D2DVector3 *)&v21,
          (const struct D2DVector3 *)&v19,
          (const struct D2DMatrix *)v23);
        *(_QWORD *)&v15 = v21;
        v16 = v22;
        v7[18] = 52;
        *(_QWORD *)v7 = v15;
        v7[2] = v16;
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return 0;
      }
      v18 = 7622;
    }
    else
    {
      v18 = 7621;
    }
  }
  else
  {
    v18 = 7615;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v18);
  return v2;
}
