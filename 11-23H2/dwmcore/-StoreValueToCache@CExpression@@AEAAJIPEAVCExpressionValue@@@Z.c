/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18009C5F0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18009C260 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18009D974 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C3B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int v26; // esi
  int v27; // ebp
  unsigned int v28; // ecx
  int v29; // esi
  int v30; // ebp
  unsigned int v31; // ecx
  unsigned int v33; // [rsp+20h] [rbp-18h]
  unsigned int v34; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 45) )
  {
    v4 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0x1F9u, 0LL);
LABEL_3:
    v6 = v4;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x542u, 0LL);
    return v6;
  }
  if ( a2 + 8 < a2 )
  {
    v4 = -2147024362;
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1FDu, 0LL);
    goto LABEL_55;
  }
  if ( a2 + 8 > *((_DWORD *)this + 92) )
  {
    v4 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x202u, 0LL);
    goto LABEL_3;
  }
  v7 = *((_QWORD *)this + 45) + a2;
  if ( !*(_DWORD *)v7 )
    *(_DWORD *)v7 = *((_DWORD *)a3 + 18);
  v8 = *((_DWORD *)a3 + 18);
  if ( v8 == 18 )
  {
    if ( *((_QWORD *)this + 45) )
    {
      if ( a2 + 12 < a2 )
      {
        v30 = -2147024362;
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1FDu, 0LL);
        goto LABEL_53;
      }
      if ( a2 + 12 <= *((_DWORD *)this + 92) )
      {
        v6 = 0;
        *(_DWORD *)(v7 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v29 = -2147483637;
      v34 = 514;
    }
    else
    {
      v29 = -2147418113;
      v34 = 505;
    }
    v30 = v29;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v29, v34, 0LL);
    v6 = v29;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x561u, 0LL);
    return v6;
  }
  if ( v8 == 104 )
  {
    if ( *((_QWORD *)this + 45) )
    {
      if ( a2 + 32 < a2 )
      {
        v27 = -2147024362;
        v6 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1FDu, 0LL);
        goto LABEL_44;
      }
      if ( a2 + 32 <= *((_DWORD *)this + 92) )
      {
        v6 = 0;
        *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
        *(_QWORD *)(v7 + 24) = *((_QWORD *)a3 + 2);
        return v6;
      }
      v26 = -2147483637;
      v33 = 514;
    }
    else
    {
      v26 = -2147418113;
      v33 = 505;
    }
    v27 = v26;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v26, v33, 0LL);
    v6 = v26;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x58Bu, 0LL);
    return v6;
  }
  switch ( v8 )
  {
    case 11:
      MicrosoftTelemetryAssertTriggeredNoArgs();
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024809, 0x5ADu, 0LL);
      break;
    case 17:
      v9 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x55Au, 0LL);
      else
        *(_BYTE *)(v7 + 8) = *(_BYTE *)a3;
      break;
    case 35:
      v11 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x568u, 0LL);
      else
        *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
      break;
    case 42:
      v23 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x599u, 0LL);
      else
        *(_DWORD *)(v7 + 8) = *(_DWORD *)a3;
      break;
    case 52:
      v13 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x56Fu, 0LL);
      }
      else
      {
        *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
        *(_DWORD *)(v7 + 16) = *((_DWORD *)a3 + 2);
      }
      break;
    case 69:
      v15 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v15;
      if ( v15 >= 0 )
        goto LABEL_22;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x576u, 0LL);
      break;
    case 70:
      v17 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v17;
      if ( v17 >= 0 )
        goto LABEL_22;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x57Du, 0LL);
      break;
    case 71:
      v19 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v19;
      if ( v19 >= 0 )
LABEL_22:
        *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
      else
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x584u, 0LL);
      break;
    case 265:
      v21 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
      v6 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x592u, 0LL);
      }
      else
      {
        *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
        *(_OWORD *)(v7 + 24) = *((_OWORD *)a3 + 1);
        *(_OWORD *)(v7 + 40) = *((_OWORD *)a3 + 2);
        *(_OWORD *)(v7 + 56) = *((_OWORD *)a3 + 3);
      }
      break;
    default:
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x5B3u, 0LL);
      break;
  }
  return v6;
}
