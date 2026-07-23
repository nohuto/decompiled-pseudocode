/*
 * XREFs of sub_140A15C98 @ 0x140A15C98
 * Callers:
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 * Callees:
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A16E28 @ 0x140A16E28 (sub_140A16E28.c)
 */

__int64 __fastcall sub_140A15C98(wchar_t **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  rsize_t v7; // rdi
  wchar_t *v8; // rax
  wchar_t *v9; // rbp

  v2 = 0;
  *a1 = 0LL;
  if ( (unsigned int)sub_140A16E28(a2) == 1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    v7 = v6 + 9;
    v8 = (wchar_t *)sub_14075B444(v5, 2 * v7);
    v9 = v8;
    if ( v8 )
    {
      wcscpy_s(v8, v7, L"\\??\\UNC\\");
      wcscat_s(v9, v7, (const wchar_t *)(a2 + 4));
      *a1 = v9;
    }
    else
    {
      v2 = -1073741801;
      sub_1406E0C3C(1LL, (__int64)"AslPathToNetworkPathNt");
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
