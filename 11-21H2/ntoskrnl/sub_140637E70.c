/*
 * XREFs of sub_140637E70 @ 0x140637E70
 * Callers:
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 * Callees:
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     sub_1406383D8 @ 0x1406383D8 (sub_1406383D8.c)
 *     sub_140638440 @ 0x140638440 (sub_140638440.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

char __fastcall sub_140637E70(unsigned __int16 *a1, int a2, __int64 a3, const char *a4, unsigned int a5, bool *a6)
{
  const char *v6; // rdi
  char v9; // r15
  int v10; // r12d
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  bool v16; // bl
  bool v17; // zf
  unsigned int v18; // r9d
  char *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const wchar_t *v22; // r14
  char *j; // rsi
  __int64 v24; // rsi
  wchar_t v25; // r12
  const char *v26; // r13
  char *v27; // r14
  unsigned __int64 v28; // rax
  const char *v29; // r14
  const char *i; // rsi
  unsigned int v31; // esi
  const char *v32; // rcx
  char v33; // r12
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v41; // [rsp+28h] [rbp-40h] BYREF
  const char *v42; // [rsp+30h] [rbp-38h] BYREF
  const char *v43; // [rsp+38h] [rbp-30h]
  const char *v44; // [rsp+40h] [rbp-28h]
  const wchar_t *v45; // [rsp+48h] [rbp-20h]

  v6 = a4;
  v41 = 0LL;
  v42 = 0LL;
  if ( !a5 )
    return 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)(a3 + 2);
  v11 = a2 - 1;
  if ( !v11 )
  {
    if ( !(unsigned __int8)sub_140638440(a4, a5, &v41) )
      return 0;
    v38 = *(_QWORD *)(a3 + 8);
    v39 = *(_QWORD *)(a3 + 16);
    if ( !v10 )
    {
      v17 = v41 == v38;
      goto LABEL_119;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v16 = v41 <= v38;
          goto LABEL_120;
        case 3:
          v16 = v41 > v38;
          goto LABEL_120;
        case 4:
          v16 = v41 < v38;
          goto LABEL_120;
        case 5:
          v16 = v41 >= v38;
          goto LABEL_120;
        case 6:
          if ( v38 > v41 || v41 > v39 )
            goto LABEL_111;
          break;
        case 7:
          if ( v41 >= v38 && v39 >= v41 )
            goto LABEL_111;
          break;
        default:
          if ( v10 != 8 || !v38 )
            return 0;
          v36 = v41 % v38;
          goto LABEL_81;
      }
LABEL_108:
      v16 = 1;
      goto LABEL_120;
    }
    v37 = v41 == v38;
LABEL_117:
    v16 = !v37;
    goto LABEL_120;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)sub_1406383D8(a4, a5, &v42) )
      return 0;
    if ( !v10 )
    {
      v17 = v42 == *(const char **)(a3 + 8);
      goto LABEL_119;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v16 = (unsigned __int64)v42 <= *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 3:
          v16 = (unsigned __int64)v42 > *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 4:
          v16 = (unsigned __int64)v42 < *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 5:
          v16 = (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v42 || (unsigned __int64)v42 > *(_QWORD *)(a3 + 16) )
            goto LABEL_111;
          break;
        case 7:
          if ( (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v42 )
            goto LABEL_111;
          break;
        case 8:
          v35 = *(_QWORD *)(a3 + 8);
          if ( !v35 )
            return 0;
          v36 = (unsigned __int64)v42 % v35;
LABEL_81:
          v17 = v36 == 0;
          goto LABEL_119;
        default:
          return 0;
      }
      goto LABEL_108;
    }
    v37 = v42 == *(const char **)(a3 + 8);
    goto LABEL_117;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v27 = (char *)a1 + a1[24];
    v28 = (unsigned __int64)&v27[a1[25]];
    v29 = &v27[*(_QWORD *)(a3 + 8)];
    if ( (unsigned __int64)v29 >= v28 )
      return 0;
    for ( i = v29; *i && (unsigned __int64)i < v28; ++i )
      ;
    v31 = (_DWORD)i - (_DWORD)v29;
    if ( v31 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v16 = v9;
          if ( v31 == a5 )
          {
            v16 = 1;
            while ( 1 )
            {
              v32 = v29;
              if ( !v31 )
                break;
              if ( *v6 != *v29 )
              {
                v16 = 0;
                break;
              }
              v44 = ++v6;
              ++v29;
              v42 = v32 + 1;
              --v31;
            }
LABEL_30:
            if ( v9 )
            {
LABEL_12:
              v17 = !v16;
LABEL_119:
              v16 = v17;
            }
          }
LABEL_120:
          *a6 = v16;
          return 1;
        }
        v9 = 1;
      }
      v16 = v9;
      if ( v31 > a5 )
        goto LABEL_120;
      v33 = *v29;
      v34 = (unsigned __int64)&a4[a5 - (unsigned __int64)v31 + 1];
      v16 = 0;
      while ( (unsigned __int64)v6 < v34 )
      {
        if ( *v6 == v33 && !strncmp(v6, v29, v31) )
        {
          v16 = 1;
          goto LABEL_30;
        }
        v44 = ++v6;
      }
      goto LABEL_30;
    }
LABEL_111:
    v16 = 0;
    goto LABEL_120;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (a5 & 1) != 0 )
      return 0;
    v18 = a5 >> 1;
    v19 = (char *)a1 + a1[22];
    v20 = (unsigned __int64)&v19[2 * ((unsigned __int64)a1[23] >> 1)];
    v21 = *(_QWORD *)(a3 + 8);
    v22 = (const wchar_t *)&v19[2 * v21];
    if ( (unsigned __int64)v22 >= v20 )
      return 0;
    for ( j = &v19[2 * v21]; *(_WORD *)j && (unsigned __int64)j < v20; j += 2 )
      ;
    v24 = (j - (char *)v22) >> 1;
    if ( (_DWORD)v24 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v16 = v9;
          if ( (_DWORD)v24 == v18 )
          {
            v16 = 1;
            while ( (_DWORD)v24 )
            {
              if ( *v22 != *(_WORD *)v6 )
              {
                v16 = 0;
                goto LABEL_30;
              }
              v6 += 2;
              v43 = v6;
              v45 = ++v22;
              LODWORD(v24) = v24 - 1;
            }
            goto LABEL_30;
          }
          goto LABEL_120;
        }
        v9 = 1;
      }
      v16 = v9;
      if ( (unsigned int)v24 > v18 )
        goto LABEL_120;
      v25 = *v22;
      v26 = &v6[2 * (v18 - (unsigned __int64)(unsigned int)v24) + 2];
      v16 = 0;
      while ( v6 < v26 )
      {
        if ( *(_WORD *)v6 == v25 && !wcsncmp((const wchar_t *)v6, v22, (unsigned int)v24) )
        {
          v16 = 1;
          goto LABEL_30;
        }
        v6 += 2;
        v43 = v6;
      }
      goto LABEL_30;
    }
    goto LABEL_111;
  }
  if ( v14 == 1 && a5 == 16 )
  {
    v15 = *(_QWORD *)a4 - *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)a4 == *(_QWORD *)(a3 + 8) )
      v15 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
    v16 = v15 == 0;
    if ( v10 == 30 )
      goto LABEL_120;
    if ( v10 == 31 )
      goto LABEL_12;
  }
  return 0;
}
