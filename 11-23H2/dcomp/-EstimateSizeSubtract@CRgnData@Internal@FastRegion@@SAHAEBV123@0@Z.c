/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007A6FC
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  char *v5; // r11
  _DWORD *v6; // r10
  _DWORD *v7; // rbx
  int v8; // eax
  char *v9; // rbp
  int v10; // ecx
  unsigned int v11; // r8d
  char *v12; // rdx
  _DWORD *v13; // r9
  int v14; // eax
  int v15; // eax
  int v16; // r10d
  int v17; // ecx
  _DWORD *v18; // r11
  _DWORD *v19; // rdi
  char *v20; // rsi
  int v22; // eax
  int v23; // eax
  int i; // eax
  _DWORD *v25; // rdi
  int v26; // ecx
  _DWORD *v27; // rdx
  int v28; // eax
  _DWORD *v29; // rax
  _DWORD *j; // r9
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  char *v34; // rcx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = &v3[2 * v2];
  v8 = v4 + v2;
  v9 = (char *)a2 + 8 * v4 + 12;
  v10 = *((_DWORD *)a2 + 3);
  v11 = 8 * v8 + 12;
  if ( *v3 < v10 )
  {
    v23 = v3[3];
    v13 = v3 + 2;
    for ( i = v23 - v6[1] - (_DWORD)v6; ; i = v13[1] - v27[1] - (_DWORD)v27 )
    {
      v11 += (_DWORD)v13 + i;
      if ( *v13 >= v10 )
        break;
      v27 = v13;
      v13 += 2;
      if ( v13 == v7 )
        return v11;
    }
    v25 = v13;
    v12 = v5 + 8;
    if ( *v13 <= v10 )
    {
      v13 += 2;
      if ( v13 == v7 )
        return v11;
      v15 = (_DWORD)v13 + v13[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v25[1] - (_DWORD)v25 + 8;
      goto LABEL_5;
    }
    v26 = v13[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - *(v13 - 1) + 16;
LABEL_19:
    v11 += v26;
LABEL_6:
    v16 = *(_DWORD *)v12;
LABEL_7:
    v17 = *v13;
    while ( 1 )
    {
      v18 = v13;
      v19 = v13;
      v20 = v12;
      if ( v17 < v16 )
      {
        v13 += 2;
        if ( v13 == v7 )
          return v11;
        v11 += (_DWORD)v13 + *((_DWORD *)v12 + 1) + v13[1] - *((_DWORD *)v12 - 1) - v19[1] - (_DWORD)v19 + 8;
        goto LABEL_7;
      }
      v12 += 8;
      if ( v17 > v16 )
      {
        v6 = v13 - 2;
        if ( v12 == v9 )
          goto LABEL_24;
        v22 = (_DWORD)v12 + v13[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v20 + 1) - *(v13 - 1) + 8 - (_DWORD)v20;
      }
      else
      {
        v13 += 2;
        if ( v13 == v7 )
          return v11;
        if ( v12 == v9 )
        {
          v28 = v13[1] - v18[1] - (_DWORD)v18;
          goto LABEL_25;
        }
        v17 = *v13;
        v22 = (_DWORD)v12
            + (_DWORD)v13
            + v13[1]
            + *((_DWORD *)v12 + 1)
            - *((_DWORD *)v20 + 1)
            - v18[1]
            - (_DWORD)v18
            - (_DWORD)v20;
      }
      v16 = *(_DWORD *)v12;
      v11 += v22;
    }
  }
  v12 = (char *)a2 + 20;
  if ( *v3 <= v10 )
  {
    v13 = v3 + 2;
    v14 = v13[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v5;
LABEL_4:
    v15 = (_DWORD)v12 + (_DWORD)v13 + v14;
LABEL_5:
    v11 += v15;
    goto LABEL_6;
  }
  do
  {
    v32 = *(_DWORD *)v12;
    if ( *v3 < *(_DWORD *)v12 )
    {
      v33 = v3[3] - *((_DWORD *)v12 - 1);
      v13 = v3 + 2;
      v26 = (_DWORD)v13 + *((_DWORD *)v12 + 1) + v33 - v6[1] - (_DWORD)v6 + 8;
      goto LABEL_19;
    }
    v34 = v12;
    v12 += 8;
    if ( *v3 <= v32 )
    {
      v13 = v3 + 2;
      if ( v12 == v9 )
        goto LABEL_24;
      v14 = v13[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v34 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v34;
      goto LABEL_4;
    }
  }
  while ( v12 != v9 );
  v13 = v3 + 2;
LABEL_24:
  v28 = v13[1] - v6[1] - (_DWORD)v6;
LABEL_25:
  v11 += (_DWORD)v13 + v28;
  v29 = v13;
  for ( j = v13 + 2; j != v7; j += 2 )
  {
    v31 = (_DWORD)j + v29[3] - v29[1] - (_DWORD)v29;
    v11 += v31;
    v29 += 2;
  }
  return v11;
}
