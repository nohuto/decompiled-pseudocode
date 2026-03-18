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
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D2C60(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void *v6; // r13
  unsigned int v7; // edi
  int v8; // esi
  const wchar_t *v9; // rcx
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
  size_t v20; // rdx
  _WORD *v21; // rsi
  __int64 v22; // r11
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
  size_t v58; // rbx
  int v59; // eax
  int v60; // ecx
  double v61; // xmm0_8
  unsigned __int64 v62; // rax
  int v63; // eax
  NTSTATUS v64; // edx
  __int64 v65; // rbx
  ULONG v66; // eax
  __int64 v67; // rdx
  size_t v68; // rax
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
  int v105; // [rsp+28h] [rbp-81h]
  int v106; // [rsp+30h] [rbp-79h]
  void *Src; // [rsp+40h] [rbp-69h]
  unsigned int v108; // [rsp+48h] [rbp-61h]
  int v109; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v110; // [rsp+50h] [rbp-59h] BYREF
  unsigned int Size; // [rsp+54h] [rbp-55h] BYREF
  unsigned int Size_4; // [rsp+58h] [rbp-51h]
  size_t pcbLength; // [rsp+60h] [rbp-49h] BYREF
  int v114; // [rsp+68h] [rbp-41h] BYREF
  __int64 v115; // [rsp+70h] [rbp-39h] BYREF
  __int64 v116; // [rsp+78h] [rbp-31h]
  unsigned int v117; // [rsp+80h] [rbp-29h]
  WCHAR *v118; // [rsp+88h] [rbp-21h]
  unsigned int v119; // [rsp+90h] [rbp-19h]
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING v122; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v123; // [rsp+C0h] [rbp+17h] BYREF
  int v124; // [rsp+C8h] [rbp+1Fh]

  v110 = a3;
  v115 = a2;
  v114 = 0;
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
  v9 = *(const wchar_t **)(a1 + 8);
  if ( !v9 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v10 = (unsigned int *)v9;
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
  v116 = *(_QWORD *)v16;
  pcbLength = 0LL;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v18 = *(unsigned int *)v9;
    v19 = (unsigned int *)(v9 + 2);
    if ( v9 + 2 < v9 )
      return (unsigned int)-1073741675;
    v9 = (const wchar_t *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  v20 = *(unsigned int *)v9;
  if ( v9 + 2 < v9 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v20 )
    return (unsigned int)-1073741762;
  v21 = v9 + 2;
  if ( (v20 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v21[(v20 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v9 + 2, v20, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v22 )
    return (unsigned int)-1073741762;
  v23 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
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
      goto LABEL_152;
    }
    v28 = *(unsigned int **)(a1 + 8);
    for ( k = 0; k < 5; ++k )
    {
      v30 = *v28;
      v31 = v28 + 1;
      if ( v28 + 1 < v28 )
        goto LABEL_214;
      v28 = (unsigned int *)((char *)v31 + v30);
      if ( (unsigned int *)((char *)v31 + v30) < v31 )
        goto LABEL_214;
    }
    v32 = *v28;
    v33 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
LABEL_214:
      v8 = -1073741675;
      goto LABEL_151;
    }
    v34 = 0LL;
    if ( v32 )
      v34 = v33;
    if ( v32 != 4 )
    {
      v8 = -1073741789;
      goto LABEL_151;
    }
    v117 = *v34;
    if ( *(_DWORD *)a1 <= 6u )
    {
      v8 = -1073741811;
      goto LABEL_151;
    }
    for ( m = 0; m < 6; ++m )
    {
      v36 = *v27;
      v37 = v27 + 1;
      v38 = v26;
      if ( v27 + 1 < v27 )
        goto LABEL_214;
      v27 = (unsigned int *)((char *)v37 + v36);
      if ( (unsigned int *)((char *)v37 + v36) < v37 )
        goto LABEL_214;
    }
    v39 = *v27;
    if ( v27 + 1 < v27 )
      goto LABEL_214;
    v40 = 0LL;
    if ( v39 )
      v40 = v27 + 1;
    if ( v39 != 4 )
    {
      v8 = -1073741789;
      goto LABEL_151;
    }
    v41 = *v40;
    v108 = *v40;
    RtlInitUnicodeString(&DestinationString, v26);
    if ( v41 )
    {
      v42 = 1;
      if ( v41 <= 0x100000 )
      {
        v108 = v41;
LABEL_68:
        Src = (void *)ExAllocatePool2(256LL, v41, 542329939LL);
        if ( !Src )
        {
          v8 = -1073741801;
          v26 = v38;
          v6 = 0LL;
          goto LABEL_151;
        }
        v45 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, void *, _QWORD, unsigned int *))qword_140D3B468)(
                &DestinationString,
                &v114,
                Src,
                v41,
                &Size);
        v8 = v45;
        if ( v45 != -1073741789 )
        {
          v26 = v38;
          if ( v45 < 0 )
            goto LABEL_150;
        }
        if ( v41 >= Size )
        {
          v41 = Size;
          v108 = Size;
        }
LABEL_76:
        v119 = v41 + 4;
        v26 = v38;
        if ( v41 >= 0xFFFFFFFC )
          goto LABEL_149;
        if ( v41 + 32 < 0x1C )
          goto LABEL_149;
        Size_4 = v41 + 40;
        if ( v41 + 40 < v41 + 32 )
          goto LABEL_149;
        if ( v41 + 48 < v41 + 40 )
          goto LABEL_149;
        if ( v41 + 48 >= 0xFFFFFFF8 )
          goto LABEL_149;
        v46 = (v41 + 63) & 0xFFFFFFF8;
        if ( v46 < v41 + 56 )
          goto LABEL_149;
        if ( v46 + 8 < v46 )
          goto LABEL_149;
        v118 = v38;
        v47 = *(_DWORD *)(v115 + 32);
        v48 = *(_DWORD *)(v115 + 16);
        if ( v46 + 12 < 4 )
          goto LABEL_149;
        v49 = v46 + 16;
        if ( v46 + 16 < v46 + 12 )
          goto LABEL_149;
        v50 = v49 + v48;
        if ( v49 + v48 < v49 )
          goto LABEL_149;
        v51 = v50 + 4;
        if ( v50 + 4 < v50 || v51 + v47 < v51 )
          goto LABEL_149;
        v52 = v41 + 48;
        v53 = v116;
        if ( v110 < v51 + v47 || v8 < 0 )
          goto LABEL_113;
        v54 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v122 = 0LL;
        v109 = 0;
        v56 = 1;
        v110 = 0;
        LODWORD(v115) = 0;
        v57 = (__int64)((unsigned __int128)(v54 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        v58 = (v57 >> 63) + v57;
        pcbLength = v58;
        RtlInitUnicodeString(&v122, L"Security-SPP-GenuineLocalStatus");
        v59 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, unsigned int *, __int64, __int64 *))qword_140D3B468)(
                &v122,
                &v109,
                &v110,
                4LL,
                &v115);
        if ( v59 == -1073741772 || v59 >= 0 && (v109 != 4 || !v110) )
          v56 = 0;
        if ( g_ulOldGenuineStateForWnf != v56 )
        {
          g_qwSystemInitTime = v58;
          g_ulOldGenuineStateForWnf = v56;
        }
        v60 = v58 - g_qwSystemInitTime;
        if ( (__int64)(v58 - g_qwSystemInitTime) < 0 )
        {
          v62 = v60 & 1 | ((v58 - g_qwSystemInitTime) >> 1);
          v61 = (double)(int)v62 + (double)(int)v62;
        }
        else
        {
          v61 = (double)v60;
        }
        v63 = 0;
        if ( !v56 && !g_bWNFEventFired )
        {
          LOBYTE(v63) = v61 >= 9000000.0;
          if ( v63 )
          {
            v106 = 0;
            v105 = 0;
            g_bWNFEventFired = 1;
            ZwUpdateWnfStateData((__int64)&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL);
          }
        }
        v52 = Size_4 + 8;
        v26 = v118;
        v53 = v116;
        if ( pcbLength - g_qwSystemInitTime < 0xA4CBFB
          || (v64 = KeWaitForSingleObject(&stru_140C0E920, UserRequest, 1, 0, &Timeout), v52 = Size_4 + 8, v64 < 0)
          || v64 == 192
          || v64 == 258 )
        {
LABEL_112:
          v41 = v108;
LABEL_113:
          *(_DWORD *)(a4 + 4) = v52;
          if ( !v52 )
          {
            v8 = -1073741762;
LABEL_150:
            v6 = Src;
            goto LABEL_151;
          }
          v74 = (_DWORD *)ExAllocatePool2(256LL, v52, 542329939LL);
          if ( !v74 )
          {
            v8 = -1073741801;
            goto LABEL_150;
          }
          *(_QWORD *)(a4 + 8) = v74;
          *(_DWORD *)a4 = 0;
          v75 = v8 | 0x10000000;
          if ( v74 + 1 < v74 )
            goto LABEL_149;
          if ( v74 + 2 > (_DWORD *)((char *)v74 + *(unsigned int *)(a4 + 4)) )
          {
            v8 = -1073741789;
            goto LABEL_150;
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
                goto LABEL_149;
              ++v79;
            }
            if ( n + 4 < n )
              goto LABEL_149;
            if ( n + 12 > v77 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v8 = -1073741789;
              goto LABEL_150;
            }
            *(_DWORD *)n = 8;
            *(_QWORD *)(n + 4) = v53;
            ++*(_DWORD *)a4;
          }
          else
          {
            v78 = *(_DWORD *)(a4 + 4);
            if ( v78 + 12 < v78 )
              goto LABEL_148;
            *(_DWORD *)(a4 + 4) = v78 + 12;
            *(_DWORD *)a4 = v76 + 1;
          }
          v82 = *(_QWORD *)(a4 + 8);
          v83 = v114;
          if ( v82 )
          {
            v85 = 0;
            for ( ii = *(_DWORD **)(a4 + 8); v85 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v87) )
            {
              v87 = *ii + 4;
              if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v87) < ii )
                goto LABEL_149;
              ++v85;
            }
            if ( ii + 1 < ii )
              goto LABEL_149;
            if ( (unsigned __int64)(ii + 2) > v82 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v8 = -1073741789;
              goto LABEL_150;
            }
            *ii = 4;
            ii[1] = v83;
          }
          else
          {
            v84 = *(_DWORD *)(a4 + 4);
            if ( v84 + 8 < v84 )
              goto LABEL_148;
            *(_DWORD *)(a4 + 4) = v84 + 8;
          }
          ++*(_DWORD *)a4;
          if ( Src )
          {
            if ( !v41 )
              goto LABEL_176;
          }
          else if ( v41 )
          {
LABEL_176:
            v8 = -1073741811;
            v6 = Src;
            goto LABEL_151;
          }
          v88 = *(_QWORD *)(a4 + 8);
          if ( !v88 )
          {
            v89 = *(_DWORD *)(a4 + 4);
            if ( v89 + v119 >= v89 )
            {
              *(_DWORD *)(a4 + 4) = v89 + v119;
LABEL_192:
              ++*(_DWORD *)a4;
              v93 = *(_QWORD *)(a4 + 8);
              v94 = Size;
              if ( !v93 )
              {
                v95 = *(_DWORD *)(a4 + 4);
                if ( v95 + 8 >= v95 )
                {
                  *(_DWORD *)(a4 + 4) = v95 + 8;
LABEL_203:
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
                          goto LABEL_210;
                      }
                    }
                    else
                    {
LABEL_210:
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
                        goto LABEL_150;
                      }
                    }
                    goto LABEL_149;
                  }
                  v100 = *(_DWORD *)(a4 + 4);
                  if ( v100 + 8 >= v100 )
                  {
                    ++*(_DWORD *)a4;
                    *(_DWORD *)(a4 + 4) = v100 + 8;
                    v8 = 0;
                    goto LABEL_150;
                  }
                }
LABEL_148:
                *(_DWORD *)(a4 + 4) = -1;
                goto LABEL_149;
              }
              v96 = 0;
              for ( jj = *(_DWORD **)(a4 + 8); v96 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v98) )
              {
                v98 = *jj + 4;
                if ( *jj >= 0xFFFFFFFC || (_DWORD *)((char *)jj + v98) < jj )
                  goto LABEL_149;
                ++v96;
              }
              if ( jj + 1 >= jj )
              {
                if ( (unsigned __int64)(jj + 2) > v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v8 = -1073741789;
                  goto LABEL_150;
                }
                *jj = 4;
                jj[1] = v94;
                goto LABEL_203;
              }
LABEL_149:
              v8 = -1073741675;
              goto LABEL_150;
            }
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_182;
          }
          v90 = 0;
          for ( kk = *(unsigned int **)(a4 + 8); v90 < *(_DWORD *)a4; kk = (unsigned int *)((char *)kk + v92) )
          {
            v92 = *kk + 4;
            if ( *kk >= 0xFFFFFFFC || (unsigned int *)((char *)kk + v92) < kk )
              goto LABEL_182;
            ++v90;
          }
          if ( kk + 1 < kk )
          {
LABEL_182:
            v8 = -1073741675;
            v6 = Src;
            goto LABEL_151;
          }
          if ( (unsigned __int64)kk + v41 + 4 <= v88 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *kk = v41;
            if ( Src )
              memmove(kk + 1, Src, v41);
            goto LABEL_192;
          }
          v8 = -1073741789;
          v6 = Src;
LABEL_151:
          if ( !v26 )
            goto LABEL_153;
          goto LABEL_152;
        }
        if ( g_ulOldGenuineState == v56 )
        {
          v68 = pcbLength - qword_140D3B130;
          g_ulOldGenuineState = v56;
          if ( v56 )
            goto LABEL_111;
        }
        else
        {
          if ( v56 )
          {
            KeResetEvent(&stru_140C0E900);
            g_ulOldGenuineState = v56;
LABEL_111:
            KeReleaseMutex(&stru_140C0E920, 0);
            v26 = v118;
            v52 = Size_4 + 8;
            goto LABEL_112;
          }
          v65 = MEMORY[0xFFFFF78000000320];
          v66 = KeQueryTimeIncrement();
          g_ulOldGenuineState = 0;
          v67 = v65 * v66 / 10000;
          v68 = pcbLength - v67;
          qword_140D3B130 = v67;
        }
        if ( v68 < 0xADF4FC || !dword_140D3B1B8 )
          goto LABEL_111;
        KeSetEvent(&stru_140C0E900, 1, 0);
        v110 = 4;
        v109 = 0;
        LODWORD(v115) = 0;
        pcbLength = 0LL;
        if ( ZwOpenKey((PHANDLE)&pcbLength, 1u, &stru_140D3B8A0) < 0 )
        {
          if ( (int)((__int64 (__fastcall *)(wchar_t *, unsigned int *, int *, __int64, __int64 *, int, int))qword_140D3B468)(
                      aBd,
                      &v110,
                      &v109,
                      4LL,
                      &v115,
                      v105,
                      v106) < 0 )
            goto LABEL_125;
          v69 = v109;
        }
        else
        {
          v69 = 3;
          v109 = 3;
        }
        if ( v110 == 4 && (unsigned int)(v69 - 1) <= 2 )
        {
LABEL_126:
          if ( pcbLength )
            ZwClose((HANDLE)pcbLength);
          v123 = 0LL;
          v124 = 0;
          LODWORD(v115) = v117;
          v52 = Size_4 + 8;
          v110 = 0;
          v109 = 0;
          v26 = v118;
          if ( (int)((__int64 (__fastcall *)(wchar_t *, unsigned int *, __int64 *, __int64, int *))qword_140D3B468)(
                      aLn,
                      &v110,
                      &v123,
                      12LL,
                      &v109) < 0 )
          {
            v70 = v115;
          }
          else
          {
            v52 = Size_4 + 8;
            v70 = v117;
            if ( v110 == 3 && v109 == 12 )
            {
              v71 = 0;
              v72 = (unsigned int *)&v123;
              do
              {
                v73 = *v72;
                if ( (*v72 & 0xF) == v69 )
                  goto LABEL_137;
                ++v71;
                ++v72;
              }
              while ( v71 < 3 );
            }
          }
          v73 = dword_140D3B054 & 0xFFFF0000 | 0x3211;
LABEL_137:
          dword_140D3B054 = v73;
          if ( v70 )
            v7 = v73;
          else
            KeReleaseMutex(&stru_140C0E920, 0);
          goto LABEL_112;
        }
LABEL_125:
        v69 = 1;
        v109 = 1;
        goto LABEL_126;
      }
    }
    else
    {
      v42 = 0;
    }
    v43 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, unsigned int *))qword_140D3B468)(
            &DestinationString,
            &v114,
            0LL,
            0LL,
            &Size);
    v8 = v43;
    if ( v43 == -1073741789 )
    {
      v44 = Size;
      if ( v41 < Size )
      {
        if ( !v41 )
          v8 = 0;
        goto LABEL_76;
      }
    }
    else
    {
      if ( v43 < 0 )
      {
LABEL_64:
        v26 = v38;
        v6 = 0LL;
        goto LABEL_151;
      }
      v44 = Size;
      if ( Size )
      {
        v8 = -2147418113;
        goto LABEL_64;
      }
      v42 = 0;
    }
    v108 = v44;
    v41 = v44;
    v8 = 0;
    if ( !v42 )
      goto LABEL_76;
    goto LABEL_68;
  }
  v8 = -1073741811;
LABEL_152:
  ExFreePoolWithTag(v26, 0);
LABEL_153:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
