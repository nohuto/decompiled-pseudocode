/*
 * XREFs of sub_18009113C @ 0x18009113C
 * Callers:
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 */

_DWORD *__fastcall sub_18009113C(__int64 a1, unsigned __int16 a2, char a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18008F5A4(a1, a2);
  *result = -(a3 != 0);
  return result;
}
