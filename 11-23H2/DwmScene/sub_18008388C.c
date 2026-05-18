/*
 * XREFs of sub_18008388C @ 0x18008388C
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 */

_DWORD *__fastcall sub_18008388C(__int64 a1, unsigned __int16 a2, char a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_180082034(a1, a2);
  *result = -(a3 != 0);
  return result;
}
