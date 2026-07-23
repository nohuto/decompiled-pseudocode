/*
 * XREFs of PiDmCompareObjects @ 0x1407AD5F0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned int v5; // ecx
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rcx
  int v9; // ecx

  v3 = *a2;
  v4 = *a3;
  if ( v3 == *a3 )
    return 2LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 < *(_DWORD *)(v4 + 24) )
    return 0LL;
  if ( v5 > *(_DWORD *)(v4 + 24) )
    return 1LL;
  v7 = *(const wchar_t **)(v4 + 16);
  v8 = *(const wchar_t **)(v3 + 16);
  if ( *(_DWORD *)(v3 + 28) == 3 )
  {
    v8 += 4;
    v7 += 4;
  }
  v9 = wcsicmp(v8, v7);
  if ( v9 < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 <= 0) + 1;
}
