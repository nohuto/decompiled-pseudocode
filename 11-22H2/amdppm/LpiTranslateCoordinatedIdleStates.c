/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C003C3B0
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00335E0 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002F404 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     ValidateLpiState @ 0x1C002F714 (ValidateLpiState.c)
 *     DecodeAcpiIdleState @ 0x1C0036440 (DecodeAcpiIdleState.c)
 *     LpiEnumerateDependencies @ 0x1C003BF60 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(__int64 a1, _DWORD *a2, unsigned int **a3, PVOID *a4, _QWORD *a5)
{
  _DWORD *v6; // r15
  int v7; // ebx
  __int64 i; // rdi
  __int64 v9; // r14
  __int64 j; // rsi
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // esi
  __int64 k; // r14
  __int64 v16; // r13
  unsigned int m; // r15d
  unsigned int v18; // ebx
  unsigned int v19; // esi
  unsigned int *Pool2; // r14
  char *v21; // rdx
  __int64 v22; // r13
  _DWORD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned int n; // esi
  PVOID v27; // rbx
  __int64 v28; // r10
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // rdi
  __int64 v32; // r9
  char *v33; // rbx
  __int64 v34; // rcx
  char *v35; // rdx
  unsigned __int16 v36; // r9
  __int64 ii; // rdi
  __int64 v38; // r15
  unsigned int jj; // esi
  _DWORD *v40; // rdx
  PVOID v41; // rdx
  unsigned int v43; // [rsp+68h] [rbp-81h] BYREF
  __int64 v44; // [rsp+70h] [rbp-79h]
  __int64 v45; // [rsp+78h] [rbp-71h] BYREF
  _DWORD *v46; // [rsp+80h] [rbp-69h] BYREF
  PVOID P; // [rsp+88h] [rbp-61h]
  PVOID v48; // [rsp+90h] [rbp-59h]
  __int64 v49; // [rsp+98h] [rbp-51h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-49h] BYREF
  unsigned int *v51; // [rsp+A8h] [rbp-41h]
  _OWORD v52[8]; // [rsp+B0h] [rbp-39h] BYREF

  LODWORD(v45) = 0;
  v43 = 0;
  memset(v52, 0, 0x58uLL);
  v50 = 0LL;
  v6 = (_DWORD *)qword_1C0012B78;
  v48 = 0LL;
  if ( !qword_1C0012B78 )
    return (unsigned int)-1073741823;
  for ( i = 0LL; (unsigned int)i < *v6; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)&v6[10 * i + 6];
    if ( v9 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v9 + 16); j = (unsigned int)(j + 1) )
      {
        v7 = ValidateLpiState(v9 + 80 * j + 24, 1);
        if ( v7 < 0 )
          return (unsigned int)v7;
      }
    }
  }
  P = (PVOID)ExAllocatePool2(64LL, 4LL * (unsigned int)*a2, 1919119952LL);
  v11 = P;
  if ( !P )
    return (unsigned int)-1073741670;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  LODWORD(v44) = 0;
  for ( k = 0LL; (unsigned int)k < *a2; k = (unsigned int)(k + 1) )
  {
    v11[k] = v13;
    v16 = *(_QWORD *)&a2[10 * k + 6];
    if ( v16 )
    {
      v13 += *(_DWORD *)(v16 + 16);
      for ( m = 0; m < *(_DWORD *)(v16 + 16); ++m )
      {
        v7 = LpiEnumerateDependencies(a2, k, m, (__int64)v11, 0LL, &v45, &v43, (unsigned int *)&v46, 0LL, 0LL, 0LL);
        if ( v7 < 0 )
          goto LABEL_28;
        v12 = v43 + v44;
        v14 += v45;
        v11 = P;
        LODWORD(v44) = v43 + v44;
      }
    }
  }
  if ( !v13 )
  {
    v7 = -1073741637;
    goto LABEL_28;
  }
  v18 = (320 * v13 + 55) & 0xFFFFFFF8;
  v19 = v18 + 16 * v14;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v19 + 4 * v12, 1919119952LL);
  if ( !Pool2 )
  {
    v7 = -1073741670;
LABEL_28:
    ExFreePoolWithTag(P, (ULONG)1919119952);
    if ( v48 )
      ExFreePoolWithTag(v48, (ULONG)1919119952);
    return (unsigned int)v7;
  }
  v48 = (PVOID)ExAllocatePool2(64LL, 56LL * v13, 1919119952LL);
  v21 = (char *)v48;
  if ( !v48 )
  {
    v7 = -1073741670;
LABEL_27:
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    goto LABEL_28;
  }
  v22 = 0LL;
  v23 = (unsigned int *)((char *)Pool2 + v18);
  v46 = v23;
  v44 = (__int64)Pool2 + v19;
  *Pool2 = v13;
  while ( (unsigned int)v22 < *a2 )
  {
    v24 = (unsigned int)v22;
    v25 = *(_QWORD *)&a2[10 * v22 + 6];
    if ( v25 )
    {
      for ( n = 0; n < *(_DWORD *)(v25 + 16); ++n )
      {
        v27 = P;
        v28 = 80LL * n;
        v29 = 56LL * (n + *((_DWORD *)P + v24));
        v30 = 5LL * (n + *((_DWORD *)P + v24));
        v49 = v28;
        v31 = &v21[v29];
        v32 = (__int64)&Pool2[16 * v30 + 12];
        LODWORD(v30) = *(_DWORD *)(v28 + v25 + 28);
        v45 = v32;
        *(_DWORD *)(v32 + 288) = 10 * v30;
        LODWORD(v30) = *(_DWORD *)(v28 + v25 + 24);
        *(_WORD *)(v32 + 305) = 257;
        *(_QWORD *)(v32 + 312) = v23;
        *(_DWORD *)(v32 + 292) = 10 * v30;
        *(_OWORD *)(v32 + 264) = *(_OWORD *)(v28 + v25 + 88);
        *(_QWORD *)(v32 + 280) = *(_QWORD *)(v25 + 8);
        KeInitializeAffinityEx2(v32, 32LL);
        v51 = (unsigned int *)(v45 + 300);
        v7 = LpiEnumerateDependencies(
               a2,
               v22,
               n,
               (__int64)v27,
               (__int64)Pool2,
               (_DWORD *)(v45 + 300),
               &v43,
               (unsigned int *)(v45 + 296),
               v46,
               v44,
               v45);
        if ( v7 < 0 )
          goto LABEL_27;
        v33 = (char *)(v45 + 304);
        if ( (unsigned int)KeIsEqualAffinityEx(v45, &unk_1C00128E0) )
          *v33 = 1;
        v34 = v49;
        v31[48] = *v33;
        v35 = (char *)(v25 + v34 + 48);
        *((_QWORD *)v31 + 4) = *(_QWORD *)(v34 + v25 + 52);
        if ( *v35 != 126 )
        {
          v7 = DecodeAcpiIdleState(a1, v35, 0xFFFFFFFF, *(unsigned int *)(v34 + v25 + 36), &v50, 0LL, 0LL, (__int64)v52);
          if ( v7 < 0 )
            goto LABEL_27;
          *(_QWORD *)v31 = *((_QWORD *)&v52[1] + 1);
          *(_OWORD *)(v31 + 8) = v52[2];
          *((_QWORD *)v31 + 3) = *(_QWORD *)&v52[3];
          *((_QWORD *)v31 + 5) = *(_QWORD *)&v52[4];
          if ( HIBYTE(word_1C0012DC1) )
          {
            if ( n >= 3 )
              DWORD2(v52[2]) = 3;
            else
              DWORD2(v52[2]) = n + 1;
          }
        }
        if ( (_BYTE)word_1C0012DC1 )
        {
          if ( !v31[48] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = 17;
LABEL_54:
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                3u,
                v36,
                (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids);
            }
LABEL_55:
            v7 = -1073741637;
            goto LABEL_27;
          }
          if ( *(_QWORD *)v31 || *((_QWORD *)v31 + 4) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v36 = 18;
              goto LABEL_54;
            }
            goto LABEL_55;
          }
        }
        v21 = (char *)v48;
        v23 = &v46[4 * *v51];
        v46 = v23;
        v44 += 4LL * v43;
        v24 = (unsigned int)v22;
      }
    }
    v22 = (unsigned int)(v22 + 1);
  }
  for ( ii = 0LL; (unsigned int)ii < *Pool2; ii = (unsigned int)(ii + 1) )
  {
    v38 = 80 * ii;
    for ( jj = 0; jj < Pool2[v38 + 87]; ++jj )
    {
      v40 = (_DWORD *)(*(_QWORD *)&Pool2[v38 + 90] + 16LL * jj);
      if ( *v40 != -1 )
      {
        v7 = ValidateCoordinatedLpiDependenciesProcessor((__int64)&Pool2[v38 + 12], (__int64)v40);
        if ( v7 < 0 )
          goto LABEL_27;
      }
    }
  }
  v7 = 0;
  v41 = v48;
  *a3 = Pool2;
  *a4 = P;
  *a5 = v41;
  return (unsigned int)v7;
}
