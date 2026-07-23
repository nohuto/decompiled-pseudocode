/*
 * XREFs of sub_1406E9010 @ 0x1406E9010
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_1406E9010(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  bool v7; // sf

  v3 = *a2;
  v4 = *a3;
  v5 = wcsicmp(*(const wchar_t **)(*a2 + 16), *(const wchar_t **)(*a3 + 16));
  v6 = 0;
  v7 = v5 < 0;
  if ( !v5 )
  {
    v5 = wcsicmp(*(const wchar_t **)(v3 + 8), *(const wchar_t **)(v4 + 8));
    v7 = v5 < 0;
  }
  if ( v7 )
    return 0LL;
  LOBYTE(v6) = v5 <= 0;
  return (unsigned int)(v6 + 1);
}
