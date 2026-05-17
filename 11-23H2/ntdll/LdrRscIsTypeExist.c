/*
 * XREFs of LdrRscIsTypeExist @ 0x180029080
 * Callers:
 *     LdrIsResItemExist @ 0x1800083C4 (LdrIsResItemExist.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRscIsTypeExist(unsigned int *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  const wchar_t *v5; // r8
  char v7; // r15
  int v8; // ecx
  _DWORD *v9; // rdx
  int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rdi
  int v17; // esi
  char v18; // al
  __int64 v19; // rcx
  int v20; // ecx
  const wchar_t *v21; // rsi
  int v22; // r12d

  v5 = (const wchar_t *)a2;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = 1;
  if ( a2 >= 0x10000 )
  {
    v22 = a1[22] >> 1;
    v21 = (const wchar_t *)((char *)a1 + a1[21]);
    if ( (unsigned int)v21 > 0x10000 )
    {
      while ( v22 > 0 )
      {
        if ( !*v21 )
          goto LABEL_37;
        if ( !wcsicmp(v5, v21) )
        {
          v5 = (const wchar_t *)a2;
          break;
        }
        v19 = -1LL;
        do
          ++v19;
        while ( v21[v19] );
        v20 = v19 + 1;
        v21 += v20;
        v22 -= v20;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v21 || (v18 = 1, v22 <= 0) )
LABEL_37:
      v18 = 0;
    if ( !v18 )
      *a4 |= 0x40000u;
    v17 = a1[26] >> 1;
    v16 = (const wchar_t *)((char *)a1 + a1[25]);
    if ( (unsigned int)v16 > 0x10000 )
    {
      while ( v17 > 0 )
      {
        if ( !*v16 )
          goto LABEL_26;
        if ( !wcsicmp(v5, v16) )
          break;
        v14 = -1LL;
        do
          ++v14;
        while ( v16[v14] );
        v15 = v14 + 1;
        v16 += v15;
        v17 -= v15;
        v5 = (const wchar_t *)a2;
      }
    }
    if ( !*v16 || v17 <= 0 )
LABEL_26:
      v7 = 0;
    if ( !v7 )
      *a4 |= 0x20000u;
  }
  else
  {
    v8 = a1[24] >> 2;
    v9 = (unsigned int *)((char *)a1 + a1[23]);
    do
    {
      if ( --v8 < 0 )
        break;
    }
    while ( (_DWORD)v5 - *v9++ );
    if ( v8 < 0 )
      *a4 |= 0x40000u;
    v11 = a1[28] >> 2;
    v12 = (unsigned int *)((char *)a1 + a1[27]);
    do
    {
      if ( --v11 < 0 )
        break;
    }
    while ( (_DWORD)v5 - *v12++ );
    if ( v11 < 0 )
      *a4 |= 0x20000u;
  }
  return 0LL;
}
