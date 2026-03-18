/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180019920
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
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x18026C65C (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v2; // ebp
  char IsEnabled; // al
  float *v4; // rdi
  __int64 v5; // rdx
  CExpressionValue *v6; // rax
  void *v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  CExpressionValue *v10; // rax
  int v11; // eax
  _OWORD *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  unsigned int v35; // [rsp+20h] [rbp-98h]
  __int128 v36; // [rsp+30h] [rbp-88h]
  _BYTE v37[80]; // [rsp+40h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 4) >= 2u )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v4 = (float *)&CExpressionValueStack::s_emptyValue;
    v5 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( IsEnabled && (unsigned int)v5 >= *((_DWORD *)this + 12) )
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v37);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v37);
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
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v37);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v37);
    }
    else
    {
      v4 = (float *)DynArray<CExpressionValue,1>::operator[]((char *)this + 24, v9);
    }
    v11 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v11 == *((_DWORD *)v4 + 18) )
    {
      switch ( v11 )
      {
        case 18:
          v33 = *(float *)v7 - *v4;
          *((_DWORD *)v7 + 18) = 18;
          *(float *)v7 = v33;
          break;
        case 35:
          v31 = *(float *)v7 - *v4;
          v32 = *((float *)v7 + 1) - v4[1];
          *((_DWORD *)v7 + 18) = 35;
          *(float *)v7 = v31;
          *((float *)v7 + 1) = v32;
          break;
        case 52:
          v26 = v4[1];
          v27 = v4[2];
          v28 = *(float *)v7 - *v4;
          *((_DWORD *)v7 + 18) = 52;
          v29 = *((float *)v7 + 1) - v26;
          *(float *)v7 = v28;
          v30 = *((float *)v7 + 2) - v27;
          *((float *)v7 + 1) = v29;
          *((float *)v7 + 2) = v30;
          break;
        case 69:
          *(float *)&v36 = *(float *)v7 - *v4;
          *(float *)&v24 = *((float *)v7 + 2) - v4[2];
          *((float *)&v36 + 1) = *((float *)v7 + 1) - v4[1];
          *(float *)&v25 = *((float *)v7 + 3) - v4[3];
          *((_DWORD *)v7 + 18) = 69;
          *((_QWORD *)&v36 + 1) = __PAIR64__(v25, v24);
          *(_OWORD *)v7 = v36;
          break;
        case 104:
          v13 = v4[1];
          v14 = v4[2];
          v15 = v4[3];
          v16 = v4[4];
          v17 = v4[5];
          v18 = *(float *)v7 - *v4;
          *((_DWORD *)v7 + 18) = 104;
          v19 = *((float *)v7 + 1) - v13;
          *(float *)v7 = v18;
          v20 = *((float *)v7 + 2);
          *((float *)v7 + 1) = v19;
          v21 = *((float *)v7 + 3) - v15;
          *((float *)v7 + 2) = v20 - v14;
          v22 = *((float *)v7 + 4);
          *((float *)v7 + 3) = v21;
          v23 = *((float *)v7 + 5) - v17;
          *((float *)v7 + 4) = v22 - v16;
          *((float *)v7 + 5) = v23;
          break;
        case 265:
          v12 = (_OWORD *)D2DMatrix::operator-(v7, v37, v4);
          *((_DWORD *)v7 + 18) = 265;
          *(_OWORD *)v7 = *v12;
          *((_OWORD *)v7 + 1) = v12[1];
          *((_OWORD *)v7 + 2) = v12[2];
          *((_OWORD *)v7 + 3) = v12[3];
          break;
        default:
          v35 = 1049;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v35 = 995;
  }
  else
  {
    v35 = 972;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v35,
    0LL);
  return v2;
}
