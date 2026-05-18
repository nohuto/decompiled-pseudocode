/*
 * XREFs of sub_1800837BC @ 0x1800837BC
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 */

_DWORD *__fastcall sub_1800837BC(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_180082034(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  return result;
}
