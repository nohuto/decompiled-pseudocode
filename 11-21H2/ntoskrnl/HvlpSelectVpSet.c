/*
 * XREFs of HvlpSelectVpSet @ 0x140544EF0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlIsSingleGroupRequired @ 0x1403C2F24 (HvlIsSingleGroupRequired.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1405440C4 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x140544868 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140647C04 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r15
  unsigned int v5; // ebp
  _DWORD *v6; // rsi
  _WORD *v7; // rcx
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  __int16 *v14; // r10
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned __int16 *v17; // rcx
  bool IsSingleGroupRequired; // al
  __int64 v19; // r10
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int *v22; // rdx
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rbp
  int v26; // r8d
  _WORD *v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rcx
  int v30; // r9d
  __int64 v31; // r10
  unsigned int v32; // r8d
  int v33; // ecx
  __int64 v34; // rax
  _BYTE *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // esi
  _BYTE *v38; // rbp
  _BYTE *v39; // rax
  unsigned int v40; // r9d
  unsigned int v41; // r8d
  __int64 v42; // rcx
  _BYTE *v43; // rsi
  __int64 v44; // rcx
  char v45; // r12
  unsigned int v46; // ebp
  __int64 v47; // rsi
  char v48; // al
  unsigned int v49; // r8d
  _WORD *v50; // rdx
  unsigned int v51; // ecx
  __int128 v53; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v54[64]; // [rsp+40h] [rbp-78h] BYREF

  v2 = a1;
  v53 = 0LL;
  HvlpMinrootConfigurationError = 0;
  HviGetImplementationLimits(&v53);
  if ( (HvlpFlags & 0x800000) == 0 || (HvlpRootFlags & 0x800) != 0 )
  {
    v4 = 0;
    if ( !(_DWORD)v2 )
      goto LABEL_65;
LABEL_8:
    v7 = (_WORD *)(a2 + 8);
    v8 = v2;
    do
    {
      v7[2] = *v7;
      v9 = 0;
      *(v7 - 4) = 1;
      if ( (HvlpRootFlags & 0x800) == 0 )
        v9 = *((_BYTE *)v7 - 6);
      *((_BYTE *)v7 - 5) = v9;
      v7 += 20;
      --v8;
    }
    while ( v8 );
    if ( !v4 )
      goto LABEL_65;
    goto LABEL_13;
  }
  v4 = 1;
  v5 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (_DWORD *)(a2 + 28);
    while ( 1 )
    {
      HvlpComputeLpComparisonMetrics(v2, a2, v5);
      if ( *((_BYTE *)v6 - 26) )
      {
        if ( !*v6 )
          break;
      }
      ++v5;
      v6 += 10;
      if ( v5 >= (unsigned int)v2 )
        goto LABEL_8;
    }
    v4 = 0;
    goto LABEL_8;
  }
LABEL_13:
  if ( (KeRootProcPerNodeSpecified & 1) != 0 )
  {
    KeRootProcPerNodeSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcPerCoreSpecified & 1) != 0 )
  {
    KeRootProcPerCoreSpecified = 0;
    HvlpMinrootConfigurationError = 1;
  }
  if ( (KeRootProcSpecified & 1) != 0 )
  {
    HvlpMinrootConfigurationError = 1;
    ++KeRootProcSpecified;
  }
  v10 = KeRootProcNumaNodesSpecified;
  if ( KeRootProcNumaNodesSpecified )
  {
    v11 = 0;
    do
    {
      if ( KeRootProcNumaNodes[v11] == *(_WORD *)(a2 + 8) )
        break;
      ++v11;
    }
    while ( v11 < KeRootProcNumaNodesSpecified );
    if ( v11 == KeRootProcNumaNodesSpecified )
    {
      v10 = 0;
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
  if ( !KeRootProcSpecified )
    goto LABEL_54;
  memset(v54, 0, sizeof(v54));
  v12 = 0;
  if ( !v10 )
    v10 = (unsigned __int16)KeNumberNodes;
  v13 = 0;
  if ( !v10 )
  {
LABEL_47:
    if ( KeRootProcNumaNodesSpecified )
    {
      KeRootProcNumaNodesSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
    goto LABEL_54;
  }
  v14 = KeRootProcNumaNodes;
  do
  {
    if ( KeRootProcNumaNodesSpecified )
    {
      v15 = (unsigned __int16)*v14;
      if ( (unsigned int)v15 >= 0x40 || v54[v15] )
        goto LABEL_45;
      v54[v15] = 1;
    }
    else
    {
      LODWORD(v15) = v13;
    }
    v16 = 0;
    if ( (_DWORD)v2 )
    {
      v17 = (unsigned __int16 *)(a2 + 8);
      while ( !*((_BYTE *)v17 - 6) || *v17 != (_DWORD)v15 )
      {
        ++v16;
        v17 += 20;
        if ( v16 >= (unsigned int)v2 )
          goto LABEL_45;
      }
      ++v12;
    }
LABEL_45:
    ++v13;
    ++v14;
  }
  while ( v13 < v10 );
  if ( !v12 )
    goto LABEL_47;
  if ( KeRootProcSpecified <= v12 )
  {
    IsSingleGroupRequired = HvlIsSingleGroupRequired();
    HvlpMinrootConfigurationError = 1;
    if ( IsSingleGroupRequired )
    {
      KeRootProcSpecified = 64;
      if ( v12 >= 0x40 )
      {
        KeRootProcNumaNodes[0] = *(_WORD *)(a2 + 8);
        KeRootProcNumaNodesSpecified = 1;
      }
    }
    else
    {
      KeRootProcSpecified = 0;
    }
  }
LABEL_54:
  if ( KeRootProcNumaNodeLpsSpecified )
  {
    v19 = KeRootProcNumaNodeLps[*(unsigned __int16 *)(a2 + 8)];
    if ( (v19 & 1) == 0 )
      goto LABEL_62;
    v20 = 1;
    v21 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
    if ( (unsigned int)v2 > 1 )
    {
      v22 = (unsigned int *)(a2 + 76);
      while ( (v21 & *(v22 - 8)) != (v21 & *(_DWORD *)(a2 + 4)) || _bittest64(&v19, *v22) )
      {
        ++v20;
        v22 += 10;
        if ( v20 >= (unsigned int)v2 )
          goto LABEL_65;
      }
LABEL_62:
      if ( HvlIsSingleGroupRequired() )
      {
        KeRootProcNumaNodes[0] = *(_WORD *)(a2 + 8);
        KeRootProcSpecified = 64;
        KeRootProcNumaNodesSpecified = 1;
      }
      KeRootProcNumaNodeLpsSpecified = 0;
      HvlpMinrootConfigurationError = 1;
    }
  }
LABEL_65:
  *(_BYTE *)(a2 + 1) = 1;
  *(_BYTE *)(a2 + 3) = 1;
  v23 = 1;
  while ( 2 )
  {
    if ( (_DWORD)v2 )
    {
      v24 = a2;
      v25 = v2;
      do
      {
        if ( *(_BYTE *)v24 )
        {
          if ( *(_BYTE *)(v24 + 1) || !*(_BYTE *)(v24 + 2) || v23 == (_DWORD)v53 )
            goto LABEL_95;
          if ( KeRootProcPerNodeSpecified )
          {
            v26 = 0;
            v27 = (_WORD *)(a2 + 8);
            v28 = v2;
            do
            {
              if ( *((_BYTE *)v27 - 7) && *v27 == *(_WORD *)(v24 + 8) )
                ++v26;
              v27 += 20;
              --v28;
            }
            while ( v28 );
            if ( v26 == KeRootProcPerNodeSpecified )
              goto LABEL_95;
          }
          if ( KeRootProcPerCoreSpecified )
          {
            v29 = (_DWORD *)(a2 + 4);
            v30 = 0;
            v31 = v2;
            v32 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v29 - 3) && (v32 & *v29) == (v32 & *(_DWORD *)(v24 + 4)) )
                ++v30;
              v29 += 10;
              --v31;
            }
            while ( v31 );
            if ( v30 == KeRootProcPerCoreSpecified )
              goto LABEL_95;
          }
          if ( KeRootProcNumaNodesSpecified )
          {
            v33 = 0;
            while ( KeRootProcNumaNodes[v33] != *(_WORD *)(v24 + 12) )
            {
              if ( ++v33 >= (unsigned int)KeRootProcNumaNodesSpecified )
                goto LABEL_95;
            }
          }
          if ( KeRootProcSpecified && v23 == KeRootProcSpecified
            || KeRootProcNumaNodeLpsSpecified
            && (v34 = KeRootProcNumaNodeLps[*(unsigned __int16 *)(v24 + 8)],
                !_bittest64(&v34, *(unsigned int *)(v24 + 36))) )
          {
LABEL_95:
            *(_BYTE *)v24 = 0;
          }
        }
        v24 += 40LL;
        --v25;
      }
      while ( v25 );
      v35 = (_BYTE *)a2;
      v36 = 0;
      while ( !*v35 )
      {
        ++v36;
        v35 += 40;
        if ( v36 >= (unsigned int)v2 )
          goto LABEL_102;
      }
      goto LABEL_103;
    }
    v36 = 0;
LABEL_102:
    if ( v36 != (_DWORD)v2 )
    {
LABEL_103:
      v37 = 0;
      if ( (_DWORD)v2 )
      {
        v38 = (_BYTE *)a2;
        do
        {
          if ( *v38 )
            HvlpComputeLpComparisonMetrics(v2, a2, v37);
          ++v37;
          v38 += 40;
        }
        while ( v37 < (unsigned int)v2 );
        v39 = (_BYTE *)a2;
        v40 = 0;
        while ( !*v39 )
        {
          ++v40;
          v39 += 40;
          if ( v40 >= (unsigned int)v2 )
          {
            v41 = 0;
            v40 = -1;
            goto LABEL_113;
          }
        }
        v41 = v40 + 1;
        if ( v40 + 1 >= (unsigned int)v2 )
          goto LABEL_120;
LABEL_113:
        v42 = 5LL * v41;
        v43 = (_BYTE *)(a2 + 40LL * v41);
        do
        {
          if ( *v43 )
          {
            if ( (unsigned int)HvlpLpComparison(v42, a2, v41, v40) == -1 )
              v40 = v41;
          }
          ++v41;
          v43 += 40;
        }
        while ( v41 < (unsigned int)v2 );
      }
      else
      {
        v40 = -1;
      }
LABEL_120:
      ++v23;
      v44 = 5LL * v40;
      *(_BYTE *)(a2 + 8 * v44 + 1) = 1;
      *(_BYTE *)(a2 + 8 * v44 + 3) = 1;
      continue;
    }
    break;
  }
  v45 = 0;
  if ( v4 )
  {
    v46 = 1;
    if ( (unsigned int)v2 > 1 )
    {
      v47 = a2 + 41;
      do
      {
        if ( *(_BYTE *)v47 )
        {
          HvlpComputeLpComparisonMetrics(v2, a2, v46);
          if ( !*(_DWORD *)(v47 + 27) )
          {
            *(_BYTE *)v47 = 0;
            v48 = 0;
            if ( (HvlpRootFlags & 0x800) == 0 )
              v48 = *(_BYTE *)(v47 + 1);
            *(_BYTE *)(v47 + 2) = v48;
            v45 = 1;
            HvlpMinrootConfigurationError = 1;
          }
        }
        ++v46;
        v47 += 40LL;
      }
      while ( v46 < (unsigned int)v2 );
    }
  }
  if ( !KeRootProcNumaNodesSpecified && !KeRootProcNumaNodeLpsSpecified && !v45 )
  {
    v49 = 0;
    if ( (_DWORD)v2 )
    {
      v50 = (_WORD *)(a2 + 8);
      do
      {
        if ( *((_BYTE *)v50 - 6) )
        {
          v51 = 0;
          while ( *(_WORD *)(a2 + 40LL * v51 + 8) != *v50 || !*(_BYTE *)(a2 + 40LL * v51 + 1) )
          {
            if ( ++v51 >= (unsigned int)v2 )
            {
              if ( v51 != (_DWORD)v2 )
                break;
              return 3221225473LL;
            }
          }
        }
        ++v49;
        v50 += 20;
      }
      while ( v49 < (unsigned int)v2 );
    }
  }
  return 0LL;
}
