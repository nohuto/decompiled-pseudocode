/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800832B8
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  int v6; // esi
  _DWORD *v7; // r11
  char *v8; // rbx
  _DWORD *v9; // rbp
  unsigned int v10; // r8d
  char *v11; // rdi
  int v12; // eax
  _DWORD *v13; // r9
  int i; // eax
  char *v15; // r10
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  char *v19; // rax
  char *m; // r10
  int v22; // ecx
  int v23; // r14d
  int v24; // esi
  _DWORD *v25; // rbx
  _DWORD *v26; // r15
  char *v27; // r11
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  _DWORD *k; // r9
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // rdx
  int j; // eax
  int v39; // eax
  int v40; // ecx
  char *v41; // rdx
  int v42; // eax
  int v43; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = v3;
  v8 = (char *)a2 + 12;
  v9 = &v3[2 * v2];
  v10 = 8 * (v4 + v2) + 12;
  v11 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 < v6 )
  {
    v12 = v3[3];
    v13 = v3 + 2;
    for ( i = (_DWORD)v13 + v12 - v7[1] - (_DWORD)v7; ; i = v37[3] - v37[1] + 8 )
    {
      v10 += i;
      if ( *v13 >= v6 )
        break;
      v37 = v13;
      v13 += 2;
      if ( v13 == v9 )
      {
        v42 = *((_DWORD *)v5 + 3);
        v15 = v5 + 8;
        v18 = (_DWORD)v15 + v42 - *((_DWORD *)v8 + 1) - (_DWORD)v8;
        goto LABEL_7;
      }
    }
    v15 = v5 + 8;
    v16 = v13;
    if ( *v13 > v6 )
    {
      v22 = (_DWORD)v15 + v13[1] + *((_DWORD *)v15 + 1) - *((_DWORD *)v8 + 1) - *(v13 - 1) + 8 - (_DWORD)v8;
      goto LABEL_11;
    }
    v13 += 2;
    v17 = *((_DWORD *)v15 + 1) - *((_DWORD *)v8 + 1);
    if ( v13 == v9 )
    {
      v18 = (_DWORD)v15 + v17 - (_DWORD)v8;
      goto LABEL_7;
    }
    v36 = (_DWORD)v15 + (_DWORD)v13 + v13[1] + v17 - v16[1] - (_DWORD)v16 - (_DWORD)v8;
LABEL_25:
    v10 += v36;
    goto LABEL_12;
  }
  v15 = (char *)a2 + 20;
  v33 = *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4);
  v34 = (_DWORD)a2 + 20;
  if ( *v3 <= v6 )
  {
    v13 = v3 + 2;
    v35 = v13[1] + v33 - v7[1] - (_DWORD)v7 - (_DWORD)v8;
LABEL_24:
    v36 = v34 + (_DWORD)v13 + v35;
    goto LABEL_25;
  }
  for ( j = v33 - (_DWORD)v8; ; j = *((_DWORD *)v41 + 3) - *((_DWORD *)v41 + 1) - (_DWORD)v41 )
  {
    v10 += v34 + j;
    v39 = *(_DWORD *)v15;
    if ( *v3 < *(_DWORD *)v15 )
      break;
    v41 = v15;
    v15 += 8;
    if ( *v3 <= v39 )
    {
      v13 = v3 + 2;
      if ( v15 != v11 )
      {
        v34 = (_DWORD)v41 + 8;
        v35 = v13[1] + *((_DWORD *)v41 + 3) - *((_DWORD *)v41 + 1) - v7[1] - (_DWORD)v7 - (_DWORD)v41;
        goto LABEL_24;
      }
      goto LABEL_41;
    }
    if ( v15 == v11 )
    {
      v13 = v3 + 2;
LABEL_41:
      v28 = v13[1] - v7[1] - (_DWORD)v7;
LABEL_18:
      v29 = (_DWORD)v13 + v28;
LABEL_19:
      v10 += v29;
      v30 = v13;
      for ( k = v13 + 2; k != v9; k += 2 )
      {
        v32 = (_DWORD)k + v30[3] - v30[1] - (_DWORD)v30;
        v10 += v32;
        v30 += 2;
      }
      return v10;
    }
    v34 = (_DWORD)v41 + 8;
  }
  v40 = v3[3] - *((_DWORD *)v15 - 1);
  v13 = v3 + 2;
  v22 = (_DWORD)v13 + *((_DWORD *)v15 + 1) + v40 - v7[1] - (_DWORD)v7 + 8;
LABEL_11:
  v10 += v22;
LABEL_12:
  v23 = *(_DWORD *)v15;
  while ( 2 )
  {
    v24 = *v13;
    while ( 1 )
    {
      v25 = v13;
      v26 = v13;
      v27 = v15;
      if ( v24 < v23 )
        break;
      v15 += 8;
      if ( v24 <= v23 )
      {
        v13 += 2;
        if ( v13 == v9 )
        {
          if ( v15 == v11 )
            return v10;
          v18 = *((_DWORD *)v27 + 3) - *((_DWORD *)v27 + 1) + 8;
          goto LABEL_7;
        }
        if ( v15 == v11 )
        {
          v29 = v25[3] - v25[1] + 8;
          goto LABEL_19;
        }
        v24 = *v13;
        v10 += v25[3] + *((_DWORD *)v27 + 3) - *((_DWORD *)v27 + 1) - v25[1] + 16;
      }
      else
      {
        if ( v15 == v11 )
        {
          v28 = v13[1] - *(v13 - 1) - ((_DWORD)v13 - 8);
          goto LABEL_18;
        }
        v10 += v13[1] + *((_DWORD *)v27 + 3) - *((_DWORD *)v27 + 1) - *(v13 - 1) + 8 + 8;
      }
      v23 = *(_DWORD *)v15;
    }
    v13 += 2;
    if ( v13 != v9 )
    {
      v10 += *((_DWORD *)v15 + 1) + v26[3] - *((_DWORD *)v15 - 1) - v26[1] + 16;
      continue;
    }
    break;
  }
  v18 = *((_DWORD *)v15 + 1) + 8 - *((_DWORD *)v15 - 1);
LABEL_7:
  v10 += v18;
  v19 = v15;
  for ( m = v15 + 8; m != v11; m += 8 )
  {
    v43 = (_DWORD)m + *((_DWORD *)v19 + 3) - *((_DWORD *)v19 + 1) - (_DWORD)v19;
    v10 += v43;
    v19 += 8;
  }
  return v10;
}
