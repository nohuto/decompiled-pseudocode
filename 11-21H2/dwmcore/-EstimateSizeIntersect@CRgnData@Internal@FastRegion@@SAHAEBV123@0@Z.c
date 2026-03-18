/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800844F4
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  int v8; // eax
  char *v9; // rbp
  int v10; // ecx
  unsigned int v11; // r11d
  char *v12; // r8
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // r9
  int v17; // ecx
  int v18; // ebx
  int v19; // r10d
  _DWORD *v20; // r15
  _DWORD *v21; // rsi
  char *v22; // rdi
  int v24; // ecx
  int v25; // edx
  _DWORD *v26; // rbx
  int v27; // ecx
  char *v28; // rdx

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
    v16 = v3 + 2;
    while ( *v16 < v10 )
    {
      v16 += 2;
      if ( v16 == v7 )
        return v11;
    }
    v25 = (_DWORD)a2 + 20;
    v26 = v16;
    v12 = v5 + 8;
    if ( *v16 <= v10 )
    {
      v16 += 2;
      if ( v16 == v7 )
        return v11;
      v27 = v16[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v26[1] - (_DWORD)v26;
    }
    else
    {
      v27 = v16[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - *(v16 - 1) - ((_DWORD)v16 - 8);
    }
    v17 = v25 + (_DWORD)v16 + v27 - (_DWORD)v5;
    goto LABEL_5;
  }
  v12 = (char *)a2 + 20;
  v13 = (_DWORD)a2 + 20;
  if ( *v3 <= v10 )
  {
    v16 = v3 + 2;
    v24 = v16[1] + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4) - v6[1] - (_DWORD)v6 - (_DWORD)v5;
LABEL_16:
    v17 = v13 + (_DWORD)v16 + v24;
LABEL_5:
    v18 = *(_DWORD *)v12;
    for ( v11 += v17; ; v11 += *((_DWORD *)v12 + 1) + v21[3] - *((_DWORD *)v12 - 1) - v21[1] + 16 )
    {
      v19 = *v16;
      while ( 1 )
      {
        v20 = v16;
        v21 = v16;
        v22 = v12;
        if ( v19 < v18 )
          break;
        v12 += 8;
        if ( v19 > v18 )
        {
          if ( v12 == v9 )
            return v11;
          v11 += v16[1] + *((_DWORD *)v22 + 3) - *((_DWORD *)v22 + 1) - *(v16 - 1) + 16;
        }
        else
        {
          v16 += 2;
          if ( v16 == v7 || v12 == v9 )
            return v11;
          v19 = *v16;
          v11 += v20[3] + *((_DWORD *)v22 + 3) - *((_DWORD *)v22 + 1) - v20[1] + 16;
        }
        v18 = *(_DWORD *)v12;
      }
      v16 += 2;
      if ( v16 == v7 )
        break;
    }
    return v11;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)v12;
    if ( *v3 < *(_DWORD *)v12 )
    {
      v15 = v3[3] - *((_DWORD *)v12 - 1);
      v16 = v3 + 2;
      v17 = (_DWORD)v16 + *((_DWORD *)v12 + 1) + v15 - v6[1] - (_DWORD)v6 + 8;
      goto LABEL_5;
    }
    v28 = v12;
    v12 += 8;
    if ( *v3 <= v14 )
      break;
    if ( v12 == v9 )
      return v11;
  }
  v16 = v3 + 2;
  if ( v12 != v9 )
  {
    v13 = (_DWORD)v28 + 8;
    v24 = v16[1] + *((_DWORD *)v28 + 3) - *((_DWORD *)v28 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v28;
    goto LABEL_16;
  }
  return v11;
}
