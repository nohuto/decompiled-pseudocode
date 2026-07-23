/*
 * XREFs of sub_1409D3874 @ 0x1409D3874
 * Callers:
 *     sub_140677460 @ 0x140677460 (sub_140677460.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     sub_1409D0360 @ 0x1409D0360 (sub_1409D0360.c)
 *     sub_1409D11D0 @ 0x1409D11D0 (sub_1409D11D0.c)
 *     sub_1409D11F4 @ 0x1409D11F4 (sub_1409D11F4.c)
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D3E10 @ 0x1409D3E10 (sub_1409D3E10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D3874(
        _DWORD *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // r13d
  _DWORD *v10; // r14
  unsigned int v11; // ebx
  int v12; // esi
  __int64 v13; // r12
  __int64 v14; // r15
  int v15; // r8d
  char *v16; // r14
  char v17; // di
  bool v18; // zf
  bool v19; // zf
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  wchar_t *v26; // r12
  size_t v27; // r13
  wchar_t *v28; // r14
  int v29; // eax
  __int64 v30; // rdi
  char v31; // al
  int v32; // edx
  __int64 v33; // rax
  PVOID *v34; // rcx
  PVOID v35; // rdi
  PVOID v36; // r12
  size_t v37; // r13
  _QWORD *v38; // rdi
  PVOID *v39; // rcx
  __int64 v40; // rdi
  PVOID v41; // rcx
  PVOID v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h]
  unsigned int v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  _DWORD *v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v53[256]; // [rsp+90h] [rbp-70h] BYREF

  v51 = a5;
  v9 = a2;
  v10 = a1;
  v50 = a6;
  v49 = a7;
  P[0] = a3;
  v11 = 0;
  v46 = a2;
  v48 = a1;
  v43 = 0LL;
  memset(v53, 0, sizeof(v53));
  v44 = 0;
  v12 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *v10 != 2020897377 )
    return 805LL;
  LODWORD(v13) = 4;
  v14 = 0LL;
  v45 = 4;
  while ( 1 )
  {
    v15 = 1336;
    if ( v14 == 255 )
    {
      v11 = 1001;
      goto LABEL_82;
    }
    v16 = (char *)v10 + (unsigned int)v13;
    v17 = *v16;
    if ( (unsigned __int8)*v16 > 0x51u )
    {
      if ( (unsigned __int8)v17 < 0x80u )
        goto LABEL_21;
      if ( (unsigned __int8)v17 > 0x93u )
      {
        if ( (unsigned __int8)v17 <= 0x9Fu )
          goto LABEL_21;
        if ( (unsigned __int8)v17 > 0xA3u )
        {
          if ( (unsigned __int8)v17 <= 0xF7u || (unsigned __int8)v17 > 0xFCu )
            goto LABEL_21;
          v11 = sub_1409D11F4((__int64)v16, v9 - (unsigned int)v13, v17, &v43, &v44);
          if ( v11 )
          {
LABEL_71:
            v28 = (wchar_t *)v43;
            goto LABEL_79;
          }
          v53[v14] = v43;
          goto LABEL_16;
        }
      }
      if ( (unsigned __int8)(v17 + 96) <= 1u )
      {
        if ( v14 < 2 )
          goto LABEL_21;
        v11 = sub_1409D0360(&v53[v12 - 1]);
        if ( v11 )
          goto LABEL_82;
        v11 = sub_1409D0360(&v53[v12 - 2]);
        v19 = v11 == 0;
      }
      else
      {
        if ( v17 != -94 )
        {
LABEL_38:
          v20 = sub_1409D11D0(*v16);
          if ( v20 < 0 )
            goto LABEL_21;
          v22 = 3LL * v20;
          v23 = -1LL;
          v24 = *(_QWORD *)(v21 + 8 * v22);
          v47 = v22;
          do
            ++v23;
          while ( *(_WORD *)(v24 + 2 * v23) );
          v25 = 2 * v23;
          LODWORD(v43) = v25;
          if ( *(_BYTE *)(v21 + 8 * v22 + 16) )
          {
            if ( !v14 )
              goto LABEL_21;
            v26 = (wchar_t *)P[v14 + 1];
            if ( (int)sub_1409D3E10(v25, v26, &v43) < 0 )
              goto LABEL_74;
            v27 = (unsigned int)((_DWORD)v43 + 8);
            v28 = (wchar_t *)sub_14067757C(v27);
            if ( !v28 )
              goto LABEL_73;
            if ( v17 == -94 )
            {
              v29 = sub_1402E0198(v28, v27 >> 1, L"(%ls%ls)", (&off_14000A990)[v47], v26);
            }
            else
            {
              v30 = v47;
              v31 = *((_BYTE *)&off_14000A990 + 8 * v47 + 8);
              if ( (v31 == -121 || v31 == -115)
                && (!wcsnicmp(v26, L"@USER.", 6uLL)
                 || !wcsnicmp(v26, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v26, L"@TOKEN.", 7uLL)) )
              {
                v11 = 1336;
                goto LABEL_79;
              }
              v29 = sub_1402E0198(v28, v27 >> 1, L"(%ls %ls)", (&off_14000A990)[v30], v26);
            }
            v32 = 0;
            if ( v29 < 0 )
              goto LABEL_78;
            if ( v26 )
            {
              ExFreePoolWithTag(v26, 0);
              v32 = 0;
            }
            v33 = 0LL;
            v34 = &P[v14 + 1];
          }
          else
          {
            if ( v14 < 2 )
              goto LABEL_21;
            v35 = P[v14 + 1];
            if ( (int)sub_1409D3E10(v25, v35, &v43) < 0
              || (v36 = P[v14], (int)sub_1409D3E10((unsigned int)v43, v36, &v43) < 0) )
            {
LABEL_74:
              v11 = 534;
              goto LABEL_82;
            }
            v37 = (unsigned int)((_DWORD)v43 + 10);
            v28 = (wchar_t *)sub_14067757C(v37);
            if ( !v28 )
            {
LABEL_73:
              v11 = 8;
              goto LABEL_82;
            }
            if ( (int)sub_1402E0198(v28, v37 >> 1, L"(%ls %ls %ls)", v36, (&off_14000A990)[v47], v35) < 0 )
            {
LABEL_78:
              v11 = 50;
LABEL_79:
              if ( v28 )
                ExFreePoolWithTag(v28, 0);
              goto LABEL_82;
            }
            if ( v35 )
              ExFreePoolWithTag(v35, 0);
            if ( v36 )
              ExFreePoolWithTag(v36, 0);
            v33 = -1LL;
            v34 = &P[v14];
            v32 = -1;
          }
          LODWORD(v13) = v45;
          v12 += v32;
          v9 = v46;
          v14 += v33;
          *v34 = v28;
          v44 = 1;
          goto LABEL_68;
        }
        if ( v14 < 1 )
          goto LABEL_21;
        v11 = sub_1409D0360(&v53[v12 - 1]);
        v19 = v11 == 0;
      }
      if ( !v19 )
        goto LABEL_82;
      goto LABEL_38;
    }
    if ( (unsigned __int8)v17 >= 0x50u )
      goto LABEL_14;
    if ( v17 )
    {
      if ( (unsigned __int8)v17 > 4u && v17 != 16 && v17 != 24 )
        goto LABEL_21;
LABEL_14:
      v11 = sub_1409D1418(v16, v9 - (unsigned int)v13, (__int64)&v43, &v44, v51, v50, v49, a8);
      if ( v11 )
        goto LABEL_71;
      v53[v14] = v43;
LABEL_16:
      ++v12;
      ++v14;
LABEL_68:
      v43 = 0LL;
      goto LABEL_69;
    }
    while ( 1 )
    {
      v13 = (unsigned int)(v13 + 1);
      v18 = (_DWORD)v13 == v9;
      if ( (unsigned int)v13 >= v9 )
        break;
      if ( *((_BYTE *)v48 + v13) )
      {
        v18 = (_DWORD)v13 == v9;
        break;
      }
    }
    if ( !v18 )
    {
LABEL_21:
      v11 = v15;
      goto LABEL_82;
    }
LABEL_69:
    LODWORD(v13) = v44 + v13;
    v45 = v13;
    if ( (unsigned int)v13 >= v9 )
      break;
    v10 = v48;
  }
  if ( v12 == 1 )
  {
    v38 = P[0];
    v39 = (PVOID *)P[0];
    *(_QWORD *)P[0] = v53[0];
    v11 = sub_1409D0360(v39);
    if ( !v11 )
      return v11;
    *v38 = 0LL;
    goto LABEL_85;
  }
LABEL_82:
  if ( !v12 )
    return v11;
  if ( !v11 )
    v11 = 1336;
LABEL_85:
  v40 = v12;
  do
  {
    v41 = P[v40-- + 1];
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
  }
  while ( v40 );
  return v11;
}
