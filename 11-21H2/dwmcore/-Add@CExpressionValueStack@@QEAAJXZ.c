/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800175E8
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
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18026C9B0 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v2; // ebp
  char IsEnabled; // al
  float *v4; // rdi
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  float *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  CExpressionValue *v10; // rax
  int v11; // eax
  _OWORD *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  unsigned int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned int v25; // [rsp+20h] [rbp-88h]
  __int128 v26; // [rsp+30h] [rbp-78h]
  _BYTE v27[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( IsEnabled && (unsigned int)v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    else
    {
      v7 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v5);
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v9 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( v8 && (unsigned int)v9 >= *((_DWORD *)this + 12) )
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v9);
    }
    v11 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v11 != *((_DWORD *)v4 + 18) )
    {
      v25 = 884;
      goto LABEL_3;
    }
    switch ( v11 )
    {
      case 18:
        v13 = *v4;
        *((_DWORD *)v7 + 18) = 18;
        break;
      case 35:
        v22 = *v4 + *v7;
        v23 = v4[1] + v7[1];
        *((_DWORD *)v7 + 18) = 35;
        *v7 = v22;
        v7[1] = v23;
        goto LABEL_28;
      case 52:
        v13 = *v4;
        v20 = v4[1] + v7[1];
        v21 = v4[2] + v7[2];
        *((_DWORD *)v7 + 18) = 52;
        v7[1] = v20;
        v7[2] = v21;
        break;
      case 69:
        *(float *)&v26 = *v4 + *v7;
        *(float *)&v18 = v4[2] + v7[2];
        *((float *)&v26 + 1) = v4[1] + v7[1];
        *(float *)&v19 = v4[3] + v7[3];
        *((_DWORD *)v7 + 18) = 69;
        *((_QWORD *)&v26 + 1) = __PAIR64__(v19, v18);
        *(_OWORD *)v7 = v26;
        goto LABEL_28;
      case 104:
        v13 = *v4;
        v14 = v4[2] + v7[2];
        v15 = v4[3] + v7[3];
        v16 = v4[4] + v7[4];
        v17 = v4[5] + v7[5];
        v7[1] = v4[1] + v7[1];
        v7[2] = v14;
        v7[3] = v15;
        v7[4] = v16;
        v7[5] = v17;
        *((_DWORD *)v7 + 18) = 104;
        break;
      case 265:
        v12 = (_OWORD *)D2DMatrix::operator+(v7, v27, v4);
        *((_DWORD *)v7 + 18) = 265;
        *(_OWORD *)v7 = *v12;
        *((_OWORD *)v7 + 1) = v12[1];
        *((_OWORD *)v7 + 2) = v12[2];
        *((_OWORD *)v7 + 3) = v12[3];
LABEL_28:
        *((_BYTE *)v7 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v2;
      default:
        v25 = 939;
        goto LABEL_3;
    }
    *v7 = v13 + *v7;
    goto LABEL_28;
  }
  v25 = 856;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25,
    0LL);
  return v2;
}
