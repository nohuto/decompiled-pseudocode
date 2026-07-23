/*
 * XREFs of sub_1407D2C60 @ 0x1407D2C60
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeQueryTimeIncrement @ 0x1402F1D40 (KeQueryTimeIncrement.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D2C60(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void *v6; // r13
  unsigned int v7; // edi
  int v8; // esi
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // r8d
  __int64 v12; // r9
  unsigned int *v13; // rdx
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // rax
  unsigned int *v19; // rdx
  unsigned __int64 v20; // rdx
  _WORD *v21; // rsi
  char *v22; // r11
  unsigned int v23; // eax
  size_t v24; // r12
  WCHAR *Pool2; // rax
  WCHAR *v26; // rbx
  unsigned int *v27; // rcx
  unsigned int *v28; // rax
  unsigned int k; // r8d
  __int64 v30; // r9
  unsigned int *v31; // rdx
  unsigned int v32; // r8d
  unsigned int *v33; // rdx
  unsigned int *v34; // rax
  unsigned int m; // r8d
  __int64 v36; // rax
  unsigned int *v37; // rdx
  WCHAR *v38; // r15
  unsigned int v39; // r8d
  unsigned int *v40; // rax
  unsigned int v41; // r13d
  int v42; // ebx
  int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  int v47; // r10d
  int v48; // r9d
  unsigned int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // edx
  unsigned int v52; // r12d
  __int64 v53; // r15
  __int64 v54; // rbx
  ULONG TimeIncrement; // eax
  int v56; // r13d
  unsigned __int64 v57; // rbx
  void *v58; // rbx
  int v59; // eax
  int v60; // ecx
  double v61; // xmm0_8
  unsigned __int64 v62; // rax
  int v63; // eax
  NTSTATUS v64; // edx
  __int64 v65; // rbx
  ULONG v66; // eax
  __int64 v67; // rdx
  char *v68; // rax
  int v69; // r13d
  unsigned int v70; // r9d
  unsigned int v71; // edx
  unsigned int *v72; // r8
  unsigned int v73; // eax
  _DWORD *v74; // rax
  int v75; // esi
  unsigned int v76; // r9d
  __int64 v77; // r10
  unsigned int v78; // eax
  unsigned int v79; // ecx
  unsigned __int64 n; // rdx
  unsigned int v81; // eax
  __int64 v82; // r10
  int v83; // r11d
  unsigned int v84; // eax
  unsigned int v85; // ecx
  _DWORD *ii; // rdx
  unsigned int v87; // eax
  __int64 v88; // r10
  unsigned int v89; // eax
  unsigned int v90; // ecx
  unsigned int *kk; // rdx
  unsigned int v92; // eax
  __int64 v93; // r10
  unsigned int v94; // r11d
  unsigned int v95; // eax
  unsigned int v96; // ecx
  _DWORD *jj; // rdx
  unsigned int v98; // eax
  __int64 v99; // r10
  unsigned int v100; // eax
  unsigned int v101; // ecx
  _DWORD *v102; // rdx
  unsigned int v103; // eax
  void *Src; // [rsp+40h] [rbp-69h]
  unsigned int v106; // [rsp+48h] [rbp-61h]
  int v107; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v108; // [rsp+50h] [rbp-59h] BYREF
  unsigned int Size; // [rsp+54h] [rbp-55h]
  unsigned int Size_4; // [rsp+58h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+60h] [rbp-49h] BYREF
  int v112; // [rsp+68h] [rbp-41h] BYREF
  __int64 v113; // [rsp+70h] [rbp-39h]
  __int64 v114; // [rsp+78h] [rbp-31h]
  unsigned int v115; // [rsp+80h] [rbp-29h]
  WCHAR *v116; // [rsp+88h] [rbp-21h]
  unsigned int v117; // [rsp+90h] [rbp-19h]
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING v120; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v121; // [rsp+C0h] [rbp+17h] BYREF
  int v122; // [rsp+C8h] [rbp+1Fh]

  v108 = a3;
  v113 = a2;
  v112 = 0;
  Size = 0;
  Src = 0LL;
  v6 = 0LL;
  Timeout.QuadPart = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( !v9 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v10 = v9;
  for ( i = 0; i < 3; ++i )
  {
    v12 = *v10;
    v13 = v10 + 1;
    if ( v10 + 1 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v13 + v12);
    if ( (unsigned int *)((char *)v13 + v12) < v13 )
      return (unsigned int)-1073741675;
  }
  v14 = *v10;
  v15 = v10 + 1;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v16 = 0LL;
  if ( v14 )
    v16 = v15;
  if ( v14 != 8 )
    return (unsigned int)-1073741789;
  v114 = *(_QWORD *)v16;
  KeyHandle = 0LL;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *v9;
    v19 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v20 )
    return (unsigned int)-1073741762;
  v21 = v9 + 1;
  if ( (v20 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v21[(v20 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( (int)sub_140354748((_WORD *)v9 + 2, v20, &KeyHandle) < 0 )
    return (unsigned int)-1073741762;
  if ( (char *)KeyHandle + 2 != v22 )
    return (unsigned int)-1073741762;
  v23 = 2 * ((unsigned __int64)KeyHandle >> 1) + 2;
  if ( 2 * (unsigned int)((unsigned __int64)KeyHandle >> 1) == -2 )
    return (unsigned int)-1073741762;
  v24 = v23;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v23, 542329939LL);
  v26 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v24);
  v27 = *(unsigned int **)(a1 + 8);
  if ( v27 )
  {
    if ( *(_DWORD *)a1 <= 5u )
    {
      v8 = -1073741811;
      goto LABEL_146;
    }
    v28 = *(unsigned int **)(a1 + 8);
    for ( k = 0; k < 5; ++k )
    {
      v30 = *v28;
      v31 = v28 + 1;
      if ( v28 + 1 < v28 )
        goto LABEL_205;
      v28 = (unsigned int *)((char *)v31 + v30);
      if ( (unsigned int *)((char *)v31 + v30) < v31 )
        goto LABEL_205;
    }
    v32 = *v28;
    v33 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
LABEL_205:
      v8 = -1073741675;
      goto LABEL_145;
    }
    v34 = 0LL;
    if ( v32 )
      v34 = v33;
    if ( v32 != 4 )
    {
      v8 = -1073741789;
      goto LABEL_145;
    }
    v115 = *v34;
    if ( *(_DWORD *)a1 <= 6u )
    {
      v8 = -1073741811;
      goto LABEL_145;
    }
    for ( m = 0; m < 6; ++m )
    {
      v36 = *v27;
      v37 = v27 + 1;
      v38 = v26;
      if ( v27 + 1 < v27 )
        goto LABEL_205;
      v27 = (unsigned int *)((char *)v37 + v36);
      if ( (unsigned int *)((char *)v37 + v36) < v37 )
        goto LABEL_205;
    }
    v39 = *v27;
    if ( v27 + 1 < v27 )
      goto LABEL_205;
    v40 = 0LL;
    if ( v39 )
      v40 = v27 + 1;
    if ( v39 != 4 )
    {
      v8 = -1073741789;
      goto LABEL_145;
    }
    v41 = *v40;
    RtlInitUnicodeString(&DestinationString, v26);
    if ( v41 )
    {
      v42 = 1;
      if ( v41 <= 0x100000 )
      {
LABEL_66:
        Src = (void *)ExAllocatePool2(256LL, v41, 542329939LL);
        if ( !Src )
        {
          v8 = -1073741801;
          v26 = v38;
          v6 = 0LL;
          goto LABEL_145;
        }
        v45 = sub_14042A5E0(&DestinationString, &v112);
        v8 = v45;
        if ( v45 != -1073741789 )
        {
          v26 = v38;
          if ( v45 < 0 )
            goto LABEL_144;
        }
        v41 = Size;
        v106 = Size;
LABEL_71:
        v117 = v41 + 4;
        v26 = v38;
        if ( v41 + 32 < 0x1C )
          goto LABEL_143;
        Size_4 = v41 + 40;
        if ( v41 + 40 < v41 + 32 )
          goto LABEL_143;
        if ( v41 + 48 < v41 + 40 )
          goto LABEL_143;
        if ( v41 + 48 >= 0xFFFFFFF8 )
          goto LABEL_143;
        v46 = (v41 + 63) & 0xFFFFFFF8;
        if ( v46 < v41 + 56 )
          goto LABEL_143;
        if ( v46 + 8 < v46 )
          goto LABEL_143;
        v116 = v38;
        v47 = *(_DWORD *)(v113 + 32);
        v48 = *(_DWORD *)(v113 + 16);
        if ( v46 + 12 < 4 )
          goto LABEL_143;
        v49 = v46 + 16;
        if ( v46 + 16 < v46 + 12 )
          goto LABEL_143;
        v50 = v49 + v48;
        if ( v49 + v48 < v49 )
          goto LABEL_143;
        v51 = v50 + 4;
        if ( v50 + 4 < v50 || v51 + v47 < v51 )
          goto LABEL_143;
        v52 = v41 + 48;
        v53 = v114;
        if ( v108 < v51 + v47 || v8 < 0 )
          goto LABEL_107;
        v54 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v120 = 0LL;
        v107 = 0;
        v56 = 1;
        v108 = 0;
        LODWORD(v113) = 0;
        v57 = (__int64)((unsigned __int128)(v54 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        v58 = (void *)((v57 >> 63) + v57);
        KeyHandle = v58;
        RtlInitUnicodeString(&v120, L"Security-SPP-GenuineLocalStatus");
        v59 = sub_14042A5E0(&v120, &v107);
        if ( v59 == -1073741772 || v59 >= 0 && (v107 != 4 || !v108) )
          v56 = 0;
        if ( dword_140D3B1B0 != v56 )
        {
          qword_140D3B1E0 = (__int64)v58;
          dword_140D3B1B0 = v56;
        }
        v60 = (_DWORD)v58 - qword_140D3B1E0;
        if ( (__int64)v58 - qword_140D3B1E0 < 0 )
        {
          v62 = v60 & 1 | (((unsigned __int64)v58 - qword_140D3B1E0) >> 1);
          v61 = (double)(int)v62 + (double)(int)v62;
        }
        else
        {
          v61 = (double)v60;
        }
        v63 = 0;
        if ( !v56 && !dword_140D3B17C )
        {
          LOBYTE(v63) = v61 >= 9000000.0;
          if ( v63 )
          {
            dword_140D3B17C = 1;
            ZwUpdateWnfStateData(&stru_1400148B0, 0LL, 0, 0LL, 0LL, 0, 0);
          }
        }
        v52 = Size_4 + 8;
        v26 = v116;
        v53 = v114;
        if ( (char *)KeyHandle - qword_140D3B1E0 < (char *)0xA4CBFB
          || (v64 = KeWaitForSingleObject(&stru_140C0E920, UserRequest, 1, 0, &Timeout), v52 = Size_4 + 8, v64 < 0)
          || v64 == 192
          || v64 == 258 )
        {
LABEL_106:
          v41 = v106;
LABEL_107:
          *(_DWORD *)(a4 + 4) = v52;
          if ( !v52 )
          {
            v8 = -1073741762;
LABEL_144:
            v6 = Src;
            goto LABEL_145;
          }
          v74 = (_DWORD *)ExAllocatePool2(256LL, v52, 542329939LL);
          if ( !v74 )
          {
            v8 = -1073741801;
            goto LABEL_144;
          }
          *(_QWORD *)(a4 + 8) = v74;
          *(_DWORD *)a4 = 0;
          v75 = v8 | 0x10000000;
          if ( v74 + 1 < v74 )
            goto LABEL_143;
          if ( v74 + 2 > (_DWORD *)((char *)v74 + *(unsigned int *)(a4 + 4)) )
          {
            v8 = -1073741789;
            goto LABEL_144;
          }
          *v74 = 4;
          v74[1] = v75;
          v76 = ++*(_DWORD *)a4;
          v77 = *(_QWORD *)(a4 + 8);
          if ( v77 )
          {
            v79 = 0;
            for ( n = *(_QWORD *)(a4 + 8); v79 < v76; n += v81 )
            {
              v81 = *(_DWORD *)n + 4;
              if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v81 < n )
                goto LABEL_143;
              ++v79;
            }
            if ( n + 4 < n )
              goto LABEL_143;
            if ( n + 12 > v77 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v8 = -1073741789;
              goto LABEL_144;
            }
            *(_DWORD *)n = 8;
            *(_QWORD *)(n + 4) = v53;
            ++*(_DWORD *)a4;
          }
          else
          {
            v78 = *(_DWORD *)(a4 + 4);
            if ( v78 + 12 < v78 )
              goto LABEL_142;
            *(_DWORD *)(a4 + 4) = v78 + 12;
            *(_DWORD *)a4 = v76 + 1;
          }
          v82 = *(_QWORD *)(a4 + 8);
          v83 = v112;
          if ( v82 )
          {
            v85 = 0;
            for ( ii = *(_DWORD **)(a4 + 8); v85 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v87) )
            {
              v87 = *ii + 4;
              if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v87) < ii )
                goto LABEL_143;
              ++v85;
            }
            if ( ii + 1 < ii )
              goto LABEL_143;
            if ( (unsigned __int64)(ii + 2) > v82 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v8 = -1073741789;
              goto LABEL_144;
            }
            *ii = 4;
            ii[1] = v83;
          }
          else
          {
            v84 = *(_DWORD *)(a4 + 4);
            if ( v84 + 8 < v84 )
              goto LABEL_142;
            *(_DWORD *)(a4 + 4) = v84 + 8;
          }
          ++*(_DWORD *)a4;
          if ( Src )
          {
            v8 = -1073741811;
            v6 = Src;
            goto LABEL_145;
          }
          v88 = *(_QWORD *)(a4 + 8);
          if ( !v88 )
          {
            v89 = *(_DWORD *)(a4 + 4);
            if ( v89 + v117 >= v89 )
            {
              *(_DWORD *)(a4 + 4) = v89 + v117;
LABEL_183:
              ++*(_DWORD *)a4;
              v93 = *(_QWORD *)(a4 + 8);
              v94 = Size;
              if ( !v93 )
              {
                v95 = *(_DWORD *)(a4 + 4);
                if ( v95 + 8 >= v95 )
                {
                  *(_DWORD *)(a4 + 4) = v95 + 8;
LABEL_194:
                  ++*(_DWORD *)a4;
                  v99 = *(_QWORD *)(a4 + 8);
                  if ( v99 )
                  {
                    v101 = 0;
                    v102 = *(_DWORD **)(a4 + 8);
                    if ( *(_DWORD *)a4 )
                    {
                      while ( 1 )
                      {
                        v103 = *v102 + 4;
                        if ( *v102 >= 0xFFFFFFFC || (_DWORD *)((char *)v102 + v103) < v102 )
                          break;
                        ++v101;
                        v102 = (_DWORD *)((char *)v102 + v103);
                        if ( v101 >= *(_DWORD *)a4 )
                          goto LABEL_201;
                      }
                    }
                    else
                    {
LABEL_201:
                      if ( v102 + 1 >= v102 )
                      {
                        if ( (unsigned __int64)(v102 + 2) <= v99 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        {
                          *v102 = 4;
                          v102[1] = v7;
                          ++*(_DWORD *)a4;
                          v8 = 0;
                        }
                        else
                        {
                          v8 = -1073741789;
                        }
                        goto LABEL_144;
                      }
                    }
                    goto LABEL_143;
                  }
                  v100 = *(_DWORD *)(a4 + 4);
                  if ( v100 + 8 >= v100 )
                  {
                    ++*(_DWORD *)a4;
                    *(_DWORD *)(a4 + 4) = v100 + 8;
                    v8 = 0;
                    goto LABEL_144;
                  }
                }
LABEL_142:
                *(_DWORD *)(a4 + 4) = -1;
                goto LABEL_143;
              }
              v96 = 0;
              for ( jj = *(_DWORD **)(a4 + 8); v96 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v98) )
              {
                v98 = *jj + 4;
                if ( *jj >= 0xFFFFFFFC || (_DWORD *)((char *)jj + v98) < jj )
                  goto LABEL_143;
                ++v96;
              }
              if ( jj + 1 >= jj )
              {
                if ( (unsigned __int64)(jj + 2) > v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v8 = -1073741789;
                  goto LABEL_144;
                }
                *jj = 4;
                jj[1] = v94;
                goto LABEL_194;
              }
LABEL_143:
              v8 = -1073741675;
              goto LABEL_144;
            }
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_174;
          }
          v90 = 0;
          for ( kk = *(unsigned int **)(a4 + 8); v90 < *(_DWORD *)a4; kk = (unsigned int *)((char *)kk + v92) )
          {
            v92 = *kk + 4;
            if ( *kk >= 0xFFFFFFFC || (unsigned int *)((char *)kk + v92) < kk )
              goto LABEL_174;
            ++v90;
          }
          if ( kk + 1 < kk )
          {
LABEL_174:
            v8 = -1073741675;
            v6 = Src;
            goto LABEL_145;
          }
          if ( (unsigned __int64)kk + v41 + 4 <= v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *kk = v41;
            goto LABEL_183;
          }
          v8 = -1073741789;
          v6 = Src;
LABEL_145:
          if ( !v26 )
            goto LABEL_147;
          goto LABEL_146;
        }
        if ( dword_140D3B1B4 == v56 )
        {
          v68 = (char *)KeyHandle - qword_140D3B130;
          dword_140D3B1B4 = v56;
          if ( v56 )
            goto LABEL_105;
        }
        else
        {
          if ( v56 )
          {
            KeResetEvent(&stru_140C0E900);
            dword_140D3B1B4 = v56;
LABEL_105:
            KeReleaseMutex(&stru_140C0E920, 0);
            v26 = v116;
            v52 = Size_4 + 8;
            goto LABEL_106;
          }
          v65 = MEMORY[0xFFFFF78000000320];
          v66 = KeQueryTimeIncrement();
          dword_140D3B1B4 = 0;
          v67 = v65 * v66 / 10000;
          v68 = (char *)KeyHandle - v67;
          qword_140D3B130 = v67;
        }
        if ( (unsigned __int64)v68 < 0xADF4FC || !dword_140D3B1B8 )
          goto LABEL_105;
        KeSetEvent(&stru_140C0E900, 1, 0);
        v108 = 4;
        v107 = 0;
        LODWORD(v113) = 0;
        KeyHandle = 0LL;
        if ( ZwOpenKey(&KeyHandle, 1u, &stru_140D3B8A0) < 0 )
        {
          if ( (int)sub_14042A5E0(aBd, &v108) < 0 )
            goto LABEL_119;
          v69 = v107;
        }
        else
        {
          v69 = 3;
          v107 = 3;
        }
        if ( v108 == 4 && (unsigned int)(v69 - 1) <= 2 )
        {
LABEL_120:
          if ( KeyHandle )
            ZwClose(KeyHandle);
          v121 = 0LL;
          v122 = 0;
          LODWORD(v113) = v115;
          v52 = Size_4 + 8;
          v108 = 0;
          v107 = 0;
          v26 = v116;
          if ( (int)sub_14042A5E0(aLn, &v108) < 0 )
          {
            v70 = v113;
          }
          else
          {
            v52 = Size_4 + 8;
            v70 = v115;
            if ( v108 == 3 && v107 == 12 )
            {
              v71 = 0;
              v72 = (unsigned int *)&v121;
              do
              {
                v73 = *v72;
                if ( (*v72 & 0xF) == v69 )
                  goto LABEL_131;
                ++v71;
                ++v72;
              }
              while ( v71 < 3 );
            }
          }
          v73 = dword_140D3B054 & 0xFFFF0000 | 0x3211;
LABEL_131:
          dword_140D3B054 = v73;
          if ( v70 )
            v7 = v73;
          else
            KeReleaseMutex(&stru_140C0E920, 0);
          goto LABEL_106;
        }
LABEL_119:
        v69 = 1;
        v107 = 1;
        goto LABEL_120;
      }
    }
    else
    {
      v42 = 0;
    }
    v43 = sub_14042A5E0(&DestinationString, &v112);
    v8 = v43;
    if ( v43 == -1073741789 )
    {
      v44 = Size;
    }
    else
    {
      if ( v43 < 0 )
      {
        v26 = v38;
        v6 = 0LL;
        goto LABEL_145;
      }
      v44 = Size;
      v42 = 0;
    }
    v106 = v44;
    v41 = v44;
    v8 = 0;
    if ( !v42 )
      goto LABEL_71;
    goto LABEL_66;
  }
  v8 = -1073741811;
LABEL_146:
  ExFreePoolWithTag(v26, 0);
LABEL_147:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
