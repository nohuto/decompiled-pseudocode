/*
 * XREFs of ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x18024FB78
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18026DE58 (-D3DXQuaternionLerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  unsigned __int8 IsEnabled; // al
  float *v4; // rsi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r15
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  _DWORD *v11; // r12
  unsigned __int8 v12; // al
  unsigned int v13; // edx
  CExpressionValue *v14; // rax
  __int128 v15; // xmm1
  float v16; // xmm3_4
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+28h] [rbp-49h]
  __int128 v20; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+48h] [rbp-29h] BYREF
  __int128 v22; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v23[80]; // [rsp+68h] [rbp-9h] BYREF

  if ( *((_DWORD *)this + 4) >= 3u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = *((_DWORD *)this + 4) - 3;
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
    v9 = *((_DWORD *)this + 4) - 2;
    if ( v8 && v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
      v11 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v11 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v9);
    }
    v12 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v13 = *((_DWORD *)this + 4) - 1;
    if ( v12 && v13 >= *((_DWORD *)this + 12) )
    {
      v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)this + 3, v13);
    }
    if ( v7[18] == 71 )
    {
      if ( v11[18] == 71 )
      {
        if ( *((_DWORD *)v4 + 18) == 18 )
        {
          v15 = *(_OWORD *)v11;
          v16 = *v4;
          v21 = *(_OWORD *)v7;
          v20 = v15;
          D3DXQuaternionLerp(
            (struct D2DQuaternion *)&v22,
            (const struct D2DQuaternion *)&v21,
            (const struct D2DQuaternion *)&v20,
            v16);
          v17 = v22;
          v7[18] = 71;
          *((_BYTE *)v7 + 76) = 1;
          *(_OWORD *)v7 = v17;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v19 = 7017;
      }
      else
      {
        v19 = 7016;
      }
    }
    else
    {
      v19 = 7015;
    }
  }
  else
  {
    v19 = 7008;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v19);
  return v2;
}
