/*
 * XREFs of ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18024EE80
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::NotEquals(__int64 this)
{
  __int64 v1; // r14
  unsigned int v2; // ebp
  unsigned __int8 IsEnabled; // al
  bool v4; // di
  const __m128i *v5; // rsi
  unsigned int v6; // edx
  CExpressionValue *v7; // rax
  __m128i *v8; // rbx
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  CExpressionValue *v11; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  bool v20; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-98h]
  __m128i v25; // [rsp+30h] [rbp-88h]
  __m128i v26; // [rsp+40h] [rbp-78h]
  _BYTE v27[80]; // [rsp+50h] [rbp-68h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = 0;
    v5 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    v6 = *(_DWORD *)(v1 + 16) - 2;
    if ( IsEnabled && v6 >= *(_DWORD *)(v1 + 48) )
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v8 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v8 = (__m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v6);
    }
    v9 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v10 = *(_DWORD *)(v1 + 16) - 1;
    if ( v9 && v10 >= *(_DWORD *)(v1 + 48) )
    {
      v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    else
    {
      v5 = (const __m128i *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v1 + 24), v10);
    }
    this = v8[4].m128i_u32[2];
    v2 = 0;
    if ( (_DWORD)this != v5[4].m128i_i32[2] )
    {
      v24 = 1663;
      goto LABEL_3;
    }
    v12 = this - 17;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v20 = *(float *)v8->m128i_i32 == *(float *)v5->m128i_i32;
        goto LABEL_31;
      }
      v14 = v13 - 17;
      if ( v14 )
      {
        v15 = v14 - 17;
        if ( !v15 )
        {
          v22 = v8->m128i_i64[0] - v5->m128i_i64[0];
          if ( v8->m128i_i64[0] == v5->m128i_i64[0] )
            v22 = v8->m128i_u32[2] - (unsigned __int64)v5->m128i_u32[2];
          v19 = v22 == 0;
          goto LABEL_46;
        }
        v16 = v15 - 17;
        if ( !v16 )
          goto LABEL_33;
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            this = (unsigned int)(v18 - 33);
            if ( (_DWORD)this )
            {
              if ( (_DWORD)this != 161 )
              {
                v24 = 1724;
                goto LABEL_3;
              }
              v19 = memcmp_0(v8, v5, 0x40uLL) == 0;
              goto LABEL_46;
            }
            if ( *(float *)v8->m128i_i32 != *(float *)v5->m128i_i32
              || *(float *)&v8->m128i_i32[1] != *(float *)&v5->m128i_i32[1]
              || *(float *)&v8->m128i_i32[2] != *(float *)&v5->m128i_i32[2]
              || *(float *)&v8->m128i_i32[3] != *(float *)&v5->m128i_i32[3]
              || *(float *)v8[1].m128i_i32 != *(float *)v5[1].m128i_i32 )
            {
              goto LABEL_32;
            }
            v20 = *(float *)&v8[1].m128i_i32[1] == *(float *)&v5[1].m128i_i32[1];
            goto LABEL_31;
          }
LABEL_33:
          v21 = v8->m128i_i64[0] - v5->m128i_i64[0];
          if ( v8->m128i_i64[0] == v5->m128i_i64[0] )
            v21 = v8->m128i_i64[1] - v5->m128i_i64[1];
          v19 = v21 == 0;
          goto LABEL_46;
        }
        v25 = _mm_loadu_si128(v8);
        v26 = _mm_loadu_si128(v5);
        if ( *(float *)v25.m128i_i32 != *(float *)v26.m128i_i32
          || *(float *)&v25.m128i_i32[1] != *(float *)&v26.m128i_i32[1]
          || *(float *)&v25.m128i_i32[2] != *(float *)&v26.m128i_i32[2] )
        {
          goto LABEL_32;
        }
        v20 = *(float *)&v25.m128i_i32[3] == *(float *)&v26.m128i_i32[3];
LABEL_31:
        if ( v20 )
        {
LABEL_47:
          v8[4].m128i_i32[2] = 17;
          v8[4].m128i_i8[12] = 1;
          v8->m128i_i8[0] = v4;
          --*(_DWORD *)(v1 + 16);
          return v2;
        }
LABEL_32:
        v4 = 1;
        goto LABEL_47;
      }
      v19 = v8->m128i_i64[0] == v5->m128i_i64[0];
    }
    else
    {
      v19 = v8->m128i_i8[0] == v5->m128i_i8[0];
    }
LABEL_46:
    v4 = !v19;
    goto LABEL_47;
  }
  v24 = 1635;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v24);
  return v2;
}
