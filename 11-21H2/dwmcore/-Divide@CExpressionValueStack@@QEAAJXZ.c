/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800724B4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18026DD94 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x18026DF3C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v2; // r15d
  char IsEnabled; // al
  void *v4; // r14
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  void *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  CExpressionValue *v10; // rax
  int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __int32 v18; // eax
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  unsigned int v30; // [rsp+28h] [rbp-49h]
  __m128i v31; // [rsp+38h] [rbp-39h] BYREF
  __m128i v32; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v33[16]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v34[80]; // [rsp+68h] [rbp-9h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = &CExpressionValueStack::s_emptyValue;
    v5 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( IsEnabled && (unsigned int)v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (void *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( v8 && (unsigned int)v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
    }
    else
    {
      v4 = (void *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v9);
    }
    v11 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v11 != *((_DWORD *)v4 + 18) )
    {
      v30 = 1264;
      goto LABEL_3;
    }
    if ( v11 == 18 )
    {
      if ( *(float *)v4 == 0.0 )
      {
        v30 = 1277;
        goto LABEL_3;
      }
      v28 = *(float *)v7 / *(float *)v4;
      *((_DWORD *)v7 + 18) = 18;
    }
    else
    {
      if ( v11 != 35 )
      {
        if ( v11 == 52 )
        {
          v18 = *((_DWORD *)v7 + 2);
          v31.m128i_i64[0] = *(_QWORD *)v7;
          v32.m128i_i64[0] = *(_QWORD *)v4;
          v19 = *(float *)v32.m128i_i32;
          v31.m128i_i32[2] = v18;
          v32.m128i_i32[2] = *((_DWORD *)v4 + 2);
          if ( *(float *)v32.m128i_i32 == 0.0
            || *(float *)&v32.m128i_i32[1] == 0.0
            || (v20 = *(float *)&v32.m128i_i32[2], *(float *)&v32.m128i_i32[2] == 0.0) )
          {
            v30 = 1317;
            goto LABEL_3;
          }
          v21 = *(float *)v31.m128i_i32;
          v22 = *(float *)&v31.m128i_i32[1] / *(float *)&v32.m128i_i32[1];
          *((_DWORD *)v7 + 18) = 52;
          v23 = *(float *)&v31.m128i_i32[2] / v20;
          *(float *)v7 = v21 / v19;
          *((float *)v7 + 1) = v22;
          *((float *)v7 + 2) = v23;
        }
        else
        {
          if ( v11 == 69 )
          {
            v13 = _mm_loadu_si128((const __m128i *)v4);
            v31 = *(__m128i *)v7;
            v32 = v13;
            if ( *(float *)v13.m128i_i32 == 0.0
              || (v14 = *(float *)&v32.m128i_i32[1], *(float *)&v32.m128i_i32[1] == 0.0)
              || (v15 = *(float *)&v32.m128i_i32[2], *(float *)&v32.m128i_i32[2] == 0.0)
              || (v16 = *(float *)&v32.m128i_i32[3], *(float *)&v32.m128i_i32[3] == 0.0) )
            {
              v30 = 1340;
              goto LABEL_3;
            }
            v17 = *(float *)v31.m128i_i32 / *(float *)v13.m128i_i32;
            *((_DWORD *)v7 + 18) = 69;
            *(float *)v32.m128i_i32 = v17;
            *(float *)&v32.m128i_i32[1] = *(float *)&v31.m128i_i32[1] / v14;
            *(float *)&v32.m128i_i32[2] = *(float *)&v31.m128i_i32[2] / v15;
            *(float *)&v32.m128i_i32[3] = *(float *)&v31.m128i_i32[3] / v16;
            v12 = v32;
          }
          else
          {
            if ( v11 != 71 )
            {
              v30 = 1392;
              goto LABEL_3;
            }
            v32 = *(__m128i *)v7;
            v31 = _mm_loadu_si128((const __m128i *)v4);
            if ( *(float *)v31.m128i_i32 == 0.0
              || *(float *)&v31.m128i_i32[1] == 0.0
              || *(float *)&v31.m128i_i32[2] == 0.0
              || *(float *)&v31.m128i_i32[3] == 0.0 )
            {
              v30 = 1364;
              goto LABEL_3;
            }
            D3DXQuaternionInverse((struct D2DQuaternion *)v33, (const struct D2DQuaternion *)&v31);
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v31,
              (const struct D2DQuaternion *)v33,
              (const struct D2DQuaternion *)&v32);
            v12 = v31;
            *((_DWORD *)v7 + 18) = 71;
          }
          *(__m128i *)v7 = v12;
        }
LABEL_46:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v24 = *(float *)v4;
      v25 = *(float *)v7;
      v26 = *((float *)v7 + 1);
      v27 = *((float *)v4 + 1);
      if ( *(float *)v4 == 0.0 || v27 == 0.0 )
      {
        v30 = 1296;
        goto LABEL_3;
      }
      *((_DWORD *)v7 + 18) = 35;
      v28 = v25 / v24;
      *((float *)v7 + 1) = v26 / v27;
    }
    *(float *)v7 = v28;
    goto LABEL_46;
  }
  v30 = 1241;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v30,
    0LL);
  return v2;
}
