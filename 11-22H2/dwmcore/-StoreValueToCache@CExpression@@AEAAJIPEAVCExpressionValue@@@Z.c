/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800BFA20
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF690 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800C0DCC (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NXZ @ 0x18011A024 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NX.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C9A4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ecx
  int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  int v30; // esi
  int v31; // ebp
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  int v34; // esi
  int v35; // ebp
  unsigned int v36; // ecx
  unsigned int v38; // [rsp+20h] [rbp-18h]
  unsigned int v39; // [rsp+20h] [rbp-18h]

  v4 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl)
    && !*((_QWORD *)this + 45) )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147418113, 0x20Au, 0LL);
LABEL_4:
    v9 = v7;
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x562u, 0LL);
    return v9;
  }
  if ( (int)v4 + 8 < (unsigned int)v4 )
  {
    v7 = -2147024362;
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0x20Fu, 0LL);
    goto LABEL_58;
  }
  if ( (unsigned int)(v4 + 8) > *((_DWORD *)this + 92) )
  {
    v7 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147483637, 0x214u, 0LL);
    goto LABEL_4;
  }
  v10 = *((_QWORD *)this + 45) + v4;
  if ( !*(_DWORD *)v10 )
    *(_DWORD *)v10 = *((_DWORD *)a3 + 18);
  v11 = *((_DWORD *)a3 + 18);
  if ( v11 == 18 )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl)
      || *((_QWORD *)this + 45) )
    {
      if ( (int)v4 + 12 < (unsigned int)v4 )
      {
        v35 = -2147024362;
        v9 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147024362, 0x20Fu, 0LL);
        goto LABEL_56;
      }
      if ( (unsigned int)(v4 + 12) <= *((_DWORD *)this + 92) )
      {
        v9 = 0;
        *(_DWORD *)(v10 + 8) = *(_DWORD *)a3;
        return v9;
      }
      v34 = -2147483637;
      v39 = 532;
    }
    else
    {
      v34 = -2147418113;
      v39 = 522;
    }
    v35 = v34;
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v34, v39, 0LL);
    v9 = v34;
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x581u, 0LL);
    return v9;
  }
  if ( v11 == 104 )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl)
      || *((_QWORD *)this + 45) )
    {
      if ( (int)v4 + 32 < (unsigned int)v4 )
      {
        v31 = -2147024362;
        v9 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0x20Fu, 0LL);
        goto LABEL_46;
      }
      if ( (unsigned int)(v4 + 32) <= *((_DWORD *)this + 92) )
      {
        v9 = 0;
        *(_OWORD *)(v10 + 8) = *(_OWORD *)a3;
        *(_QWORD *)(v10 + 24) = *((_QWORD *)a3 + 2);
        return v9;
      }
      v30 = -2147483637;
      v38 = 532;
    }
    else
    {
      v30 = -2147418113;
      v38 = 522;
    }
    v31 = v30;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v30, v38, 0LL);
    v9 = v30;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x5ABu, 0LL);
    return v9;
  }
  switch ( v11 )
  {
    case 11:
      MicrosoftTelemetryAssertTriggeredNoArgs();
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024809, 0x5CDu, 0LL);
      break;
    case 17:
      v12 = CExpression::EnsureCacheBounds(this, v4, 0xCuLL);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x57Au, 0LL);
      else
        *(_BYTE *)(v10 + 8) = *(_BYTE *)a3;
      break;
    case 35:
      v14 = CExpression::EnsureCacheBounds(this, v4, 0x10uLL);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x588u, 0LL);
      else
        *(_QWORD *)(v10 + 8) = *(_QWORD *)a3;
      break;
    case 42:
      v26 = CExpression::EnsureCacheBounds(this, v4, 0xCuLL);
      v9 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x5B9u, 0LL);
      else
        *(_DWORD *)(v10 + 8) = *(_DWORD *)a3;
      break;
    case 52:
      v16 = CExpression::EnsureCacheBounds(this, v4, 0x14uLL);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x58Fu, 0LL);
      }
      else
      {
        *(_QWORD *)(v10 + 8) = *(_QWORD *)a3;
        *(_DWORD *)(v10 + 16) = *((_DWORD *)a3 + 2);
      }
      break;
    case 69:
      v18 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v9 = v18;
      if ( v18 >= 0 )
        goto LABEL_23;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x596u, 0LL);
      break;
    case 70:
      v20 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v9 = v20;
      if ( v20 >= 0 )
        goto LABEL_23;
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x59Du, 0LL);
      break;
    case 71:
      v22 = CExpression::EnsureCacheBounds(this, v4, 0x18uLL);
      v9 = v22;
      if ( v22 >= 0 )
LABEL_23:
        *(_OWORD *)(v10 + 8) = *(_OWORD *)a3;
      else
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x5A4u, 0LL);
      break;
    case 265:
      v24 = CExpression::EnsureCacheBounds(this, v4, 0x48uLL);
      v9 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x5B2u, 0LL);
      }
      else
      {
        *(_OWORD *)(v10 + 8) = *(_OWORD *)a3;
        *(_OWORD *)(v10 + 24) = *((_OWORD *)a3 + 1);
        *(_OWORD *)(v10 + 40) = *((_OWORD *)a3 + 2);
        *(_OWORD *)(v10 + 56) = *((_OWORD *)a3 + 3);
      }
      break;
    default:
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x5D3u, 0LL);
      break;
  }
  return v9;
}
