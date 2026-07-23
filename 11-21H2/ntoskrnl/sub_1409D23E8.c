/*
 * XREFs of sub_1409D23E8 @ 0x1409D23E8
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     iswspace @ 0x1403E1C10 (iswspace.c)
 *     sub_1403E3A4C @ 0x1403E3A4C (sub_1403E3A4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409D01AC @ 0x1409D01AC (sub_1409D01AC.c)
 *     sub_1409D08CC @ 0x1409D08CC (sub_1409D08CC.c)
 *     sub_1409D094C @ 0x1409D094C (sub_1409D094C.c)
 *     sub_1409D1B40 @ 0x1409D1B40 (sub_1409D1B40.c)
 *     sub_1409D1CA0 @ 0x1409D1CA0 (sub_1409D1CA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D23E8(
        _WORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6,
        __int16 a7,
        char a8)
{
  unsigned int v8; // r14d
  _WORD *v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r12d
  bool v12; // zf
  unsigned int v13; // edi
  wint_t *v14; // rdi
  int i; // eax
  __int64 v16; // rdi
  unsigned __int16 *j; // rbx
  __int16 v18; // cx
  wint_t *v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r15d
  wint_t *k; // rbx
  wint_t *v24; // rsi
  PWSTR v25; // rsi
  wint_t *v26; // rbx
  wint_t v27; // ax
  wint_t mm; // cx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  wint_t v31; // r10
  unsigned int v32; // eax
  wint_t nn; // cx
  wint_t v34; // ax
  wint_t n; // cx
  PSID v36; // r14
  wint_t *v37; // rbx
  ULONG v38; // eax
  unsigned int v39; // ecx
  wint_t v40; // ax
  _WORD *v41; // rbx
  wint_t *v42; // rbx
  unsigned __int64 v43; // rax
  wint_t v44; // ax
  __int16 v45; // r14
  unsigned __int64 v46; // rax
  wint_t *v47; // rbx
  unsigned int v48; // ecx
  wint_t v49; // ax
  unsigned __int64 v50; // rax
  PWSTR v51; // rbx
  wint_t m; // cx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // ebx
  unsigned int v57; // ebx
  _WORD *v58; // rax
  unsigned int v59; // edx
  int v60; // eax
  size_t v61; // r8
  unsigned int v62; // eax
  unsigned int v63; // r14d
  PVOID v64; // rdx
  unsigned __int64 *v65; // r12
  wint_t v66; // ax
  unsigned __int16 *jj; // r9
  unsigned int v68; // r8d
  wint_t *v69; // r9
  unsigned int v70; // r8d
  unsigned __int16 *v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // r11
  _BYTE *v76; // r10
  wint_t ii; // cx
  PSID v78; // rbx
  ULONG v79; // eax
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  wint_t v82; // ax
  wint_t kk; // cx
  WCHAR v84; // ax
  WCHAR *v85; // r15
  unsigned int v86; // ecx
  size_t v87; // rbx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  _WORD *v90; // [rsp+48h] [rbp-41h]
  int v91; // [rsp+50h] [rbp-39h]
  int v92; // [rsp+54h] [rbp-35h] BYREF
  PWSTR EndPointer; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v94; // [rsp+60h] [rbp-29h]
  int v95; // [rsp+64h] [rbp-25h] BYREF
  PSID Sid; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h] BYREF
  __int64 v98; // [rsp+78h] [rbp-11h]
  char v99; // [rsp+D8h] [rbp+4Fh] BYREF
  _QWORD *v100; // [rsp+E0h] [rbp+57h]
  _QWORD *v101; // [rsp+E8h] [rbp+5Fh]
  unsigned int *v102; // [rsp+F0h] [rbp+67h]

  v102 = a4;
  v101 = a3;
  v100 = a2;
  v8 = 0;
  EndPointer = 0LL;
  v9 = 0LL;
  v90 = 0LL;
  v10 = 0;
  P = 0LL;
  v11 = 0;
  a7 = 0;
  v95 = 0;
  v91 = 0;
  v99 = 0;
  a8 = 0;
  LOBYTE(a5) = 0;
  Sid = 0LL;
  v92 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    v13 = 87;
    goto LABEL_25;
  }
  v12 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v12 )
    return 1336;
  v14 = a1 + 1;
  for ( i = iswspace(a1[1]); i; i = iswspace(*v14) )
    ++v14;
  if ( *v14 != 34 )
    return 1336;
  v16 = (__int64)(v14 + 1);
  for ( j = (unsigned __int16 *)v16; sub_1409D1CA0(*j); ++j )
  {
    if ( !v18 )
      return 1336;
    if ( v10 + 1 < v10 )
      return 534;
    ++v10;
  }
  if ( v18 != 34 || !v10 )
    return 1336;
  v19 = j + 1;
  v13 = sub_1409D01AC(v16, 2 * v10, &P);
  if ( !v13 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_WORD *)P + v20) );
    v98 = (unsigned int)(v20 + 1);
    v21 = 2 * v98 + 20;
    a6 = v21;
    if ( (unsigned int)(2 * v98) >= 0xFFFFFFEC )
    {
      v13 = 534;
LABEL_24:
      v9 = 0LL;
      goto LABEL_25;
    }
    while ( iswspace(*v19) )
      ++v19;
    if ( *v19 != 44 )
      goto LABEL_34;
    do
      ++v19;
    while ( iswspace(*v19) );
    v13 = sub_1409D1B40(v19, &EndPointer, &a7);
    if ( v13 )
      goto LABEL_24;
    for ( k = EndPointer; iswspace(*k); ++k )
      ;
    if ( *k != 44 )
      goto LABEL_34;
    do
      ++k;
    while ( iswspace(*k) );
    v13 = sub_1409D094C(k, &EndPointer, &v95);
    if ( v13 )
      goto LABEL_24;
    v24 = EndPointer;
    if ( (v95 & 0xFFC0) != 0 )
      goto LABEL_34;
    while ( iswspace(*v24) )
      ++v24;
    if ( *v24 != 44 )
      goto LABEL_34;
    v25 = v24 + 1;
    v26 = v25;
    if ( a7 == 1 )
    {
      v49 = *v25;
      if ( *v25 )
      {
        while ( 1 )
        {
          v92 = 0;
          v50 = sub_1403E3A4C(0LL, v26, &EndPointer, 0, 0, &v92);
          if ( EndPointer == v26 && !v50 )
            goto LABEL_142;
          if ( v92 )
            goto LABEL_155;
          v51 = EndPointer;
          ++v11;
          for ( m = *EndPointer; iswspace(m); m = *v51 )
            ++v51;
          v49 = *v51;
          if ( *v51 != 44 )
          {
            if ( v49 != 41 )
              goto LABEL_142;
            break;
          }
          v26 = v51 + 1;
          if ( !*v26 )
            goto LABEL_142;
        }
      }
      if ( v49 != 41 )
      {
LABEL_142:
        v13 = 1336;
LABEL_143:
        v9 = 0LL;
        goto LABEL_25;
      }
      v53 = 8LL * v11;
      if ( v53 > 0xFFFFFFFF || (v48 = v53 + v21, (unsigned int)v53 + v21 < v21) )
      {
LABEL_155:
        v13 = 534;
        goto LABEL_143;
      }
LABEL_148:
      v21 = v48;
      goto LABEL_149;
    }
    if ( a7 != 2 )
    {
      if ( a7 == 3 )
      {
        v40 = *v25;
        if ( *v25 )
        {
          do
          {
            if ( iswspace(v40) )
            {
              do
                ++v26;
              while ( iswspace(*v26) );
              v21 = a6;
            }
            if ( *v26 != 34 )
              break;
            v41 = v26 + 1;
            while ( *v41 != 34 && *v41 )
            {
              ++v41;
              if ( v8 + 1 < v8 )
                goto LABEL_131;
              ++v8;
            }
            if ( v8 + 1 < v8 )
              goto LABEL_131;
            ++v8;
            if ( *v41 != 34 )
              break;
            v42 = v41 + 1;
            ++v11;
            if ( iswspace(*v42) )
            {
              do
                ++v42;
              while ( iswspace(*v42) );
              v21 = a6;
            }
            v40 = *v42;
            if ( *v42 != 44 )
            {
              if ( v40 != 41 )
                break;
              goto LABEL_109;
            }
            v26 = v42 + 1;
            v40 = *v26;
          }
          while ( *v26 );
        }
        else
        {
LABEL_109:
          if ( v40 == 41 )
          {
            v43 = 2LL * v8;
LABEL_129:
            if ( v43 > 0xFFFFFFFF )
              goto LABEL_131;
            v48 = v43 + v21;
            if ( (unsigned int)v43 + v21 < v21 )
              goto LABEL_131;
            goto LABEL_148;
          }
        }
LABEL_86:
        v13 = 1336;
LABEL_132:
        v9 = v90;
        goto LABEL_25;
      }
      if ( a7 == 5 )
      {
        v34 = *v25;
        if ( *v25 )
        {
          while ( 1 )
          {
            for ( n = v34; iswspace(n); n = *v26 )
              ++v26;
            v13 = sub_140675CC0(v26, &Sid, &EndPointer, &v99);
            if ( v13 )
              goto LABEL_132;
            v36 = Sid;
            if ( !Sid )
            {
LABEL_125:
              v9 = 0LL;
              goto LABEL_25;
            }
            v37 = EndPointer;
            ++v11;
            v38 = RtlLengthSid(Sid);
            v39 = v38 + v21;
            if ( v38 + v21 < v21 )
              goto LABEL_131;
            v21 = v39 + 4;
            if ( v39 + 4 < v39 )
              goto LABEL_131;
            if ( v99 )
            {
              ExFreePoolWithTag(v36, 0);
              Sid = 0LL;
            }
            while ( iswspace(*v37) )
              ++v37;
            v34 = *v37;
            if ( *v37 != 44 )
            {
              if ( v34 != 41 )
                goto LABEL_86;
              break;
            }
            v26 = v37 + 1;
            v34 = *v26;
            if ( !*v26 )
              goto LABEL_86;
          }
        }
        if ( v34 != 41 )
          goto LABEL_86;
LABEL_149:
        v54 = 4LL * (v11 - 1);
        if ( v54 <= 0xFFFFFFFF )
        {
          v55 = v54 + v21;
          if ( (unsigned int)v54 + v21 >= v21 )
          {
            v56 = v55 + 3;
            if ( v55 + 3 < v55 )
            {
              v56 = -1;
              v13 = 534;
            }
            v57 = v56 & 0xFFFFFFFC;
            v94 = v57;
            v58 = sub_14067757C(v57);
            v90 = v58;
            v9 = v58;
            if ( !v58 )
            {
              v13 = 8;
              goto LABEL_25;
            }
            v59 = v98;
            v58[2] = a7;
            v60 = v95;
            v9[3] = 0;
            *((_DWORD *)v9 + 2) = v60;
            v61 = 2LL * v59;
            v62 = 4 * v11 + 16;
            *((_DWORD *)v9 + 3) = v11;
            v63 = v62 + 2 * v59;
            v64 = P;
            *(_DWORD *)v9 = v62;
            memmove((char *)v9 + v62, v64, v61);
            v65 = (unsigned __int64 *)((char *)v9 + v63);
            if ( a7 == 1 )
            {
              v66 = *v25;
              if ( *v25 )
              {
                while ( 1 )
                {
                  v92 = 0;
                  v89 = sub_1403E3A4C(0LL, v25, &EndPointer, 0, 0, &v92);
                  if ( EndPointer == v25 && !v89 )
                    goto LABEL_238;
                  if ( v92 )
                  {
LABEL_239:
                    v13 = 534;
                    goto LABEL_25;
                  }
                  *(_DWORD *)&v9[2 * v91 + 8] = v63;
                  *v65 = v89;
                  v63 += 8;
                  v25 = EndPointer;
                  v65 = (unsigned __int64 *)((char *)v9 + v63);
                  ++v91;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v25;
                    while ( iswspace(*v25) );
                    v57 = v94;
                  }
                  v66 = *v25;
                  if ( *v25 != 44 )
                    goto LABEL_198;
                  if ( !*++v25 )
                    goto LABEL_238;
                }
              }
              goto LABEL_198;
            }
            if ( a7 == 2 )
              goto LABEL_219;
            if ( a7 != 3 )
            {
              if ( a7 == 5 )
              {
                v66 = *v25;
                if ( *v25 )
                {
                  while ( 1 )
                  {
                    for ( ii = v66; iswspace(ii); ii = *v25 )
                      ++v25;
                    v13 = sub_140675CC0(v25, &Sid, &EndPointer, &v99);
                    if ( v13 )
                      goto LABEL_25;
                    v78 = Sid;
                    if ( !Sid )
                      goto LABEL_25;
                    v79 = RtlLengthSid(Sid);
                    *(_DWORD *)&v9[2 * v91 + 8] = v63;
                    v80 = v63 + 4;
                    v63 = v79 + v80;
                    *(_DWORD *)v65 = v79;
                    memmove((char *)v9 + v80, v78, v79);
                    ++v91;
                    v25 = EndPointer;
                    v65 = (unsigned __int64 *)((char *)v9 + v63);
                    if ( v99 )
                    {
                      ExFreePoolWithTag(v78, 0);
                      Sid = 0LL;
                    }
                    while ( iswspace(*v25) )
                      ++v25;
                    v66 = *v25;
                    if ( *v25 != 44 )
                    {
                      if ( v66 != 41 )
                        goto LABEL_238;
                      v57 = v94;
                      goto LABEL_198;
                    }
                    v66 = *++v25;
                    if ( !*v25 )
                      goto LABEL_238;
                  }
                }
                goto LABEL_198;
              }
              if ( a7 != 6 )
              {
                if ( a7 != 16 )
                  goto LABEL_238;
                v66 = *v25;
                if ( *v25 )
                {
                  while ( 1 )
                  {
                    if ( iswspace(v66) )
                    {
                      do
                        ++v25;
                      while ( iswspace(*v25) );
                      v57 = v94;
                    }
                    for ( jj = v25; sub_1409D08CC(*jj, &a6); jj = v69 + 1 )
                      ;
                    v70 = v68 >> 1;
                    *(_DWORD *)&v9[2 * v91 + 8] = v63;
                    *(_DWORD *)v65 = v70;
                    v63 += v70 + 4;
                    v71 = v69 - 1;
                    while ( v71 > v25 )
                    {
                      if ( !sub_1409D08CC(*v71, &a8) || !sub_1409D08CC(*(_WORD *)(v72 - 2), &a5) )
                        goto LABEL_238;
                      v71 = (unsigned __int16 *)(v73 - 4);
                      *(_BYTE *)(v75 + v74) = a8 | (16 * a5);
                    }
                    if ( v71 == v25 )
                    {
                      if ( !sub_1409D08CC(*v71, &a8) )
                        goto LABEL_238;
                      *v76 = a8;
                    }
                    v25 = v69;
                    ++v91;
                    v65 = (unsigned __int64 *)((char *)v9 + v63);
                    if ( iswspace(*v69) )
                    {
                      do
                        ++v25;
                      while ( iswspace(*v25) );
                      v57 = v94;
                    }
                    v66 = *v25;
                    if ( *v25 != 44 )
                      break;
                    v66 = *++v25;
                    if ( !*v25 )
                      goto LABEL_238;
                  }
                }
LABEL_198:
                if ( v66 == 41 )
                {
LABEL_199:
                  v81 = v100;
                  *v101 = v9;
                  *v102 = v57;
                  *v81 = v25 + 1;
                  goto LABEL_25;
                }
LABEL_238:
                v13 = 1336;
                goto LABEL_25;
              }
LABEL_219:
              v66 = *v25;
              if ( *v25 )
              {
                while ( 1 )
                {
                  v92 = 0;
                  v88 = sub_1403E3A4C(0LL, v25, &EndPointer, 0, 1, &v92);
                  if ( EndPointer == v25 && !v88 )
                    goto LABEL_238;
                  if ( v92 )
                    goto LABEL_239;
                  *(_DWORD *)&v9[2 * v91 + 8] = v63;
                  *v65 = v88;
                  v63 += 8;
                  v25 = EndPointer;
                  v65 = (unsigned __int64 *)((char *)v9 + v63);
                  ++v91;
                  if ( iswspace(*EndPointer) )
                  {
                    do
                      ++v25;
                    while ( iswspace(*v25) );
                    v9 = v90;
                  }
                  v66 = *v25;
                  if ( *v25 != 44 )
                    goto LABEL_198;
                  if ( !*++v25 )
                    goto LABEL_238;
                }
              }
              goto LABEL_198;
            }
            v82 = *v25;
            if ( *v25 )
            {
              while ( 1 )
              {
                for ( kk = v82; iswspace(kk); kk = *v25 )
                  ++v25;
                if ( *v25 != 34 )
                  break;
                v84 = v25[1];
                v85 = v25 + 1;
                v86 = 0;
                while ( v84 != 34 )
                {
                  if ( !v84 )
                    goto LABEL_86;
                  ++v85;
                  ++v86;
                  v84 = *v85;
                }
                *(_DWORD *)&v90[2 * v91 + 8] = v63;
                v63 += 2 * v86 + 2;
                v87 = 2LL * v86;
                memmove(v65, v25 + 1, v87);
                v25 = v85 + 1;
                *(_WORD *)((char *)v65 + v87) = 0;
                v65 = (unsigned __int64 *)((char *)v90 + v63);
                ++v91;
                while ( iswspace(*v25) )
                  ++v25;
                v82 = *v25;
                if ( *v25 != 44 )
                {
                  v9 = v90;
                  if ( v82 != 41 )
                    goto LABEL_238;
                  v57 = v94;
                  goto LABEL_217;
                }
                v82 = *++v25;
                if ( !*v25 )
                  goto LABEL_86;
              }
            }
            else
            {
LABEL_217:
              if ( v82 == 41 )
                goto LABEL_199;
            }
            goto LABEL_86;
          }
        }
LABEL_131:
        v13 = 534;
        goto LABEL_132;
      }
      if ( a7 != 6 )
      {
        if ( a7 == 16 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            while ( 1 )
            {
              for ( mm = v27; iswspace(mm); mm = *v26 )
                ++v26;
              while ( sub_1409D08CC(*v26, &a6) )
              {
                ++v26;
                if ( v29 < v30 )
                  goto LABEL_155;
              }
              ++v11;
              v32 = (v29 >> 1) + v21;
              if ( v32 < v21 )
                goto LABEL_155;
              v21 = v32 + 4;
              if ( v32 + 4 < v32 )
                goto LABEL_155;
              for ( nn = v31; iswspace(nn); nn = *v26 )
                ++v26;
              v27 = *v26;
              if ( *v26 != 44 )
              {
                if ( v27 != 41 )
                  goto LABEL_142;
                break;
              }
              v27 = *++v26;
              if ( !*v26 )
                goto LABEL_142;
            }
          }
          if ( v27 != 41 )
            goto LABEL_142;
          goto LABEL_149;
        }
LABEL_34:
        v13 = 1336;
        goto LABEL_24;
      }
    }
    v44 = *v25;
    if ( !*v25 )
      goto LABEL_127;
    v45 = a7;
    while ( 1 )
    {
      v92 = 0;
      v46 = sub_1403E3A4C(0LL, v26, &EndPointer, 0, 1, &v92);
      if ( EndPointer == v26 && !v46 )
      {
        v13 = 1336;
        goto LABEL_125;
      }
      if ( v92 )
        goto LABEL_131;
      if ( v45 == 6 && v46 > 1 )
        goto LABEL_86;
      v47 = EndPointer;
      ++v11;
      if ( iswspace(*EndPointer) )
      {
        do
          ++v47;
        while ( iswspace(*v47) );
        v45 = a7;
      }
      v44 = *v47;
      if ( *v47 != 44 )
        break;
      v26 = v47 + 1;
      if ( !*v26 )
        goto LABEL_86;
    }
    if ( v44 == 41 )
    {
LABEL_127:
      if ( v44 == 41 )
      {
        v43 = 8LL * v11;
        goto LABEL_129;
      }
    }
    goto LABEL_86;
  }
LABEL_25:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v13 && v9 )
    ExFreePoolWithTag(v9, 0);
  return v13;
}
