/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C097C
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF690 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800C0DCC (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NXZ @ 0x18011A024 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2460007739@@@details@wil@@QEAA_NX.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18022C340 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C9A4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  __int64 v5; // r15
  unsigned int v8; // ecx
  bool v9; // bl
  int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // r14
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // r9d
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v5 = a2;
  v9 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2460007739>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2460007739>::GetImpl'::`2'::impl)
    && !*((_QWORD *)this + 45) )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147418113, 0x20Au, 0LL);
LABEL_4:
    v12 = v10;
LABEL_62:
    v20 = v10;
    v25 = 1515;
    goto LABEL_63;
  }
  if ( (int)v5 + 8 < (unsigned int)v5 )
  {
    v10 = -2147024362;
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0x20Fu, 0LL);
    goto LABEL_62;
  }
  if ( (unsigned int)(v5 + 8) > *((_DWORD *)this + 92) )
  {
    v10 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147483637, 0x214u, 0LL);
    goto LABEL_4;
  }
  v12 = 0;
  v13 = *((_QWORD *)this + 45) + v5;
  v14 = *(_DWORD *)v13;
  if ( !*(_DWORD *)v13 )
    goto LABEL_59;
  if ( v14 > 52 )
  {
    v21 = v14 - 69;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v18 = v23 - 33;
          if ( !v18 )
          {
            v19 = CExpression::EnsureCacheBounds(this, v5, 0x20uLL);
            v12 = v19;
            if ( v19 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 104;
              *(_OWORD *)a3 = *(_OWORD *)(v13 + 8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)(v13 + 24);
              goto LABEL_56;
            }
            v25 = 1585;
            goto LABEL_19;
          }
          if ( v18 == 161 )
          {
            v19 = CExpression::EnsureCacheBounds(this, v5, 0x48uLL);
            v12 = v19;
            if ( v19 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)(v13 + 8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)(v13 + 24);
              *((_OWORD *)a3 + 2) = *(_OWORD *)(v13 + 40);
              *((_OWORD *)a3 + 3) = *(_OWORD *)(v13 + 56);
              goto LABEL_56;
            }
            v25 = 1592;
            goto LABEL_19;
          }
LABEL_40:
          v12 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x65Bu, 0LL);
          return v12;
        }
        v19 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
        v12 = v19;
        if ( v19 < 0 )
        {
          v25 = 1578;
          goto LABEL_19;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        v19 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
        v12 = v19;
        if ( v19 < 0 )
        {
          v25 = 1571;
          goto LABEL_19;
        }
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      v19 = CExpression::EnsureCacheBounds(this, v5, 0x18uLL);
      v12 = v19;
      if ( v19 < 0 )
      {
        v25 = 1564;
        goto LABEL_19;
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v13 + 8);
    goto LABEL_56;
  }
  if ( v14 == 52 )
  {
    v19 = CExpression::EnsureCacheBounds(this, v5, 0x14uLL);
    v12 = v19;
    if ( v19 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v13 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v13 + 16);
      goto LABEL_56;
    }
    v25 = 1557;
    goto LABEL_19;
  }
  v15 = v14 - 11;
  if ( v15 )
  {
    v16 = v15 - 6;
    if ( !v16 )
    {
      v19 = CExpression::EnsureCacheBounds(this, v5, 0xCuLL);
      v12 = v19;
      if ( v19 >= 0 )
      {
        *(_BYTE *)a3 = *(_BYTE *)(v13 + 8);
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_56;
      }
      v25 = 1536;
      goto LABEL_19;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v19 = CExpression::EnsureCacheBounds(this, v5, 0xCuLL);
      v12 = v19;
      if ( v19 >= 0 )
      {
        *(_DWORD *)a3 = *(_DWORD *)(v13 + 8);
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_56;
      }
      v25 = 1543;
      goto LABEL_19;
    }
    v18 = v17 - 17;
    if ( !v18 )
    {
      v19 = CExpression::EnsureCacheBounds(this, v5, 0x10uLL);
      v12 = v19;
      if ( v19 >= 0 )
      {
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)(v13 + 8);
        goto LABEL_56;
      }
      v25 = 1550;
LABEL_19:
      v20 = v19;
LABEL_63:
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v20, v25, 0LL);
      return v12;
    }
    if ( v18 == 7 )
    {
      v19 = CExpression::EnsureCacheBounds(this, v5, 0xCuLL);
      v12 = v19;
      if ( v19 >= 0 )
      {
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)(v13 + 8);
LABEL_56:
        *((_BYTE *)a3 + 76) = 1;
        if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
          CExpression::LogCacheAccess(this, 1, v5, a3);
        v9 = 1;
LABEL_59:
        *a4 = v9;
        return v12;
      }
      v25 = 1599;
      goto LABEL_19;
    }
    goto LABEL_40;
  }
  if ( *((_DWORD *)a3 + 18) == 11 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v12 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x655u, 0LL);
  return v12;
}
