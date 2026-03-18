/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x180250390
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x18026E238 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned __int8 IsEnabled; // al
  _QWORD *v3; // rdi
  float *v4; // rsi
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rbp
  unsigned __int8 v8; // al
  unsigned int v9; // edx
  CExpressionValue *v10; // rax
  const struct D2DQuaternion *v11; // r14
  unsigned __int8 v12; // al
  unsigned int v13; // edx
  CExpressionValue *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+20h] [rbp-78h]
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[80]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 4) < 3u )
  {
    v19 = 3884;
LABEL_21:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      v19);
    return v16;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v3 = (_QWORD *)((char *)this + 24);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  v5 = *((_DWORD *)this + 4) - 3;
  if ( IsEnabled && v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v7 = (const struct D2DQuaternion *)DynArray<CExpressionValue,1>::operator[](v3, v5);
  }
  v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v9 = *((_DWORD *)this + 4) - 2;
  if ( v8 && v9 >= *((_DWORD *)this + 12) )
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    v11 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v11 = (const struct D2DQuaternion *)DynArray<CExpressionValue,1>::operator[](v3, v9);
  }
  v12 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v13 = *((_DWORD *)this + 4) - 1;
  if ( v12 && v13 >= *((_DWORD *)this + 12) )
  {
    v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
  }
  else
  {
    v4 = (float *)DynArray<CExpressionValue,1>::operator[](v3, v13);
  }
  v15 = *((_DWORD *)v7 + 18);
  if ( *((_DWORD *)v4 + 18) != 18 || (v16 = 0, v15 != *((_DWORD *)v11 + 18)) )
  {
    v19 = 3909;
    goto LABEL_21;
  }
  if ( v15 != 71 )
  {
    v19 = 3941;
    goto LABEL_21;
  }
  D3DXQuaternionSlerp((struct D2DQuaternion *)&v20, v7, v11, *v4);
  v17 = v20;
  *((_DWORD *)v7 + 18) = 71;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v17;
  *((_DWORD *)this + 4) -= 2;
  return v16;
}
