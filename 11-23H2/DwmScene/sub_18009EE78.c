/*
 * XREFs of sub_18009EE78 @ 0x18009EE78
 * Callers:
 *     sub_180039770 @ 0x180039770 (sub_180039770.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_18009EE78(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax

  result = sub_1800124F8((__int64 *)(a1 + 8), a2);
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
