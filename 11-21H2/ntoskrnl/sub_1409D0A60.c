/*
 * XREFs of sub_1409D0A60 @ 0x1409D0A60
 * Callers:
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_1403E3A4C @ 0x1403E3A4C (sub_1403E3A4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409CFE78 @ 0x1409CFE78 (sub_1409CFE78.c)
 *     sub_1409D054C @ 0x1409D054C (sub_1409D054C.c)
 *     sub_1409D0588 @ 0x1409D0588 (sub_1409D0588.c)
 *     sub_1409D07E0 @ 0x1409D07E0 (sub_1409D07E0.c)
 *     sub_1409D08CC @ 0x1409D08CC (sub_1409D08CC.c)
 *     sub_1409D09E4 @ 0x1409D09E4 (sub_1409D09E4.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D1A80 @ 0x1409D1A80 (sub_1409D1A80.c)
 *     sub_1409D1CD4 @ 0x1409D1CD4 (sub_1409D1CD4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D0A60(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        char a6,
        unsigned int a7,
        int a8,
        char a9)
{
  unsigned int *v9; // r15
  unsigned int v13; // esi
  char v14; // r13
  PVOID v15; // rax
  PSID v16; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  char v22; // r12
  unsigned int v23; // edx
  void *v24; // r8
  unsigned int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r14d
  void *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  bool v31; // zf
  char v32; // r14
  __int64 v33; // r14
  __int64 v34; // rdi
  PSID v35; // rcx
  unsigned int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // r14
  PVOID v39; // rax
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  unsigned __int64 v45; // rax
  wint_t *v46; // rdx
  unsigned __int64 v47; // r13
  wchar_t v48; // ax
  unsigned __int64 v49; // rax
  __int16 v50; // r15
  wint_t *v51; // rbx
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  PVOID v55; // [rsp+58h] [rbp-28h] BYREF
  PSID Sid; // [rsp+60h] [rbp-20h] BYREF
  wint_t *v57; // [rsp+68h] [rbp-18h] BYREF
  __int64 v58; // [rsp+70h] [rbp-10h] BYREF
  char v60; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  a7 = 0;
  a6 = 0;
  v60 = 0;
  v57 = 0LL;
  v13 = 0;
  Sid = 0LL;
  v14 = 0;
  a9 = 0;
  v55 = 0LL;
  v58 = 0LL;
  a8 = 0;
  *a5 = 0;
  v15 = sub_14067757C(0x10uLL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    v13 = sub_1409D0588(a1, a4, v9);
LABEL_80:
    if ( v13 )
      goto LABEL_81;
    goto LABEL_7;
  }
  if ( *a1 == 34 )
  {
    v13 = sub_1409D1A80(a1, a4, v9);
    if ( !v13 )
      goto LABEL_7;
    goto LABEL_80;
  }
  if ( *a1 == 123 )
  {
    v18 = *a4;
    a7 = 1;
    *(_BYTE *)(v18 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        v13 = sub_1409D09E4((__int64)a1, &a7);
        if ( v13 )
          goto LABEL_81;
        v19 = &a1[a7];
        if ( *v19 == 123 )
          goto LABEL_37;
        v13 = sub_1409D0A60((_DWORD)v19, 0, 0, (unsigned int)&v55, (__int64)v9, 0, 0, 0, 0);
        if ( v13 )
          goto LABEL_81;
        if ( a3 )
        {
          if ( v14 && v14 != *((_BYTE *)v55 + 1) )
            goto LABEL_37;
          v14 = *((_BYTE *)v55 + 1);
        }
        LOBYTE(v20) = *((_BYTE *)v55 + 1);
        v22 = sub_1409D1CD4(v20);
        v23 = v22 != 0 ? 1 : 5;
        v24 = *(void **)(*a4 + 8);
        if ( v24 )
        {
          v25 = *(_DWORD *)(*a4 + 4);
          v26 = v25 + *(_DWORD *)(v21 + 4);
          if ( v26 < v25 || (v27 = v23 + v26, v23 + v26 < v26) )
          {
LABEL_38:
            v13 = 534;
            goto LABEL_81;
          }
          v28 = sub_1409CFE78(v25, v27, v24);
          v29 = *a4;
          *(_QWORD *)(*a4 + 8) = v28;
          if ( !v28 )
            goto LABEL_2;
        }
        else
        {
          v27 = v23 + *(_DWORD *)(v21 + 4);
          if ( v27 < v23 )
            goto LABEL_38;
          v29 = *a4;
          *(_QWORD *)(v29 + 8) = sub_14067757C(v27);
        }
        v30 = *(_QWORD *)(v29 + 8);
        if ( !v30 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v29 + 4) + v30) = *((_BYTE *)v55 + 1);
        if ( !v22 )
          *(_DWORD *)(*(unsigned int *)(v29 + 4) + *(_QWORD *)(v29 + 8) + 1LL) = *((_DWORD *)v55 + 1);
        memmove(
          (void *)(*(_QWORD *)(v29 + 8) + *(unsigned int *)(v29 + 4)
                                        + (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                                        + 5),
          *((const void **)v55 + 1),
          *((unsigned int *)v55 + 1));
        *(_DWORD *)(v29 + 4) = v27;
        sub_1409D054C(v55);
        v55 = 0LL;
        a7 += *v9;
        v13 = sub_1409D09E4((__int64)a1, &a7);
        if ( v13 )
          goto LABEL_81;
        if ( a1[a7] != 44 )
        {
          v31 = a1[a7] == 125;
          v16 = 0LL;
          if ( !v31 )
            goto LABEL_41;
          *v9 = a7 + 1;
          goto LABEL_8;
        }
        if ( !a1[++a7] )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v32 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    a7 = 3;
    v13 = sub_1409D09E4((__int64)a1, &a7);
    if ( v13 )
      goto LABEL_81;
    if ( a1[a7] == 40 )
    {
      v33 = a7 + 1;
      v13 = sub_140675CC0(&a1[v33], &Sid, &v58, &a9);
      if ( v13 || (a7 = v33 + ((v58 - 2 * v33 - (__int64)a1) >> 1), (v13 = sub_1409D09E4((__int64)a1, &a7)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v31 = a1[a7] == 41;
        v16 = Sid;
        if ( v31 )
        {
          v34 = *a4;
          v35 = Sid;
          *v9 = a7 + 1;
          *(_BYTE *)(v34 + 1) = 81;
          *(_DWORD *)(v34 + 4) = RtlLengthSid(v35);
          v31 = a9 == 0;
          *(_QWORD *)(v34 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v34 = v31;
          goto LABEL_8;
        }
LABEL_41:
        v13 = 1336;
      }
      goto LABEL_82;
    }
    goto LABEL_37;
  }
  sub_1409D07E0(a1, &a7);
  if ( *a1 == 35 )
  {
    v36 = a7;
    if ( a7 >= 2 )
    {
      v37 = *a4;
      LODWORD(v38) = a7 >> 1;
      *v9 = a7;
      *(_BYTE *)(v37 + 1) = 24;
      *(_DWORD *)(v37 + 4) = v38;
      v39 = sub_14067757C((unsigned int)v38);
      *(_QWORD *)(*a4 + 8) = v39;
      if ( !v39 )
      {
LABEL_2:
        v13 = 8;
LABEL_81:
        v16 = 0LL;
        goto LABEL_82;
      }
      v40 = (int)(v36 - 1);
      while ( v40 >= 1 )
      {
        if ( !sub_1409D08CC(a1[v40], &a6) || !sub_1409D08CC(a1[v41 - 1], &v60) )
          goto LABEL_2;
        v38 = (unsigned int)(v38 - 1);
        v40 = v42 - 2;
        *(_BYTE *)(v38 + *(_QWORD *)(v43 + 8)) = a6 | (16 * v60);
      }
LABEL_7:
      v16 = 0LL;
      goto LABEL_8;
    }
LABEL_37:
    v13 = 1336;
    goto LABEL_81;
  }
  v44 = a7;
  if ( !a7 )
    goto LABEL_37;
  *v9 = a7;
  v45 = sub_1403E3A4C(0LL, a1, &v57, 0, 1, &a8);
  v46 = v57;
  v47 = v45;
  if ( v57 == a1 && !v45 )
    goto LABEL_37;
  if ( v57 != &a1[v44] || a8 )
    goto LABEL_37;
  v48 = *a1;
  if ( *a1 == 45 )
  {
    v49 = sub_1403E3A4C(0LL, ++a1, &v57, 0, 1, &a8);
    if ( v49 >= v47 && v49 )
      goto LABEL_37;
    v48 = *a1;
    v50 = 2;
    v46 = v57;
  }
  else if ( v48 == 43 )
  {
    ++a1;
    v50 = 1;
    v48 = *a1;
  }
  else
  {
    v50 = 3;
  }
  if ( v48 == 48 )
  {
    v51 = a1 + 1;
    if ( v51 >= v46 || ((*v51 - 88) & 0xFFDF) != 0 )
      v32 = 1;
  }
  else
  {
    v32 = 2;
  }
  v52 = *a4;
  *(_BYTE *)(v52 + 1) = 4;
  *(_DWORD *)(v52 + 4) = 10;
  v53 = sub_14067757C(0xAuLL);
  v54 = *a4;
  v16 = 0LL;
  *(_QWORD *)(*a4 + 8) = v53;
  if ( v53 )
  {
    *v53 = v47;
    *(_WORD *)(*(_QWORD *)(v54 + 8) + 8LL) = v50;
    *(_BYTE *)(*(_QWORD *)(v54 + 8) + 9LL) = v32;
    goto LABEL_8;
  }
  v13 = 8;
LABEL_82:
  sub_1409D054C((_QWORD *)*a4);
  *a4 = 0LL;
LABEL_8:
  if ( v55 )
    sub_1409D054C(v55);
  if ( v16 && a9 )
    ExFreePoolWithTag(v16, 0);
  return v13;
}
