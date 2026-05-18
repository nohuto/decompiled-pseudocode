/*
 * XREFs of sub_18008552C @ 0x18008552C
 * Callers:
 *     sub_1800854F4 @ 0x1800854F4 (sub_1800854F4.c)
 * Callees:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

_DWORD *__fastcall sub_18008552C(__int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18008472C(a1, a2, 1LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
