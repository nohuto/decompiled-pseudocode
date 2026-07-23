/*
 * XREFs of sub_1409D1D04 @ 0x1409D1D04
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     iswspace @ 0x1403E1C10 (iswspace.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409D00CC @ 0x1409D00CC (sub_1409D00CC.c)
 *     sub_1409D054C @ 0x1409D054C (sub_1409D054C.c)
 *     sub_1409D083C @ 0x1409D083C (sub_1409D083C.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D11D0 @ 0x1409D11D0 (sub_1409D11D0.c)
 *     sub_1409D1CD4 @ 0x1409D1CD4 (sub_1409D1CD4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D1D04(wint_t *a1, wint_t **a2, const void **a3, unsigned int *a4)
{
  const void **v5; // r12
  wint_t *v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rax
  char v15; // al
  unsigned int v16; // r10d
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // r14
  char v20; // si
  char v21; // al
  int v22; // eax
  char v23; // r10
  int v24; // eax
  char v25; // r10
  __int64 v26; // r8
  char v27; // r11
  int v28; // eax
  char v29; // r10
  char v30; // r10
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rax
  const void **v35; // rsi
  char v36; // cl
  int v37; // eax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r8
  int v43; // r9d
  char v44; // cl
  char v45; // cl
  char *v46; // rdx
  unsigned int v47; // eax
  char v48; // al
  char v50; // [rsp+50h] [rbp-B0h] BYREF
  char v51; // [rsp+51h] [rbp-AFh]
  char v52; // [rsp+52h] [rbp-AEh]
  const void **v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  wint_t *v57; // [rsp+78h] [rbp-88h]
  wint_t **v58; // [rsp+80h] [rbp-80h]
  _BYTE v59[257]; // [rsp+8Fh] [rbp-71h]

  v53 = a3;
  v58 = a2;
  v57 = a1;
  v5 = a3;
  v55 = 0;
  P = 0LL;
  v6 = a1;
  v52 = 0;
  LODWORD(v7) = 0;
  v51 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a3 = 0LL;
  v11 = -1LL;
  *a4 = 0;
  do
    ++v11;
  while ( a1[v11] );
  if ( (unsigned int)v11 < 3 || *a1 != 40 )
  {
    v8 = 1336;
    goto LABEL_126;
  }
  if ( (_DWORD)v11 == -1 || (v12 = 2LL * (unsigned int)(v11 + 1), v12 > 0xFFFFFFFF) )
  {
    v8 = 534;
    *a4 = -1;
    goto LABEL_122;
  }
  *a4 = v12;
  v13 = sub_14067757C((unsigned int)v12);
  *v5 = v13;
  if ( !v13 )
  {
    v8 = 8;
    goto LABEL_122;
  }
  *v13 = 2020897377;
  v54[0] = 4;
  while ( 1 )
  {
    if ( !*v6 )
      goto LABEL_107;
    if ( iswspace(*v6) )
    {
      v14 = 2LL;
      goto LABEL_105;
    }
    if ( (_DWORD)v7 == 255 )
    {
      v8 = 1001;
      goto LABEL_122;
    }
    v15 = sub_1409D083C(v6, &v55);
    v16 = 0;
    v17 = v15;
    if ( !v15 )
    {
      if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 || v10 == 3 )
        goto LABEL_113;
      if ( !v10 )
      {
        v10 = 5;
        if ( !(_DWORD)v7 )
        {
          v9 = 4;
          v10 = 4;
          goto LABEL_92;
        }
        v40 = (int)v7 - 1;
        if ( (int)v7 - 1 < 0 )
          goto LABEL_89;
        while ( 1 )
        {
          v41 = sub_1409D11D0(v59[v40 + 1]);
          if ( v41 != -1 )
            break;
          --v43;
          v40 = v42 - 1;
          if ( v40 < 0 )
            goto LABEL_88;
        }
        v44 = *((_BYTE *)&off_14000A990 + 24 * v41 + 8);
        if ( (unsigned __int8)(v44 + 119) > 3u
          && (unsigned __int8)(v44 + 112) > 3u
          && BYTE1((&off_14000A990)[3 * v41 + 1]) != (_BYTE)v16 )
        {
          v10 = 4;
        }
        if ( v44 == -121 || v44 == -115 )
          v51 = 1;
LABEL_88:
        if ( v43 < 0 )
LABEL_89:
          v10 = 4;
      }
      v9 = v10;
LABEL_92:
      v8 = sub_1409D0A60(v6, v10 == 4, v16, (__int64 *)&P, &v55, v16, v16, v16, v16);
      if ( v8 )
        goto LABEL_114;
      if ( !v51 || (v51 = 0, v45 = *((_BYTE *)P + 1), ((v45 + 7) & 0xFC) != 0) || v45 == -6 )
      {
        v5 = v53;
        v8 = sub_1409D00CC(v53, a4, v54, (char *)P + 1, 1u);
        if ( v8 )
          goto LABEL_122;
        if ( !sub_1409D1CD4(*((_BYTE *)P + 1)) )
        {
          v8 = sub_1409D00CC(v5, a4, v54, v46 + 4, 4u);
          if ( v8 )
            goto LABEL_122;
          v46 = (char *)P;
        }
        v47 = *((_DWORD *)v46 + 1);
        if ( v47 )
        {
          v8 = sub_1409D00CC(v5, a4, v54, *((const void **)v46 + 1), v47);
          if ( v8 )
            goto LABEL_122;
          v46 = (char *)P;
        }
        sub_1409D054C(v46);
        P = 0LL;
        v10 = 3;
        goto LABEL_104;
      }
LABEL_113:
      v8 = 1336;
LABEL_114:
      v5 = v53;
      goto LABEL_122;
    }
    if ( v15 == -2 )
    {
      if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
        goto LABEL_113;
      v18 = (int)v7;
      v9 = 1;
      LODWORD(v7) = v7 + 1;
      v59[v18 + 1] = v17;
      goto LABEL_71;
    }
    v19 = (int)v7;
    if ( v15 == -1 )
    {
      if ( !(_DWORD)v7 || v9 == 3 )
        goto LABEL_113;
      v5 = v53;
      if ( v9 == 1 )
        goto LABEL_116;
      v20 = v59[(int)v7];
      v52 = v20 == -2;
      while ( 1 )
      {
        v21 = v59[v19--];
        LODWORD(v7) = v7 - 1;
        v50 = v21;
        if ( v21 == -2 )
          break;
        v8 = sub_1409D00CC(v5, a4, v54, &v50, 1u);
        if ( v8 )
          goto LABEL_122;
        if ( !v19 )
        {
          if ( v50 != -2 )
            goto LABEL_116;
          break;
        }
      }
      if ( (_DWORD)v7 )
      {
        v22 = sub_1409D11D0(v59[(int)v7]);
        if ( v22 != -1
          && v20 != -2
          && *((_BYTE *)&off_14000A990 + 24 * v22 + 19) != v23
          && *((_BYTE *)&off_14000A990 + 24 * v22 + 8) != 0xA2 )
        {
LABEL_116:
          v8 = 1336;
          goto LABEL_122;
        }
        v6 = v57;
        v9 = 2;
        goto LABEL_104;
      }
      v6 = &v57[v55];
LABEL_107:
      v7 = (int)v7;
      if ( (_DWORD)v7 )
      {
        v5 = v53;
        while ( 1 )
        {
          v48 = v59[v7--];
          v50 = v48;
          if ( v48 == -2 )
            break;
          v8 = sub_1409D00CC(v5, a4, v54, &v50, 1u);
          if ( v8 )
            goto LABEL_122;
          if ( !v7 )
            goto LABEL_120;
        }
        v8 = 1336;
      }
LABEL_120:
      *a4 = v54[0];
      *v58 = v6;
      goto LABEL_114;
    }
    v24 = sub_1409D11D0(v15);
    v26 = 3LL * v24;
    v54[1] = *((_DWORD *)&off_14000A990 + 6 * v24 + 3);
    if ( *((_BYTE *)&off_14000A990 + 24 * v24 + 18) != v25 && v9 != 4 && (v9 != 2 || v52 == v25) )
      goto LABEL_113;
    v27 = (char)(&off_14000A990)[3 * v24 + 1];
    if ( v27 )
    {
      if ( v9 > 1 )
      {
        if ( v9 != 3 )
          goto LABEL_113;
        v28 = sub_1409D11D0(v59[(int)v7]);
        if ( *((_BYTE *)&off_14000A990 + 24 * v28 + 19) != v29 )
          goto LABEL_113;
      }
    }
    v30 = *((_BYTE *)&off_14000A990 + 8 * v26 + 19);
    if ( !v30 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
      goto LABEL_113;
    if ( (unsigned int)(v10 - 4) <= 1 )
      goto LABEL_113;
    if ( (_DWORD)v7 )
    {
      if ( v30 )
      {
        v31 = (int)v7 - 1;
        if ( (int)v7 - 1 >= 0 )
        {
          while ( (unsigned int)sub_1409D11D0(v59[v31 + 1]) == -1 )
          {
            v31 = v32 - 1;
            if ( v31 < 0 )
              goto LABEL_58;
          }
          v34 = 3LL * (int)sub_1409D11D0(v59[v33 + 1]);
          if ( *((_BYTE *)&off_14000A990 + 8 * v34 + 19) )
          {
            if ( *((_BYTE *)&off_14000A990 + 8 * v34 + 8) != 0xA2 )
              goto LABEL_113;
          }
        }
      }
    }
LABEL_58:
    v10 = v27 || !v30 ? 0 : 5;
    if ( (_DWORD)v7 )
      break;
LABEL_70:
    v6 = v57;
    v9 = 3;
LABEL_71:
    v5 = v53;
LABEL_104:
    v14 = 2LL * v55;
LABEL_105:
    v6 = (wint_t *)((char *)v6 + v14);
    v57 = v6;
  }
  v35 = v53;
  while ( 1 )
  {
    v36 = v59[v19];
    if ( v36 == -2 || (v50 = v59[v19], v37 = sub_1409D11D0(v36), v38 > *((_DWORD *)&off_14000A990 + 6 * v37 + 3)) )
    {
      v39 = (int)v7;
      LODWORD(v7) = v7 + 1;
      v59[v39 + 1] = v17;
      goto LABEL_70;
    }
    LODWORD(v7) = v7 - 1;
    --v19;
    v8 = sub_1409D00CC(v35, a4, v54, &v50, 1u);
    if ( v8 )
      break;
    if ( !v19 )
      goto LABEL_70;
  }
  v5 = v35;
LABEL_122:
  if ( P )
    sub_1409D054C(P);
  if ( *a4 == 4 || v8 )
  {
LABEL_126:
    if ( *v5 )
    {
      ExFreePoolWithTag((PVOID)*v5, 0);
      *v5 = 0LL;
      *a4 = 0;
    }
  }
  return v8;
}
