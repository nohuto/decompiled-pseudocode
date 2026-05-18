/*
 * XREFs of sub_180090FF8 @ 0x180090FF8
 * Callers:
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 * Callees:
 *     sub_18008F5A4 @ 0x18008F5A4 (sub_18008F5A4.c)
 */

_DWORD *__fastcall sub_180090FF8(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18008F5A4(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
