/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C0043A68
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003E18C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     DecodeAcpiIdleState @ 0x1C002C818 (DecodeAcpiIdleState.c)
 *     ValidateCoordinatedLpiDependencies @ 0x1C003722C (ValidateCoordinatedLpiDependencies.c)
 *     ValidateCoordinatedLpiStates @ 0x1C00373A4 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0043618 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // rdx
  int v7; // ebx
  _DWORD *Pool2; // rsi
  unsigned int v9; // ecx
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // r12
  unsigned int *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  unsigned int *v18; // r12
  char *v19; // r13
  __int64 v20; // rdx
  unsigned int v21; // ebx
  _DWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r15
  unsigned int v25; // ecx
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // r8
  char *v29; // rdi
  unsigned int *v30; // r8
  int v31; // ecx
  int v32; // eax
  unsigned int *v33; // rbx
  char v34; // al
  __int64 v35; // rcx
  char *v36; // rdx
  unsigned __int16 v37; // r9
  unsigned int j; // [rsp+68h] [rbp-81h] BYREF
  unsigned int i; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v41; // [rsp+70h] [rbp-79h] BYREF
  char *v42; // [rsp+78h] [rbp-71h]
  _DWORD *v43; // [rsp+80h] [rbp-69h] BYREF
  unsigned int *v44; // [rsp+88h] [rbp-61h]
  __int64 v45; // [rsp+90h] [rbp-59h]
  unsigned int *v46; // [rsp+98h] [rbp-51h]
  _OWORD v47[9]; // [rsp+A8h] [rbp-41h] BYREF

  j = 0;
  v41 = 0;
  memset(v47, 0, 0x58uLL);
  v42 = 0LL;
  v7 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C001E368, v6);
  if ( v7 >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 4LL * *a2, 1919119952LL);
    if ( Pool2 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      i = 0;
      v12 = 0LL;
      if ( *a2 )
      {
        do
        {
          Pool2[v12] = v10;
          v13 = *(unsigned int **)&a2[10 * v12 + 6];
          v44 = v13;
          if ( v13 )
          {
            v14 = v13[4];
            v15 = 0;
            v10 += v14;
            if ( v14 )
            {
              do
              {
                v7 = LpiEnumerateDependencies(
                       a2,
                       v12,
                       v15,
                       (__int64)Pool2,
                       0LL,
                       &j,
                       &v41,
                       (unsigned int *)&v43,
                       0LL,
                       0LL,
                       0LL);
                if ( v7 < 0 )
                  goto LABEL_42;
                ++v15;
                v9 = v41 + i;
                v11 += j;
                i += v41;
              }
              while ( v15 < v44[4] );
            }
          }
          v12 = (unsigned int)(v12 + 1);
        }
        while ( (unsigned int)v12 < *a2 );
        if ( !v10 )
          goto LABEL_41;
        v16 = (320 * v10 + 55) & 0xFFFFFFF8;
        v17 = v16 + 16 * v11;
        v18 = (unsigned int *)ExAllocatePool2(64LL, v17 + 4 * v9, 1919119952LL);
        if ( !v18 )
        {
          v7 = -1073741670;
          goto LABEL_42;
        }
        v19 = (char *)ExAllocatePool2(64LL, 56LL * v10, 1919119952LL);
        if ( !v19 )
        {
          v7 = -1073741670;
LABEL_15:
          ExFreePoolWithTag(v18, (ULONG)1919119952);
          goto LABEL_43;
        }
        v20 = v16;
        v21 = 0;
        v22 = (unsigned int *)((char *)v18 + v20);
        *v18 = v10;
        v43 = v22;
        v42 = (char *)v18 + v17;
        for ( i = 0; v21 < *a2; i = v21 )
        {
          v23 = v21;
          v24 = *(_QWORD *)&a2[10 * v21 + 6];
          if ( v24 )
          {
            v25 = 0;
            for ( j = 0; v25 < *(_DWORD *)(v24 + 16); j = v25 )
            {
              v26 = 80LL * v25;
              v27 = 56LL * (v25 + Pool2[v23]);
              v28 = 5LL * (v25 + Pool2[v23]);
              v45 = v26;
              v29 = &v19[v27];
              v30 = &v18[16 * v28 + 12];
              v31 = 5 * *(_DWORD *)(v26 + v24 + 28);
              v44 = v30;
              v30[72] = 2 * v31;
              v32 = *(_DWORD *)(v26 + v24 + 24);
              *((_QWORD *)v30 + 39) = v22;
              *(_WORD *)((char *)v30 + 305) = 257;
              v30[73] = 10 * v32;
              *(_OWORD *)(v30 + 66) = *(_OWORD *)(v26 + v24 + 88);
              *((_QWORD *)v30 + 35) = *(_QWORD *)(v24 + 8);
              KeInitializeAffinityEx2(v30, 32LL);
              v46 = v44 + 75;
              v7 = LpiEnumerateDependencies(
                     a2,
                     v21,
                     j,
                     (__int64)Pool2,
                     (__int64)v18,
                     v44 + 75,
                     &v41,
                     v44 + 74,
                     v43,
                     (__int64)v42,
                     (__int64)v44);
              if ( v7 < 0 )
                goto LABEL_15;
              v33 = v44;
              if ( (unsigned int)KeIsEqualAffinityEx(v44, &unk_1C001E0E0) )
              {
                *((_BYTE *)v33 + 304) = 1;
                v34 = 1;
              }
              else
              {
                v34 = *((_BYTE *)v33 + 304);
              }
              v35 = v45;
              v29[48] = v34;
              v36 = (char *)(v24 + v35 + 48);
              *((_QWORD *)v29 + 4) = *(_QWORD *)(v35 + v24 + 52);
              if ( *v36 != 126 )
              {
                v7 = DecodeAcpiIdleState(
                       a1,
                       v36,
                       0xFFFFFFFF,
                       *(unsigned int *)(v35 + v24 + 36),
                       0LL,
                       0LL,
                       0LL,
                       (__int64)v47);
                if ( v7 < 0 )
                  goto LABEL_15;
                *(_QWORD *)v29 = *((_QWORD *)&v47[1] + 1);
                *(_OWORD *)(v29 + 8) = v47[2];
                *((_QWORD *)v29 + 3) = *(_QWORD *)&v47[3];
                *((_QWORD *)v29 + 5) = *(_QWORD *)&v47[4];
              }
              if ( byte_1C001E5B1 )
              {
                if ( !v29[48] )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v37 = 17;
LABEL_39:
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      3u,
                      v37,
                      (__int64)&WPP_9bf9ea1396ef38c0fc270c70a626dd86_Traceguids);
                  }
LABEL_40:
                  v7 = -1073741637;
                  goto LABEL_15;
                }
                if ( *(_QWORD *)v29 || *((_QWORD *)v29 + 4) )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v37 = 18;
                    goto LABEL_39;
                  }
                  goto LABEL_40;
                }
              }
              v21 = i;
              v23 = i;
              v22 = &v43[4 * *v46];
              v43 = v22;
              v42 += 4 * v41;
              v25 = j + 1;
            }
          }
          ++v21;
        }
        v7 = ValidateCoordinatedLpiDependencies(v18);
        if ( v7 < 0 )
          goto LABEL_15;
        v7 = 0;
        *a3 = v18;
        *a4 = Pool2;
        *a5 = v19;
      }
      else
      {
LABEL_41:
        v7 = -1073741637;
LABEL_42:
        v19 = v42;
LABEL_43:
        ExFreePoolWithTag(Pool2, (ULONG)1919119952);
        if ( v19 )
          ExFreePoolWithTag(v19, (ULONG)1919119952);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
