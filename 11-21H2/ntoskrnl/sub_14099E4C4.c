/*
 * XREFs of sub_14099E4C4 @ 0x14099E4C4
 * Callers:
 *     sub_140806630 @ 0x140806630 (sub_140806630.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 */

__int64 __fastcall sub_14099E4C4(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = v4;
  result = sub_1402E1280((wchar_t *)(a1 + 20), 0x10uLL, L"%s", L"TRUE");
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2 + 20) );
  *(_DWORD *)(a1 + 16) = v2;
  return result;
}
