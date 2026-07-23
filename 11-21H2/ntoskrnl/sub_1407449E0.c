/*
 * XREFs of sub_1407449E0 @ 0x1407449E0
 * Callers:
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 * Callees:
 *     sub_14039F184 @ 0x14039F184 (sub_14039F184.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     sub_14056187C @ 0x14056187C (sub_14056187C.c)
 *     sub_140561B8C @ 0x140561B8C (sub_140561B8C.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_1407473E8 @ 0x1407473E8 (sub_1407473E8.c)
 *     sub_1407474E4 @ 0x1407474E4 (sub_1407474E4.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407449E0(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  int v5; // esi
  int v6; // edi
  _QWORD *v7; // r13
  int v8; // eax
  __int64 v9; // rbx
  wchar_t *v10; // rcx
  const WCHAR *v11; // r14
  int i; // r12d
  int v13; // eax
  __int64 v14; // rax
  wchar_t *v15; // rdi
  wchar_t *v16; // rbx
  int v17; // eax
  const WCHAR *v18; // r10
  char v19; // bl
  int v20; // edx
  _DWORD *v21; // r11
  const WCHAR *v22; // rdi
  __int64 v23; // rax
  const WCHAR *v24; // r12
  _QWORD *v25; // rax
  char *v26; // rcx
  PVOID v27; // rcx
  PVOID v28; // rcx
  unsigned int v30; // r15d
  PCWSTR *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  PVOID *v34; // rax
  PVOID *v35; // rcx
  PVOID *v36; // rax
  PVOID *v37; // rax
  int v38; // eax
  PVOID *v39; // rax
  wchar_t *v40; // rax
  wchar_t *v41; // rbx
  wchar_t *v42; // rax
  __int64 v43; // rcx
  PVOID *v44; // rdx
  __int64 v45; // rax
  char v46; // al
  char *v47; // rcx
  unsigned int v48; // ebx
  unsigned int v49; // r8d
  unsigned int v50; // edi
  unsigned int v51; // r9d
  __int64 v52; // r14
  _QWORD *v53; // r11
  __int64 v54; // rdx
  int v55; // edx
  const wchar_t *v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rdi
  _QWORD *j; // rbx
  __int64 v60; // rdx
  _QWORD *v61; // r11
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  PVOID P; // [rsp+60h] [rbp-59h] BYREF
  PVOID v68; // [rsp+68h] [rbp-51h] BYREF
  PVOID *v69; // [rsp+70h] [rbp-49h]
  wchar_t *Str; // [rsp+78h] [rbp-41h]
  PVOID v71; // [rsp+80h] [rbp-39h] BYREF
  PVOID *v72; // [rsp+88h] [rbp-31h]
  int v73; // [rsp+90h] [rbp-29h] BYREF
  int v74; // [rsp+94h] [rbp-25h]
  wchar_t *v75; // [rsp+98h] [rbp-21h]
  int v76; // [rsp+A0h] [rbp-19h]
  unsigned int v77; // [rsp+A4h] [rbp-15h]
  int v78; // [rsp+A8h] [rbp-11h]
  __int64 v79; // [rsp+B0h] [rbp-9h]
  PCWSTR SourceString; // [rsp+B8h] [rbp-1h]
  const WCHAR *v81; // [rsp+C0h] [rbp+7h]
  const wchar_t *v82; // [rsp+C8h] [rbp+Fh]
  unsigned int v84; // [rsp+128h] [rbp+6Fh] BYREF
  _QWORD *v85; // [rsp+130h] [rbp+77h]
  int v86; // [rsp+138h] [rbp+7Fh] BYREF

  v85 = a3;
  v3 = 0;
  v69 = &v68;
  v68 = &v68;
  v72 = &v71;
  v71 = &v71;
  v74 = 0;
  v4 = a1;
  SourceString = 0LL;
  v5 = 0;
  v82 = 0LL;
  v6 = 0;
  v86 = 0;
  v7 = 0LL;
  v73 = 1;
  v84 = 0;
  P = 0LL;
  if ( a2 )
  {
    SourceString = a2;
    v33 = -1LL;
    do
      ++v33;
    while ( a2[v33] );
    v82 = (const wchar_t *)((unsigned __int64)&a2[v33 + 1] & -(__int64)(a2[v33 + 1] != 0));
  }
  v8 = 1;
  LODWORD(v9) = 520;
  if ( byte_140C54E98 )
    v8 = 3;
  v79 = 520LL;
  v78 = v8;
  Str = (wchar_t *)ExAllocatePool2(256LL, 520LL, 1667526736LL);
  v10 = Str;
  if ( !Str )
  {
LABEL_77:
    v5 = -1073741670;
    goto LABEL_49;
  }
  v77 = 0;
  while ( 1 )
  {
    v11 = *(const WCHAR **)(v4 + 16 * (v3 + 2LL));
    v81 = v11;
    if ( !v11 )
      goto LABEL_7;
    for ( i = 0; ; ++i )
    {
      v76 = i;
      if ( !*v11 )
        goto LABEL_24;
      v73 = 1;
      v84 = 0;
      while ( 1 )
      {
        v13 = sub_14077DA5C(
                qword_140D00AC0,
                (_DWORD)v11,
                11,
                -1,
                0LL,
                (__int64)&qword_140010B50,
                (__int64)&v73,
                (__int64)v10,
                v9,
                (__int64)&v84,
                0);
        v5 = v13;
        if ( v13 != -1073741789 )
          break;
        if ( v84 <= (unsigned int)v9 )
          goto LABEL_18;
        v9 = v84;
        v79 = v84;
        if ( Str )
          ExFreePoolWithTag(Str, 0);
        Str = (wchar_t *)ExAllocatePool2(256LL, v9, 1667526736LL);
        v10 = Str;
        if ( !Str )
          goto LABEL_77;
      }
      if ( v13 == -1073741670 )
        break;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741790 || v13 == -1073740697 )
        {
          if ( v6 != -1073741772 )
            v6 = v13;
          v74 = v6;
        }
        else if ( v13 == -1073741772 )
        {
          v74 = -1073741772;
        }
LABEL_18:
        v5 = 0;
        goto LABEL_19;
      }
      if ( v73 != 8210 )
        goto LABEL_19;
      v10 = Str;
      v15 = Str;
      if ( *Str )
      {
        while ( 1 )
        {
          v16 = wcschr(v15, 0x5Cu);
          if ( !v16 )
            goto LABEL_40;
          v5 = sub_1407473E8(v15, 0LL, 0LL, &v86);
          if ( v5 < 0 )
            goto LABEL_43;
          v17 = v78;
          v18 = v15;
          *v16 = 0;
          v15 = v16 + 1;
          v19 = v86;
          v20 = v17;
          v75 = v15;
          if ( v3 == 2 )
          {
            if ( (_BYTE)v86 != 3 )
              goto LABEL_40;
            v20 = v17 | 8;
          }
          if ( (_BYTE)v86 != 1 && (_BYTE)v86 != 2 && (_BYTE)v86 != 3 )
            goto LABEL_40;
          v5 = sub_140746270(v18, v11, v20, (__int64)&P);
          if ( v5 >= 0 )
          {
            v21 = P;
            v22 = (const WCHAR *)*((_QWORD *)P + 21);
            if ( v22 )
            {
              if ( *v22 )
              {
                do
                {
                  v30 = 0;
                  v31 = (PCWSTR *)(a1 + 32);
                  while ( !*v31 || !sub_14039F184(*v31, v22) )
                  {
                    ++v30;
                    v31 += 2;
                    if ( v30 >= 3 )
                      goto LABEL_61;
                  }
                  *((_QWORD *)P + 22) = v22;
LABEL_61:
                  v21 = P;
                  if ( *((_QWORD *)P + 22) )
                    break;
                  v32 = -1LL;
                  do
                    ++v32;
                  while ( v22[v32] );
                  v22 += v32 + 1;
                }
                while ( *v22 );
                v11 = v81;
                v3 = v77;
                i = v76;
              }
              if ( *((_QWORD *)v21 + 22) )
              {
                v21[27] |= 0xFFFFu;
                v21 = P;
              }
            }
            if ( v19 != 3 )
            {
              if ( !SourceString )
                goto LABEL_36;
              if ( !sub_140561B8C((__int64)v21, SourceString) )
              {
                v35 = v69;
                v36 = (PVOID *)P;
                if ( *v69 != &v68 )
                  goto LABEL_175;
                *((_QWORD *)P + 1) = v69;
                *v36 = &v68;
                *v35 = v36;
                v69 = v36;
                goto LABEL_39;
              }
              v21 = P;
LABEL_36:
              if ( !*((_QWORD *)v21 + 22) )
              {
                if ( !v7 )
                {
                  v7 = v21;
LABEL_39:
                  v15 = v75;
                  goto LABEL_40;
                }
                if ( (int)sub_14056187C((__int64)v21, (__int64)v7) < 0 )
                {
                  v37 = v69;
                  if ( *v69 != &v68 )
                    goto LABEL_175;
                  v7[1] = v69;
                  *v7 = &v68;
                  *v37 = v7;
                  v69 = (PVOID *)v7;
                  if ( (v7[23] & 0xC) != 0 )
                  {
                    v38 = *((_DWORD *)P + 46);
                    if ( (v38 & 4) == 0 )
                      *((_DWORD *)P + 46) = v38 | 8;
                  }
                  v7 = P;
                  goto LABEL_39;
                }
              }
              v39 = v69;
              if ( *v69 != &v68 )
LABEL_175:
                __fastfail(3u);
              *(_QWORD *)v21 = &v68;
              *((_QWORD *)v21 + 1) = v39;
              *v39 = v21;
              v69 = (PVOID *)v21;
              goto LABEL_39;
            }
            v34 = v72;
            if ( *v72 != &v71 )
              goto LABEL_175;
            *((_QWORD *)v21 + 1) = v72;
            *(_QWORD *)v21 = &v71;
            *v34 = v21;
            v72 = (PVOID *)v21;
            goto LABEL_39;
          }
          v5 = 0;
LABEL_40:
          v23 = -1LL;
          do
            ++v23;
          while ( v15[v23] );
          v15 += v23 + 1;
          if ( !*v15 )
          {
LABEL_43:
            LODWORD(v9) = v79;
LABEL_19:
            v10 = Str;
            break;
          }
        }
      }
      v14 = -1LL;
      do
        ++v14;
      while ( v11[v14] );
      v6 = v74;
      v11 += v14 + 1;
      v81 = v11;
    }
    v10 = Str;
LABEL_24:
    if ( v5 < 0 )
      goto LABEL_49;
LABEL_7:
    v77 = ++v3;
    if ( v3 >= 3 )
      break;
    v4 = a1;
  }
  v24 = SourceString;
  if ( !SourceString )
    goto LABEL_45;
  if ( v7 )
  {
LABEL_46:
    while ( 1 )
    {
      v25 = v68;
      if ( v68 == &v68 )
        break;
      if ( *((PVOID **)v68 + 1) != &v68 )
        goto LABEL_175;
      v43 = *(_QWORD *)v68;
      if ( *(PVOID *)(*(_QWORD *)v68 + 8LL) != v68 )
        goto LABEL_175;
      v68 = *(PVOID *)v68;
      *(_QWORD *)(v43 + 8) = &v68;
      P = v25;
      v44 = (PVOID *)v7[29];
      if ( *v44 != v7 + 28 )
        goto LABEL_175;
      *v25 = v7 + 28;
      v25[1] = v44;
      *v44 = v25;
      v7[29] = v25;
    }
LABEL_47:
    while ( 2 )
    {
      v26 = (char *)v71;
      if ( v71 == &v71 )
      {
        *v85 = v7;
        v7 = 0LL;
        goto LABEL_49;
      }
      if ( *((PVOID **)v71 + 1) != &v71 )
        goto LABEL_175;
      v45 = *(_QWORD *)v71;
      if ( *(PVOID *)(*(_QWORD *)v71 + 8LL) != v71 )
        goto LABEL_175;
      v71 = *(PVOID *)v71;
      *(_QWORD *)(v45 + 8) = &v71;
      P = v26;
      v46 = sub_140776274(v26 + 188);
      v47 = (char *)P;
      if ( !v46 && !*((_QWORD *)P + 22) )
      {
        if ( *((_QWORD *)P + 18) )
        {
          v48 = *((_DWORD *)v7 + 38);
          v49 = 0;
          if ( !v48 )
            goto LABEL_133;
          v50 = *((_DWORD *)P + 38);
          while ( 1 )
          {
            v51 = 0;
            if ( v50 )
            {
              v52 = v7[18];
              while ( 1 )
              {
                v53 = (_QWORD *)(*((_QWORD *)P + 18) + 16LL * v51);
                v54 = *(_QWORD *)(v52 + 16LL * v49) - *v53;
                if ( !v54 )
                  v54 = *(_QWORD *)(v52 + 16LL * v49 + 8) - v53[1];
                if ( !v54 )
                  break;
                if ( ++v51 >= v50 )
                  goto LABEL_132;
              }
              if ( v53 )
                break;
            }
LABEL_132:
            if ( ++v49 >= v48 )
              goto LABEL_133;
          }
        }
        if ( !v24 )
        {
LABEL_147:
          v58 = v7 + 26;
          for ( j = (_QWORD *)v7[26]; ; j = (_QWORD *)*j )
          {
            if ( j == v58 )
              goto LABEL_161;
            v60 = *(_QWORD *)((char *)j + 188) - *(_QWORD *)(v47 + 188);
            if ( !v60 )
              v60 = *(_QWORD *)((char *)j + 196) - *(_QWORD *)(v47 + 196);
            if ( !v60 )
            {
              if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 9), (PCUNICODE_STRING)(v47 + 72), 1u) )
              {
                v61 = P;
                if ( !j[18] )
                {
                  if ( !*((_QWORD *)P + 18) )
                    goto LABEL_165;
                  goto LABEL_166;
                }
                if ( !*((_QWORD *)P + 18) )
                  goto LABEL_158;
LABEL_165:
                if ( (int)sub_14056187C((__int64)P, (__int64)j) >= 0 )
                {
LABEL_158:
                  v47 = 0LL;
                  j = v61;
                  P = 0LL;
                  goto LABEL_159;
                }
LABEL_166:
                v63 = (_QWORD *)*j;
                if ( *(_QWORD **)(*j + 8LL) != j )
                  goto LABEL_175;
                v64 = (_QWORD *)j[1];
                if ( (_QWORD *)*v64 != j )
                  goto LABEL_175;
                *v64 = v63;
                v63[1] = v64;
                v47 = (char *)P;
LABEL_159:
                if ( j )
                {
                  sub_1407474E4(j);
                  v47 = (char *)P;
                }
LABEL_161:
                if ( v47 )
                {
                  v62 = (_QWORD *)v7[27];
                  if ( (_QWORD *)*v62 != v58 )
                    goto LABEL_175;
                  *(_QWORD *)v47 = v58;
                  *((_QWORD *)v47 + 1) = v62;
                  *v62 = v47;
                  v7[27] = v47;
                }
                goto LABEL_47;
              }
              v47 = (char *)P;
            }
          }
        }
        if ( v82 )
        {
          v55 = *v82 - 42;
          if ( *v82 == 42 )
            v55 = v82[1];
          if ( v55 )
          {
            v56 = v82;
            if ( !*v82 )
              goto LABEL_133;
            while ( !sub_140561B8C((__int64)v47, v56) )
            {
              v57 = -1LL;
              do
                ++v57;
              while ( v56[v57] );
              v47 = (char *)P;
              v56 += v57 + 1;
              if ( !*v56 )
                goto LABEL_133;
            }
            v47 = (char *)P;
          }
          if ( v47 )
            goto LABEL_147;
        }
      }
LABEL_133:
      sub_1407474E4(v47);
      continue;
    }
  }
  v40 = wcschr(SourceString, 0x3Au);
  v41 = v40;
  if ( !v40 || (*v40 = 0, (v42 = wcschr(v40 + 1, 0x2Cu)) == 0LL) )
  {
    v5 = -1073741773;
    goto LABEL_49;
  }
  *v42 = 0;
  if ( (int)sub_140746270(v24, v41 + 1, 4, (__int64)&P) < 0 )
    goto LABEL_109;
  v7 = P;
LABEL_45:
  if ( v7 )
    goto LABEL_46;
LABEL_109:
  if ( !v6 || v6 == -1073741772 )
    v5 = -1073740656;
  else
    v5 = v6;
LABEL_49:
  while ( 1 )
  {
    v27 = v68;
    if ( v68 == &v68 )
      break;
    if ( *((PVOID **)v68 + 1) != &v68 )
      goto LABEL_175;
    v65 = *(_QWORD **)v68;
    if ( *(PVOID *)(*(_QWORD *)v68 + 8LL) != v68 )
      goto LABEL_175;
    v68 = *(PVOID *)v68;
    v65[1] = &v68;
    P = v27;
    sub_1407474E4(v27);
  }
  while ( 1 )
  {
    v28 = v71;
    if ( v71 == &v71 )
      break;
    if ( *((PVOID **)v71 + 1) != &v71 )
      goto LABEL_175;
    v66 = *(_QWORD **)v71;
    if ( *(PVOID *)(*(_QWORD *)v71 + 8LL) != v71 )
      goto LABEL_175;
    v71 = *(PVOID *)v71;
    v66[1] = &v71;
    P = v28;
    sub_1407474E4(v28);
  }
  if ( v7 )
    sub_1407474E4(v7);
  if ( Str )
    ExFreePoolWithTag(Str, 0);
  return (unsigned int)v5;
}
