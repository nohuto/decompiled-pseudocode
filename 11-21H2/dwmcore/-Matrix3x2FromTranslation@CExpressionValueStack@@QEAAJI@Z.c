/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x180072294
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

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  char v4; // al
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  unsigned int *v7; // rbx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  char IsEnabled; // al
  int *v11; // rbx
  __int64 v12; // rdx
  CExpressionValue *v13; // rax
  _DWORD *v14; // rsi
  char v15; // al
  __int64 v16; // rdx
  CExpressionValue *v17; // rax
  char *v18; // rcx
  int v19; // xmm0_4
  int v20; // xmm1_4
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+20h] [rbp-88h]
  _BYTE v24[80]; // [rsp+30h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 4) < a2 )
  {
    v23 = 5676;
LABEL_26:
    v21 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v21;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
      goto LABEL_25;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v11 = (int *)&CExpressionValueStack::s_emptyValue;
    v12 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( IsEnabled && (unsigned int)v12 >= *((_DWORD *)this + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
      v14 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v14 = (_DWORD *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v12);
    }
    v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v16 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( v15 )
    {
      if ( (unsigned int)v16 >= *((_DWORD *)this + 12) )
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
LABEL_21:
        if ( v14[18] == 18 && v11[18] == 18 )
        {
          v19 = *v14;
          v20 = *v11;
          v14[18] = 104;
          *(_QWORD *)v14 = 1065353216LL;
          v14[2] = 0;
          v14[3] = 1065353216;
          v14[4] = v19;
          v14[5] = v20;
          *((_BYTE *)v14 + 76) = 1;
          goto LABEL_24;
        }
LABEL_25:
        v23 = 5717;
        goto LABEL_26;
      }
      v18 = (char *)this + 24;
    }
    else
    {
      v18 = (char *)this + 24;
    }
    v11 = (int *)DynArray<CExpressionValue,1>::operator[](v18, v16);
    goto LABEL_21;
  }
  v4 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( v4 && (unsigned int)v5 >= *((_DWORD *)this + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v24);
    v7 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v24);
  }
  else
  {
    v7 = (unsigned int *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
  }
  if ( v7[18] != 35 )
    goto LABEL_25;
  v8 = (__m128)*v7;
  v9 = (__m128)v7[1];
  *(_OWORD *)v7 = *(_OWORD *)&_xmm;
  v7[18] = 104;
  *((_BYTE *)v7 + 76) = 1;
  *((_QWORD *)v7 + 2) = _mm_unpacklo_ps(v8, v9).m128_u64[0];
LABEL_24:
  *((_DWORD *)this + 4) += 1 - a2;
  return 0;
}
