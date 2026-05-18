/*
 * XREFs of sub_1800910F4 @ 0x1800910F4
 * Callers:
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 */

_DWORD *__fastcall sub_1800910F4(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18008F5A4(a1, a2);
  *result = a3;
  return result;
}
