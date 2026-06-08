/*
 * XREFs of LpiEnumerateDependencies @ 0x1C003BF50
 * Callers:
 *     LpiEnumerateDependencies @ 0x1C003BF50 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3A0 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001E80 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_S @ 0x1C00059E8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0006D90 (WPP_RECORDER_SF_Sd.c)
 *     LpiEnumerateDependencies @ 0x1C003BF50 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiEnumerateDependencies(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        _DWORD *a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // r9d
  unsigned int v12; // esi
  unsigned int v13; // r10d
  __int64 v14; // rbx
  __int64 v15; // r13
  _DWORD *v17; // r14
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // r11
  unsigned int v21; // ecx
  int v22; // r9d
  __int64 DevExtFromIndex; // r15
  __int64 v24; // r12
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r12
  unsigned int v32; // eax
  const wchar_t *v33; // rax
  unsigned __int16 v34; // r9
  const wchar_t *v35; // rax
  unsigned __int16 v36; // r9
  __int64 result; // rax
  __int64 v38; // [rsp+38h] [rbp-61h]
  unsigned int v39; // [rsp+68h] [rbp-31h] BYREF
  int v40; // [rsp+6Ch] [rbp-2Dh]
  int v41; // [rsp+70h] [rbp-29h]
  unsigned int v42; // [rsp+74h] [rbp-25h]
  unsigned int v43; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-1Dh] BYREF
  _DWORD *v45; // [rsp+80h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-11h]
  __int64 v47; // [rsp+90h] [rbp-9h]

  v44 = 0;
  v11 = 0;
  v43 = 0;
  v12 = 0;
  v39 = 0;
  v13 = a3;
  v14 = (__int64)a9;
  v15 = 0LL;
  v17 = a1;
  v18 = a2;
  v19 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v20 = 5 * v18;
  v45 = a9;
  v46 = 5 * v18;
  if ( !a1[10 * v18 + 9] )
    goto LABEL_20;
  while ( 1 )
  {
    v21 = *(_DWORD *)(*(_QWORD *)&v17[2 * v20 + 10] + 4 * v15);
    if ( v21 != -1 )
      break;
LABEL_18:
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v17[2 * v20 + 9] )
    {
      v18 = a2;
LABEL_20:
      v27 = 0LL;
      if ( *v17 )
      {
        v28 = a11;
        while ( 1 )
        {
          if ( (_DWORD)v27 != (_DWORD)v18 )
          {
            v29 = 5 * v27;
            v47 = 5 * v27;
            if ( v17[10 * v27 + 8] == (_DWORD)v18 )
            {
              v30 = *(_QWORD *)&v17[10 * v27 + 6];
              if ( v30 )
              {
                v31 = 0LL;
                v40 = v19 + 1;
                v25 = 0LL;
                v39 = 0;
                if ( !*(_DWORD *)(v30 + 16) )
                  goto LABEL_54;
                do
                {
                  if ( *(_DWORD *)(v30 + 80 * v31 + 44) > v13 )
                  {
                    if ( a11 )
                    {
                      KeOrAffinityEx2(a11, 320LL * (unsigned int)(v31 + *(_DWORD *)(a4 + 4 * v27)) + a5 + 48, a11);
                      LODWORD(v25) = v39;
                      v13 = a3;
                    }
                    if ( a10 )
                    {
                      *(_BYTE *)(a10 + 4LL * (unsigned int)v25) = *(_BYTE *)(a4 + 4 * v27) + v31;
                      *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
                      *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
                      *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
                      LODWORD(v25) = v39;
                    }
                    v25 = (unsigned int)(v25 + 1);
                    v39 = v25;
                  }
                  v31 = (unsigned int)(v31 + 1);
                }
                while ( (unsigned int)v31 < *(_DWORD *)(v30 + 16) );
                v14 = (__int64)v45;
                v12 = v42;
                v17 = a1;
                if ( !(_DWORD)v25 )
                {
                  v29 = v47;
LABEL_54:
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    return 3221225473LL;
                  v33 = *(const wchar_t **)&v17[2 * v29 + 4];
                  v34 = 15;
LABEL_41:
                  LODWORD(v38) = v13;
                  WPP_RECORDER_SF_Sd(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v25,
                    v18,
                    v34,
                    (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids,
                    v33,
                    v38);
                  return 3221225473LL;
                }
                if ( v45 )
                {
                  *v45 = -1;
                  v32 = v39;
                  *(_QWORD *)(v14 + 8) = a10;
                  *(_DWORD *)(v14 + 4) = v32;
                  v14 += 16LL;
                  LODWORD(v25) = v39;
                  v45 = (_DWORD *)v14;
                  a10 += 4LL * v39;
                }
                v28 = a11;
                if ( (unsigned int)v25 > v12 )
                  v12 = v25;
                v11 = v25 + v41;
                v19 = v40;
              }
              else
              {
                result = LpiEnumerateDependencies(
                           (_DWORD)v17,
                           v27,
                           v13,
                           a4,
                           a5,
                           (__int64)&v44,
                           (__int64)&v39,
                           (__int64)&v43,
                           v14,
                           a10,
                           v28);
                if ( (int)result < 0 )
                  return result;
                if ( v43 > v12 )
                  v12 = v43;
                v19 = v44 + v40;
                v14 += 16LL * v44;
                v40 += v44;
                v11 = v39 + v41;
                v45 = (_DWORD *)v14;
                a10 += 4LL * v39;
              }
              v18 = a2;
              v41 = v11;
              v42 = v12;
            }
          }
          v27 = (unsigned int)(v27 + 1);
          if ( (unsigned int)v27 >= *v17 )
          {
            v20 = v46;
            break;
          }
          v13 = a3;
        }
      }
      if ( v19 )
      {
        *a6 = v19;
        *a7 = v11;
        *a8 = v12;
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225473LL;
      v35 = *(const wchar_t **)&v17[2 * v20 + 4];
      v36 = 16;
LABEL_44:
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v36,
        (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids,
        v35);
      return 3221225473LL;
    }
  }
  v40 = v19 + 1;
  DevExtFromIndex = GetDevExtFromIndex(v21);
  v24 = *(_QWORD *)(DevExtFromIndex + 544);
  if ( !v24 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225473LL;
    v35 = *(const wchar_t **)(DevExtFromIndex + 64);
    v36 = 13;
    goto LABEL_44;
  }
  if ( a11 )
  {
    KeAddProcessorAffinityEx(a11, *(unsigned int *)(DevExtFromIndex + 56));
    v22 = v41;
    v13 = a3;
    v20 = v46;
  }
  v25 = 0LL;
  v18 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v24 + 16) )
  {
    do
    {
      if ( *(_DWORD *)(v24 + 80 * v18 + 44) > v13 )
      {
        if ( a10 )
        {
          *(_BYTE *)(a10 + 4 * v25) = v18;
          *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
          *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
          *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
          LODWORD(v25) = v39;
        }
        v25 = (unsigned int)(v25 + 1);
        v39 = v25;
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *(_DWORD *)(v24 + 16) );
    if ( (_DWORD)v25 )
    {
      if ( v14 )
      {
        v26 = *(_DWORD *)(DevExtFromIndex + 56);
        *(_QWORD *)(v14 + 8) = a10;
        a10 += 4 * v25;
        *(_DWORD *)v14 = v26;
        *(_DWORD *)(v14 + 4) = v25;
        v14 += 16LL;
        v45 = (_DWORD *)v14;
      }
      if ( (unsigned int)v25 > v12 )
        v12 = v25;
      v11 = v25 + v22;
      v19 = v40;
      v41 = v11;
      v42 = v12;
      goto LABEL_18;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = *(const wchar_t **)(DevExtFromIndex + 64);
    v34 = 14;
    goto LABEL_41;
  }
  return 3221225473LL;
}
