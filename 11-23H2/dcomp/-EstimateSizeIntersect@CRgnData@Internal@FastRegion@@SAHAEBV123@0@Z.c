/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180005AA8
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800059D0 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
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
  _DWORD *v6; // r11
  _DWORD *v7; // rbp
  unsigned int v8; // r8d
  int v9; // eax
  char *v10; // rbx
  bool v11; // cc
  char *v12; // rdx
  _DWORD *v13; // r9
  int v14; // ecx
  int v15; // r11d
  int v16; // r10d
  _DWORD *v17; // rcx
  _DWORD *v18; // rsi
  char *v19; // rdi
  int v21; // ecx
  int v22; // r11d
  _DWORD *v23; // rdi
  int v24; // ecx
  int v25; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = &v3[2 * v2];
  v8 = 8 * (v4 + v2) + 12;
  v9 = *v3;
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = *v3 <= *((_DWORD *)a2 + 3);
  if ( *v3 < *((_DWORD *)a2 + 3) )
  {
    v13 = v3 + 2;
    while ( *v13 < *(_DWORD *)v5 )
    {
      v13 += 2;
      if ( v13 == v7 )
        return v8;
    }
    v22 = (_DWORD)a2 + 20;
    v23 = v13;
    v12 = (char *)a2 + 20;
    if ( *v13 <= *(_DWORD *)v5 )
    {
      v13 += 2;
      if ( v13 == v7 )
        return v8;
      v24 = v13[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - v23[1] - (_DWORD)v23;
    }
    else
    {
      v24 = v13[1] + *((_DWORD *)v5 + 3) - *((_DWORD *)v5 + 1) - *(v13 - 1) - ((_DWORD)v13 - 8);
    }
    v14 = v22 + (_DWORD)v13 + v24 - (_DWORD)v5;
    goto LABEL_5;
  }
  v12 = (char *)a2 + 20;
  if ( v11 )
  {
    v13 = v3 + 2;
LABEL_4:
    v14 = (_DWORD)v12
        + (_DWORD)v13
        + v13[1]
        + *((_DWORD *)v12 + 1)
        - *((_DWORD *)v5 + 1)
        - v6[1]
        - (_DWORD)v6
        - (_DWORD)v5;
LABEL_5:
    v15 = *(_DWORD *)v12;
    while ( 1 )
    {
      v16 = *v13;
      v8 += v14;
      while ( 1 )
      {
        v17 = v13;
        v18 = v13;
        v19 = v12;
        if ( v16 < v15 )
          break;
        v12 += 8;
        if ( v16 > v15 )
        {
          if ( v12 == v10 )
            return v8;
          v8 += (_DWORD)v12 + v13[1] + *((_DWORD *)v12 + 1) - *((_DWORD *)v19 + 1) - *(v13 - 1) + 8 - (_DWORD)v19;
        }
        else
        {
          v13 += 2;
          if ( v13 == v7 || v12 == v10 )
            return v8;
          v16 = *v13;
          v8 += (_DWORD)v12
              + (_DWORD)v13
              + v13[1]
              + *((_DWORD *)v12 + 1)
              - *((_DWORD *)v19 + 1)
              - v17[1]
              - (_DWORD)v17
              - (_DWORD)v19;
        }
        v15 = *(_DWORD *)v12;
      }
      v13 += 2;
      if ( v13 == v7 )
        break;
      v14 = (_DWORD)v13 + *((_DWORD *)v12 + 1) + v13[1] - *((_DWORD *)v12 - 1) - v18[1] - (_DWORD)v18 + 8;
    }
    return v8;
  }
  while ( 1 )
  {
    v21 = *(_DWORD *)v12;
    if ( v9 < *(_DWORD *)v12 )
    {
      v25 = v3[3] - *((_DWORD *)v12 - 1);
      v13 = v3 + 2;
      v14 = (_DWORD)v13 + *((_DWORD *)v12 + 1) + v25 - v6[1] - (_DWORD)v6 + 8;
      goto LABEL_5;
    }
    v5 = v12;
    v12 += 8;
    if ( v9 <= v21 )
      break;
    if ( v12 == v10 )
      return v8;
  }
  v13 = v3 + 2;
  if ( v12 != v10 )
    goto LABEL_4;
  return v8;
}
