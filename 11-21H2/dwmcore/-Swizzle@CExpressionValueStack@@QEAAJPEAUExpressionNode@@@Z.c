/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800E9580
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800710E0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800525D0 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800E9898 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(__int64 this, struct ExpressionNode *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  char IsEnabled; // al
  unsigned int v6; // edx
  CExpressionValue *v7; // rax
  CExpressionValue *v8; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v10; // edi
  unsigned int v11; // r13d
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // r14d
  __int64 i; // r8
  __int64 v16; // rdx
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-99h]
  __int128 v30; // [rsp+50h] [rbp-69h] BYREF
  __int128 v31; // [rsp+60h] [rbp-59h]
  __int128 v32; // [rsp+70h] [rbp-49h]
  __int128 v33; // [rsp+80h] [rbp-39h]
  float v34[20]; // [rsp+90h] [rbp-29h] BYREF

  v3 = this;
  if ( !*(_DWORD *)(this + 16) )
  {
    v29 = 7828;
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 == 101 )
  {
    v4 = 4LL;
LABEL_7:
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v6 = *(_DWORD *)(v3 + 16) - 1;
    if ( IsEnabled && v6 >= *(_DWORD *)(v3 + 48) )
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v34);
      v8 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v34);
    }
    else
    {
      v8 = (CExpressionValue *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)(v3 + 24), v6);
    }
    memset_0(v34, 0, 0x40uLL);
    memset_0(&v30, 0, 0x40uLL);
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)v8 + 18));
    v10 = *((unsigned __int8 *)a2 + v4 + 4);
    v11 = ExpressionTypeChannelCount;
    v13 = CExpressionValue::CopyIntoFloatArray(v8, v12, v34);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        this,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        v13,
        0x1EC2u);
      return v14;
    }
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)((char *)a2 + v4) == 1 )
      {
        LOBYTE(v13) = *((_BYTE *)a2 + v4 + 4) - i;
        this = (unsigned int)(2 * v13 - 2);
        v16 = (*((unsigned __int8 *)a2 + v4 + 8) >> (2 * v13 - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)((char *)a2 + v4) != 2 )
        {
          v29 = 7900;
          goto LABEL_40;
        }
        this = 4 * (*((unsigned __int8 *)a2 + v4 + 4) - (unsigned int)i) - 4;
        v16 = (*(_QWORD *)((char *)a2 + v4 + 8) >> (4 * (*((_BYTE *)a2 + v4 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v16 >= v11 )
      {
        v29 = 7911;
        goto LABEL_40;
      }
      if ( (unsigned int)i >= 0x10 )
      {
        v29 = 7922;
        goto LABEL_40;
      }
      v13 = LODWORD(v34[v16]);
      *((_DWORD *)&v30 + i) = v13;
    }
    v17 = v10 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 2;
            if ( v21 )
            {
              if ( v21 != 10 )
              {
                v29 = 7968;
                goto LABEL_40;
              }
              v22 = v31;
              *(_OWORD *)v8 = v30;
              *((_DWORD *)v8 + 18) = 265;
              v23 = v32;
              *((_OWORD *)v8 + 1) = v22;
              v24 = v33;
              *((_OWORD *)v8 + 2) = v23;
              *((_OWORD *)v8 + 3) = v24;
            }
            else
            {
              v25 = _mm_unpacklo_ps((__m128)(unsigned int)v31, (__m128)DWORD1(v31)).m128_u64[0];
              *(_OWORD *)v8 = v30;
              *((_DWORD *)v8 + 18) = 104;
              *((_QWORD *)v8 + 2) = v25;
            }
          }
          else
          {
            v26 = v30;
            *((_DWORD *)v8 + 18) = 69;
            *(_OWORD *)v8 = v26;
          }
        }
        else
        {
          v27 = DWORD2(v30);
          *(_QWORD *)v8 = _mm_unpacklo_ps((__m128)(unsigned int)v30, (__m128)DWORD1(v30)).m128_u64[0];
          *((_DWORD *)v8 + 2) = v27;
          *((_DWORD *)v8 + 18) = 52;
        }
        goto LABEL_37;
      }
      *((_DWORD *)v8 + 1) = DWORD1(v30);
      *((_DWORD *)v8 + 18) = 35;
    }
    else
    {
      *((_DWORD *)v8 + 18) = 18;
    }
    *(_DWORD *)v8 = v30;
LABEL_37:
    *((_BYTE *)v8 + 76) = 1;
    return v14;
  }
  if ( *(_DWORD *)a2 == 102 )
  {
    v4 = 8LL;
    goto LABEL_7;
  }
  v29 = 7853;
LABEL_40:
  v14 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1LL,
    -2147467259,
    v29);
  return v14;
}
