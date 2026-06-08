/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C003B414
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003279C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E5D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     ValidateLpiState @ 0x1C002E8DC (ValidateLpiState.c)
 *     DecodeAcpiIdleState @ 0x1C0035598 (DecodeAcpiIdleState.c)
 *     LpiEnumerateDependencies @ 0x1C003AFC4 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  unsigned int *v6; // r15
  int v7; // ebx
  unsigned int i; // edi
  __int64 v9; // r14
  unsigned int j; // esi
  _DWORD *Pool2; // rsi
  unsigned int v12; // edi
  int v13; // r15d
  int v14; // ecx
  unsigned int k; // r14d
  __int64 v16; // rax
  unsigned int v17; // r12d
  PVOID v18; // r12
  unsigned int v19; // ebx
  unsigned int v20; // r15d
  unsigned int *v21; // r14
  _DWORD *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 m; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rbx
  char *v30; // rdi
  __int64 v31; // rbx
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rbx
  char v35; // al
  __int64 v36; // rcx
  char *v37; // rdx
  unsigned __int16 v38; // r9
  __int64 n; // rdi
  __int64 v40; // r12
  unsigned int ii; // r15d
  _DWORD *v42; // rdx
  PVOID v43; // rcx
  unsigned int v45; // [rsp+68h] [rbp-81h] BYREF
  PVOID P; // [rsp+70h] [rbp-79h]
  unsigned int v47; // [rsp+78h] [rbp-71h] BYREF
  __int64 v48; // [rsp+80h] [rbp-69h]
  _DWORD *v49; // [rsp+88h] [rbp-61h] BYREF
  __int64 v50; // [rsp+90h] [rbp-59h]
  __int64 v51; // [rsp+98h] [rbp-51h]
  unsigned int *v52; // [rsp+A0h] [rbp-49h]
  _OWORD v53[9]; // [rsp+A8h] [rbp-41h] BYREF

  v45 = 0;
  v47 = 0;
  memset(v53, 0, 0x58uLL);
  v6 = (unsigned int *)qword_1C0011AC8;
  P = 0LL;
  if ( !qword_1C0011AC8 )
    return (unsigned int)-1073741823;
  for ( i = 0; i < *v6; ++i )
  {
    v9 = *(_QWORD *)&v6[10 * i + 6];
    if ( v9 )
    {
      for ( j = 0; j < *(_DWORD *)(v9 + 16); ++j )
      {
        v7 = ValidateLpiState(v9 + 80LL * j + 24, 1);
        if ( v7 < 0 )
          return (unsigned int)v7;
      }
    }
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 4LL * *a2, 1919119952LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v12 = 0;
  LODWORD(v48) = 0;
  v13 = 0;
  v14 = 0;
  for ( k = 0; k < *a2; ++k )
  {
    Pool2[k] = v12;
    v16 = *(_QWORD *)&a2[10 * k + 6];
    v50 = v16;
    if ( v16 )
    {
      v12 += *(_DWORD *)(v16 + 16);
      v17 = 0;
      while ( v17 < *(_DWORD *)(v16 + 16) )
      {
        v7 = LpiEnumerateDependencies(a2, k, v17, (__int64)Pool2, 0LL, &v45, &v47, (unsigned int *)&v49, 0LL, 0LL, 0LL);
        if ( v7 < 0 )
          goto LABEL_23;
        ++v17;
        v14 = v47 + v48;
        v13 += v45;
        v16 = v50;
        LODWORD(v48) = v47 + v48;
      }
    }
  }
  if ( !v12 )
  {
    v7 = -1073741637;
LABEL_23:
    v18 = P;
LABEL_24:
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
LABEL_25:
    if ( v18 )
      ExFreePoolWithTag(v18, (ULONG)1919119952);
    return (unsigned int)v7;
  }
  v19 = (320 * v12 + 55) & 0xFFFFFFF8;
  v20 = v19 + 16 * v13;
  v21 = (unsigned int *)ExAllocatePool2(64LL, v20 + 4 * v14, 1919119952LL);
  if ( !v21 )
  {
    v7 = -1073741670;
    goto LABEL_23;
  }
  P = (PVOID)ExAllocatePool2(64LL, 56LL * v12, 1919119952LL);
  v18 = P;
  if ( !P )
  {
    v7 = -1073741670;
LABEL_54:
    ExFreePoolWithTag(v21, (ULONG)1919119952);
    if ( !Pool2 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v22 = (unsigned int *)((char *)v21 + v19);
  v49 = v22;
  v48 = (__int64)v21 + v20;
  v23 = 0LL;
  *v21 = v12;
  while ( (unsigned int)v23 < *a2 )
  {
    v24 = (unsigned int)v23;
    v25 = *(_QWORD *)&a2[10 * v23 + 6];
    if ( v25 )
    {
      for ( m = 0LL; ; m = v45 + 1 )
      {
        v45 = m;
        if ( (unsigned int)m >= *(_DWORD *)(v25 + 16) )
          break;
        v27 = 80 * m;
        v28 = 56LL * (unsigned int)(m + Pool2[v24]);
        v29 = 5LL * (unsigned int)(m + Pool2[v24]);
        v51 = 80 * m;
        v30 = (char *)P + v28;
        v31 = (__int64)&v21[16 * v29 + 12];
        v32 = 10 * *(_DWORD *)(80 * m + v25 + 28);
        v50 = v31;
        *(_DWORD *)(v31 + 288) = v32;
        v33 = *(_DWORD *)(v27 + v25 + 24);
        *(_QWORD *)(v31 + 312) = v22;
        *(_WORD *)(v31 + 305) = 257;
        *(_DWORD *)(v31 + 292) = 10 * v33;
        *(_OWORD *)(v31 + 264) = *(_OWORD *)(v27 + v25 + 88);
        *(_QWORD *)(v31 + 280) = *(_QWORD *)(v25 + 8);
        KeInitializeAffinityEx2(v31, 32LL);
        v52 = (unsigned int *)(v31 + 300);
        v7 = LpiEnumerateDependencies(
               a2,
               v23,
               v45,
               (__int64)Pool2,
               (__int64)v21,
               (_DWORD *)(v31 + 300),
               &v47,
               (unsigned int *)(v31 + 296),
               v49,
               v48,
               v31);
        if ( v7 < 0 )
          goto LABEL_53;
        v34 = v50;
        if ( (unsigned int)KeIsEqualAffinityEx(v50, &unk_1C0011840) )
        {
          *(_BYTE *)(v34 + 304) = 1;
          v35 = 1;
        }
        else
        {
          v35 = *(_BYTE *)(v34 + 304);
        }
        v36 = v51;
        v30[48] = v35;
        v37 = (char *)(v25 + v36 + 48);
        *((_QWORD *)v30 + 4) = *(_QWORD *)(v36 + v25 + 52);
        if ( *v37 != 126 )
        {
          v7 = DecodeAcpiIdleState(a1, v37, 0xFFFFFFFF, *(unsigned int *)(v36 + v25 + 36), 0LL, 0LL, 0LL, (__int64)v53);
          if ( v7 < 0 )
            goto LABEL_53;
          *(_QWORD *)v30 = *((_QWORD *)&v53[1] + 1);
          *(_OWORD *)(v30 + 8) = v53[2];
          *((_QWORD *)v30 + 3) = *(_QWORD *)&v53[3];
          *((_QWORD *)v30 + 5) = *(_QWORD *)&v53[4];
        }
        if ( byte_1C0011D11 )
        {
          if ( !v30[48] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v38 = 17;
LABEL_51:
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                3u,
                v38,
                (__int64)&WPP_9bf9ea1396ef38c0fc270c70a626dd86_Traceguids);
            }
LABEL_52:
            v7 = -1073741637;
            goto LABEL_53;
          }
          if ( *(_QWORD *)v30 || *((_QWORD *)v30 + 4) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v38 = 18;
              goto LABEL_51;
            }
            goto LABEL_52;
          }
        }
        v24 = (unsigned int)v23;
        v22 = &v49[4 * *v52];
        v49 = v22;
        v48 += 4LL * v47;
      }
    }
    v23 = (unsigned int)(v23 + 1);
  }
  for ( n = 0LL; (unsigned int)n < *v21; n = (unsigned int)(n + 1) )
  {
    v40 = 80 * n;
    for ( ii = 0; ii < v21[v40 + 87]; ++ii )
    {
      v42 = (_DWORD *)(*(_QWORD *)&v21[v40 + 90] + 16LL * ii);
      if ( *v42 != -1 )
      {
        v7 = ValidateCoordinatedLpiDependenciesProcessor((__int64)&v21[v40 + 12], (__int64)v42);
        if ( v7 < 0 )
        {
LABEL_53:
          v18 = P;
          goto LABEL_54;
        }
      }
    }
  }
  v7 = 0;
  v43 = P;
  *a3 = v21;
  *a4 = Pool2;
  *a5 = v43;
  return (unsigned int)v7;
}
