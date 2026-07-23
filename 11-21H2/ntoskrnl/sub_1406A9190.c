/*
 * XREFs of sub_1406A9190 @ 0x1406A9190
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_1406A9190(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  const wchar_t *v7; // rcx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  int v10; // eax

  v3 = *a2;
  v4 = *a3;
  if ( *a2 != *a3 )
  {
    v5 = *(_DWORD *)(v3 + 24);
    if ( v5 < *(_DWORD *)(v4 + 24) )
      return 0LL;
    if ( v5 > *(_DWORD *)(v4 + 24) )
      return 1LL;
    v7 = *(const wchar_t **)(v4 + 16);
    v8 = v7 + 4;
    if ( *(_DWORD *)(v3 + 28) != 3 )
      v8 = v7;
    v9 = (const wchar_t *)(*(_QWORD *)(v3 + 16) + 8LL);
    if ( *(_DWORD *)(v3 + 28) != 3 )
      v9 = *(const wchar_t **)(v3 + 16);
    v10 = wcsicmp(v9, v8);
    if ( v10 < 0 )
      return 0LL;
    if ( v10 > 0 )
      return 1LL;
  }
  return 2LL;
}
