/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180083C4C
 * Callers:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // rbx
  int v6; // edi
  _DWORD *v7; // r11
  _DWORD *v8; // rsi
  unsigned int v9; // r10d
  char *v10; // r14
  char *v11; // r8
  _DWORD *v12; // r9
  int v13; // eax
  int v14; // ebx
  int v15; // edx
  _DWORD *v16; // r11
  _DWORD *v17; // rdi
  char *v18; // rbp
  int v19; // eax
  int v20; // ecx
  _DWORD *j; // r9
  _DWORD *v22; // rax
  int v24; // eax
  int i; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  char *v28; // rdx
  int v29; // ecx
  _DWORD *v30; // rdx
  int v31; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = v3;
  v8 = &v3[2 * v2];
  v9 = 8 * (v4 + v2) + 12;
  v10 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 < v6 )
  {
    v24 = v3[3];
    v12 = v3 + 2;
    for ( i = (_DWORD)v12 + v24 - v7[1] - (_DWORD)v7; ; i = v30[3] - v30[1] + 8 )
    {
      v9 += i;
      if ( *v12 >= v6 )
        break;
      v30 = v12;
      v12 += 2;
      if ( v12 == v8 )
        return v9;
    }
    v26 = v12;
    v11 = v5 + 8;
    if ( *v12 > v6 )
    {
      v29 = v12[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - *(v12 - 1) + 16;
LABEL_29:
      v9 += v29;
      goto LABEL_5;
    }
    v12 += 2;
    if ( v12 == v8 )
      return v9;
    v13 = (_DWORD)v12 + v12[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v26[1] - (_DWORD)v26 + 8;
LABEL_4:
    v9 += v13;
LABEL_5:
    v14 = *(_DWORD *)v11;
    while ( 1 )
    {
      v15 = *v12;
      while ( 1 )
      {
        v16 = v12;
        v17 = v12;
        v18 = v11;
        if ( v15 < v14 )
          break;
        v11 += 8;
        if ( v15 > v14 )
        {
          if ( v11 == v10 )
          {
            v19 = v12[1] + 8 - *(v12 - 1);
            goto LABEL_22;
          }
          v9 += v12[1] + *((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1) - *(v12 - 1) + 16;
        }
        else
        {
          v12 += 2;
          if ( v12 == v8 )
            return v9;
          if ( v11 == v10 )
          {
            v19 = (_DWORD)v17 + 8 + v17[3] - v17[1] - (_DWORD)v16;
            goto LABEL_22;
          }
          v15 = *v12;
          v9 += (_DWORD)v17 + 8 + v17[3] + *((_DWORD *)v18 + 3) - *((_DWORD *)v18 + 1) - v16[1] - (_DWORD)v16 + 8;
        }
        v14 = *(_DWORD *)v11;
      }
      v12 += 2;
      if ( v12 == v8 )
        return v9;
      v9 += *((_DWORD *)v11 + 1) + v17[3] - *((_DWORD *)v11 - 1) - v17[1] + 16;
    }
  }
  v11 = (char *)a2 + 20;
  if ( *v3 <= v6 )
  {
    v12 = v3 + 2;
    v13 = (_DWORD)v12 + v12[1] + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) - v7[1] - (_DWORD)v7 - 12 + 20;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v27 = *(_DWORD *)v11;
    if ( *v3 < *(_DWORD *)v11 )
    {
      v31 = v3[3] - *((_DWORD *)v11 - 1);
      v12 = v3 + 2;
      v29 = (_DWORD)v12 + *((_DWORD *)v11 + 1) + v31 - v7[1] - (_DWORD)v7 + 8;
      goto LABEL_29;
    }
    v28 = v11;
    v11 += 8;
    if ( *v3 <= v27 )
      break;
    if ( v11 == v10 )
    {
      v12 = v3 + 2;
      goto LABEL_27;
    }
  }
  v12 = v3 + 2;
  if ( v11 != v10 )
  {
    v13 = (_DWORD)v12 + v12[1] + *((_DWORD *)v28 + 3) - *((_DWORD *)v28 + 1) - v7[1] - (_DWORD)v7 + 8;
    goto LABEL_4;
  }
LABEL_27:
  v19 = (_DWORD)v12 + v12[1] - v7[1] - (_DWORD)v7;
LABEL_22:
  v9 += v19;
  v22 = v12;
  for ( j = v12 + 2; j != v8; j += 2 )
  {
    v20 = (_DWORD)j + v22[3] - v22[1] - (_DWORD)v22;
    v9 += v20;
    v22 += 2;
  }
  return v9;
}
