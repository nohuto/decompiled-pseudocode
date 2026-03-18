/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18009D534
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18009C260 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18009D974 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18022BDC0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C3B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  bool v4; // di
  int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // r9d
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( !*((_QWORD *)this + 45) )
  {
    v9 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0x1F9u, 0LL);
LABEL_3:
    v11 = v9;
LABEL_61:
    v19 = v9;
    v24 = 1483;
    goto LABEL_62;
  }
  if ( a2 + 8 < a2 )
  {
    v9 = -2147024362;
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1FDu, 0LL);
    goto LABEL_61;
  }
  if ( a2 + 8 > *((_DWORD *)this + 92) )
  {
    v9 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x202u, 0LL);
    goto LABEL_3;
  }
  v11 = 0;
  v12 = *((_QWORD *)this + 45) + a2;
  v13 = *(_DWORD *)v12;
  if ( !*(_DWORD *)v12 )
    goto LABEL_58;
  if ( v13 > 52 )
  {
    v20 = v13 - 69;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v17 = v22 - 33;
          if ( !v17 )
          {
            v18 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
            v11 = v18;
            if ( v18 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 104;
              *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 24);
              goto LABEL_55;
            }
            v24 = 1553;
            goto LABEL_18;
          }
          if ( v17 == 161 )
          {
            v18 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
            v11 = v18;
            if ( v18 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)(v12 + 24);
              *((_OWORD *)a3 + 2) = *(_OWORD *)(v12 + 40);
              *((_OWORD *)a3 + 3) = *(_OWORD *)(v12 + 56);
              goto LABEL_55;
            }
            v24 = 1560;
            goto LABEL_18;
          }
LABEL_39:
          v11 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x63Bu, 0LL);
          return v11;
        }
        v18 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v11 = v18;
        if ( v18 < 0 )
        {
          v24 = 1546;
          goto LABEL_18;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        v18 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v11 = v18;
        if ( v18 < 0 )
        {
          v24 = 1539;
          goto LABEL_18;
        }
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      v18 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v11 = v18;
      if ( v18 < 0 )
      {
        v24 = 1532;
        goto LABEL_18;
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
    goto LABEL_55;
  }
  if ( v13 == 52 )
  {
    v18 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
    v11 = v18;
    if ( v18 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v12 + 16);
      goto LABEL_55;
    }
    v24 = 1525;
    goto LABEL_18;
  }
  v14 = v13 - 11;
  if ( v14 )
  {
    v15 = v14 - 6;
    if ( !v15 )
    {
      v18 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v11 = v18;
      if ( v18 >= 0 )
      {
        *(_BYTE *)a3 = *(_BYTE *)(v12 + 8);
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_55;
      }
      v24 = 1504;
      goto LABEL_18;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v18 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v11 = v18;
      if ( v18 >= 0 )
      {
        *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_55;
      }
      v24 = 1511;
      goto LABEL_18;
    }
    v17 = v16 - 17;
    if ( !v17 )
    {
      v18 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v11 = v18;
      if ( v18 >= 0 )
      {
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)(v12 + 8);
        goto LABEL_55;
      }
      v24 = 1518;
LABEL_18:
      v19 = v18;
LABEL_62:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v19, v24, 0LL);
      return v11;
    }
    if ( v17 == 7 )
    {
      v18 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v11 = v18;
      if ( v18 >= 0 )
      {
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)(v12 + 8);
LABEL_55:
        *((_BYTE *)a3 + 76) = 1;
        if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
          CExpression::LogCacheAccess(this, 1, a2, a3);
        v4 = 1;
LABEL_58:
        *a4 = v4;
        return v11;
      }
      v24 = 1567;
      goto LABEL_18;
    }
    goto LABEL_39;
  }
  if ( *((_DWORD *)a3 + 18) == 11 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v11 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x635u, 0LL);
  return v11;
}
