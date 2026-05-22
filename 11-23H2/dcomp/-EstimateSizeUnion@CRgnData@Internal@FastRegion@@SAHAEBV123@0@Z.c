/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007ADAC
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A3CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  _DWORD *v6; // r11
  char *v7; // rbx
  _DWORD *v8; // rsi
  int v9; // eax
  char *v10; // rdi
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  _DWORD *v14; // r9
  int i; // eax
  char *v16; // r10
  int v17; // ecx
  int v18; // r11d
  int v19; // ebx
  _DWORD *v20; // rbp
  _DWORD *v21; // r14
  char *v22; // r8
  int v24; // eax
  _DWORD *v25; // rcx
  _DWORD *k; // r9
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  _DWORD *v32; // r8
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char *v37; // rax
  char *m; // r10
  int j; // eax
  int v40; // eax
  char *v41; // rcx
  int v42; // ecx
  int v43; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = (char *)a2 + 12;
  v8 = &v3[2 * v2];
  v9 = v4 + v2;
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = *((_DWORD *)a2 + 3);
  v12 = 8 * v9 + 12;
  if ( *v3 < v11 )
  {
    v13 = v3[3];
    v14 = v3 + 2;
    for ( i = v13 - v6[1] - (_DWORD)v6; ; i = v14[1] - v32[1] - (_DWORD)v32 )
    {
      v12 += (_DWORD)v14 + i;
      if ( *v14 >= v11 )
        break;
      v32 = v14;
      v14 += 2;
      if ( v14 == v8 )
      {
        v35 = *((_DWORD *)v5 + 3);
        v16 = v5 + 8;
        v29 = v35 - *((_DWORD *)v7 + 1);
LABEL_36:
        v36 = (_DWORD)v16 + v29 - (_DWORD)v7;
LABEL_37:
        v12 += v36;
        goto LABEL_38;
      }
    }
    v16 = v5 + 8;
    v6 = v14;
    if ( *v14 > v11 )
    {
      v17 = (_DWORD)v16 + v14[1] + *((_DWORD *)v16 + 1) - *((_DWORD *)v7 + 1) - *(v14 - 1) + 8 - (_DWORD)v7;
      goto LABEL_6;
    }
    v14 += 2;
    v29 = *((_DWORD *)v16 + 1) - *((_DWORD *)v7 + 1);
    if ( v14 == v8 )
      goto LABEL_36;
LABEL_21:
    v30 = v14[1] + v29 - v6[1] - (_DWORD)v6 - (_DWORD)v7;
LABEL_22:
    v12 += (_DWORD)v16 + (_DWORD)v14 + v30;
    goto LABEL_7;
  }
  v28 = *((_DWORD *)v5 + 3);
  v16 = v5 + 8;
  if ( *v3 <= v11 )
  {
    v14 = v3 + 2;
    v29 = v28 - *((_DWORD *)v7 + 1);
    goto LABEL_21;
  }
  for ( j = v28 - *((_DWORD *)v7 + 1) - (_DWORD)v7; ; j = *((_DWORD *)v16 + 1) - *((_DWORD *)v41 + 1) - (_DWORD)v41 )
  {
    v12 += (_DWORD)v16 + j;
    v40 = *(_DWORD *)v16;
    if ( *v3 < *(_DWORD *)v16 )
      break;
    v41 = v16;
    v16 += 8;
    if ( *v3 <= v40 )
    {
      v14 = v3 + 2;
      if ( v16 != v10 )
      {
        v30 = v14[1] + *((_DWORD *)v16 + 1) - *((_DWORD *)v41 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v41;
        goto LABEL_22;
      }
      goto LABEL_50;
    }
    if ( v16 == v10 )
    {
      v14 = v3 + 2;
LABEL_50:
      v34 = v14[1] - v6[1] - (_DWORD)v6;
LABEL_33:
      v24 = (_DWORD)v14 + v34;
LABEL_16:
      v12 += v24;
      v25 = v14;
      for ( k = v14 + 2; k != v8; k += 2 )
      {
        v27 = (_DWORD)k + v25[3] - v25[1] - (_DWORD)v25;
        v12 += v27;
        v25 += 2;
      }
      return v12;
    }
  }
  v42 = v3[3] - *((_DWORD *)v16 - 1);
  v14 = v3 + 2;
  v17 = (_DWORD)v14 + *((_DWORD *)v16 + 1) + v42 - v6[1] - (_DWORD)v6 + 8;
LABEL_6:
  v12 += v17;
LABEL_7:
  v18 = *(_DWORD *)v16;
  while ( 2 )
  {
    v19 = *v14;
    while ( 1 )
    {
      v20 = v14;
      v21 = v14;
      v22 = v16;
      if ( v19 < v18 )
        break;
      v16 += 8;
      if ( v19 > v18 )
      {
        if ( v16 == v10 )
        {
          v24 = v14[1] + 8 - *(v14 - 1);
          goto LABEL_16;
        }
        v33 = v14[1] + (_DWORD)v16 + *((_DWORD *)v16 + 1) - *((_DWORD *)v22 + 1) - *(v14 - 1) + 8 - (_DWORD)v22;
      }
      else
      {
        v14 += 2;
        if ( v14 == v8 )
        {
          if ( v16 == v10 )
            return v12;
          v36 = (_DWORD)v16 + *((_DWORD *)v16 + 1) - *((_DWORD *)v22 + 1) - (_DWORD)v22;
          goto LABEL_37;
        }
        if ( v16 == v10 )
        {
          v34 = v14[1] - v20[1] - (_DWORD)v20;
          goto LABEL_33;
        }
        v19 = *v14;
        v33 = (_DWORD)v16
            + (_DWORD)v14
            + v14[1]
            + *((_DWORD *)v16 + 1)
            - *((_DWORD *)v22 + 1)
            - v20[1]
            - (_DWORD)v20
            - (_DWORD)v22;
      }
      v18 = *(_DWORD *)v16;
      v12 += v33;
    }
    v31 = *((_DWORD *)v16 + 1);
    v14 += 2;
    if ( v14 != v8 )
    {
      v12 += (_DWORD)v14 + v31 + v14[1] - *((_DWORD *)v16 - 1) - v21[1] - (_DWORD)v21 + 8;
      continue;
    }
    break;
  }
  v12 += v31 - *((_DWORD *)v16 - 1) + 8;
LABEL_38:
  v37 = v16;
  for ( m = v16 + 8; m != v10; m += 8 )
  {
    v43 = (_DWORD)m + *((_DWORD *)v37 + 3) - *((_DWORD *)v37 + 1) - (_DWORD)v37;
    v12 += v43;
    v37 += 8;
  }
  return v12;
}
