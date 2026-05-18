/*
 * XREFs of sub_180085420 @ 0x180085420
 * Callers:
 *     sub_1800853E8 @ 0x1800853E8 (sub_1800853E8.c)
 * Callees:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

_DWORD *__fastcall sub_180085420(__int64 a1, __int64 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_18008472C(a1, a2, 0LL);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
