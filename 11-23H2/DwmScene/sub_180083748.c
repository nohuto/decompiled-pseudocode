/*
 * XREFs of sub_180083748 @ 0x180083748
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 */

_DWORD *__fastcall sub_180083748(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_180082034(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
