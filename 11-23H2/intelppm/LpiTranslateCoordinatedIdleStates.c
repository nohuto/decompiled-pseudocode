/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C0044C98
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003F368 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     DecodeAcpiIdleState @ 0x1C002D668 (DecodeAcpiIdleState.c)
 *     ValidateCoordinatedLpiDependencies @ 0x1C0038704 (ValidateCoordinatedLpiDependencies.c)
 *     ValidateCoordinatedLpiStates @ 0x1C0038888 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0044848 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // edi
  void *v7; // r13
  __int64 v8; // rdx
  int v9; // ebx
  _DWORD *v10; // r12
  int v11; // esi
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // esi
  unsigned int *Pool2; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // ebx
  _DWORD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int j; // r13d
  __int64 v27; // r10
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned int *v31; // r9
  _BYTE *v32; // rbx
  __int64 v33; // rcx
  char *v34; // rdx
  __int64 v35; // r13
  unsigned __int16 v36; // r9
  int v38; // [rsp+68h] [rbp-81h]
  unsigned int i; // [rsp+68h] [rbp-81h]
  unsigned int v40; // [rsp+6Ch] [rbp-7Dh] BYREF
  __int64 v41; // [rsp+70h] [rbp-79h] BYREF
  _DWORD *v42; // [rsp+78h] [rbp-71h] BYREF
  PVOID P; // [rsp+80h] [rbp-69h]
  unsigned int *v44; // [rsp+88h] [rbp-61h]
  __int64 v45; // [rsp+90h] [rbp-59h]
  __int64 v46; // [rsp+98h] [rbp-51h]
  unsigned __int64 v47; // [rsp+A0h] [rbp-49h] BYREF
  unsigned int *v48; // [rsp+A8h] [rbp-41h]
  _OWORD v49[8]; // [rsp+B0h] [rbp-39h] BYREF

  v5 = 0;
  LODWORD(v41) = 0;
  v40 = 0;
  memset(v49, 0, 0x58uLL);
  v7 = 0LL;
  v47 = 0LL;
  v9 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C001F6B8, v8);
  if ( v9 >= 0 )
  {
    P = (PVOID)ExAllocatePool2(64LL, 4LL * *a2, 1919119952LL);
    v10 = P;
    if ( P )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v38 = 0;
      if ( *a2 )
      {
        do
        {
          v10[v13] = v5;
          v14 = *(unsigned int **)&a2[10 * v13 + 6];
          v44 = v14;
          if ( v14 )
          {
            v15 = v14[4];
            v16 = 0;
            v5 += v15;
            if ( v15 )
            {
              do
              {
                v9 = LpiEnumerateDependencies(
                       a2,
                       v13,
                       v16,
                       (__int64)P,
                       0LL,
                       &v41,
                       &v40,
                       (unsigned int *)&v42,
                       0LL,
                       0LL,
                       0LL);
                if ( v9 < 0 )
                  goto LABEL_44;
                ++v16;
                v12 = v40 + v38;
                v11 += v41;
                v38 += v40;
              }
              while ( v16 < v44[4] );
            }
            v10 = P;
          }
          ++v13;
        }
        while ( v13 < *a2 );
        if ( !v5 )
          goto LABEL_43;
        v17 = (320 * v5 + 55) & 0xFFFFFFF8;
        v18 = v17 + 16 * v11;
        Pool2 = (unsigned int *)ExAllocatePool2(64LL, v18 + 4 * v12, 1919119952LL);
        if ( !Pool2 )
        {
          v9 = -1073741670;
          goto LABEL_44;
        }
        v45 = ExAllocatePool2(64LL, 56LL * v5, 1919119952LL);
        v20 = v45;
        if ( !v45 )
        {
          v9 = -1073741670;
LABEL_16:
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
          v7 = (void *)v45;
          goto LABEL_44;
        }
        v21 = v17;
        v22 = 0;
        v23 = (unsigned int *)((char *)Pool2 + v21);
        *Pool2 = v5;
        v42 = v23;
        v41 = (__int64)Pool2 + v18;
        for ( i = 0; v22 < *a2; i = v22 )
        {
          v24 = v22;
          v25 = *(_QWORD *)&a2[10 * v22 + 6];
          if ( v25 )
          {
            for ( j = 0; j < *(_DWORD *)(v25 + 16); v24 = i )
            {
              v27 = 80LL * j;
              v28 = 56LL * (j + v10[v24]);
              v29 = 5LL * (j + v10[v24]);
              v46 = v27;
              v30 = v20 + v28;
              v31 = &Pool2[16 * v29 + 12];
              LODWORD(v29) = *(_DWORD *)(v27 + v25 + 28);
              v44 = v31;
              v31[72] = 10 * v29;
              LODWORD(v29) = *(_DWORD *)(v27 + v25 + 24);
              *(_WORD *)((char *)v31 + 305) = 257;
              *((_QWORD *)v31 + 39) = v23;
              v31[73] = 10 * v29;
              *(_OWORD *)(v31 + 66) = *(_OWORD *)(v27 + v25 + 88);
              *((_QWORD *)v31 + 35) = *(_QWORD *)(v25 + 8);
              KeInitializeAffinityEx2(v31, 32LL);
              v48 = v44 + 75;
              v9 = LpiEnumerateDependencies(
                     a2,
                     v22,
                     j,
                     (__int64)v10,
                     (__int64)Pool2,
                     v44 + 75,
                     &v40,
                     v44 + 74,
                     v42,
                     v41,
                     (__int64)v44);
              if ( v9 < 0 )
                goto LABEL_16;
              v32 = v44 + 76;
              if ( (unsigned int)KeIsEqualAffinityEx(v44, &unk_1C001F420) )
                *v32 = 1;
              v33 = v46;
              *(_BYTE *)(v30 + 48) = *v32;
              v34 = (char *)(v25 + v33 + 48);
              *(_QWORD *)(v30 + 32) = *(_QWORD *)(v33 + v25 + 52);
              if ( *v34 != 126 )
              {
                v9 = DecodeAcpiIdleState(
                       a1,
                       v34,
                       0xFFFFFFFF,
                       *(unsigned int *)(v33 + v25 + 36),
                       &v47,
                       0LL,
                       0LL,
                       (__int64)v49);
                if ( v9 < 0 )
                  goto LABEL_16;
                *(_QWORD *)v30 = *((_QWORD *)&v49[1] + 1);
                *(_OWORD *)(v30 + 8) = v49[2];
                *(_QWORD *)(v30 + 24) = *(_QWORD *)&v49[3];
                *(_QWORD *)(v30 + 40) = *(_QWORD *)&v49[4];
                if ( HIBYTE(word_1C001F901) )
                {
                  if ( j >= 3 )
                    DWORD2(v49[2]) = 3;
                  else
                    DWORD2(v49[2]) = j + 1;
                }
              }
              if ( (_BYTE)word_1C001F901 )
              {
                if ( !*(_BYTE *)(v30 + 48) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v36 = 17;
LABEL_41:
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      3u,
                      v36,
                      (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids);
                  }
LABEL_42:
                  v9 = -1073741637;
                  goto LABEL_16;
                }
                if ( *(_QWORD *)v30 || *(_QWORD *)(v30 + 32) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v36 = 18;
                    goto LABEL_41;
                  }
                  goto LABEL_42;
                }
              }
              ++j;
              v22 = i;
              v20 = v45;
              v23 = &v42[4 * *v48];
              v42 = v23;
              v41 += 4LL * v40;
            }
          }
          ++v22;
        }
        v9 = ValidateCoordinatedLpiDependencies(Pool2);
        if ( v9 < 0 )
          goto LABEL_16;
        v9 = 0;
        v35 = v45;
        *a3 = Pool2;
        *a4 = v10;
        *a5 = v35;
      }
      else
      {
LABEL_43:
        v9 = -1073741637;
LABEL_44:
        ExFreePoolWithTag(P, (ULONG)1919119952);
        if ( v7 )
          ExFreePoolWithTag(v7, (ULONG)1919119952);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
