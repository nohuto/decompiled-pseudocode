/*
 * XREFs of sub_140853430 @ 0x140853430
 * Callers:
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 */

__int64 __fastcall sub_140853430(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rax

  if ( (a3 & 0xFFFFFFEC) != 0 )
    return 3221225485LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(a2 + 2 * v8) );
  v9 = v8 + 39;
  if ( v9 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( a8 )
    *a8 = v9;
  if ( (unsigned int)v9 > a7 )
    return 3221225507LL;
  else
    return sub_1402DFBC4(a6, a7, 0LL, 0LL, 0x800u, L"%s\\%s\\%s", L"System\\CurrentControlSet\\Enum", a2, L"Control");
}
