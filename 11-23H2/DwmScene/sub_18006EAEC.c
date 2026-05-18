/*
 * XREFs of sub_18006EAEC @ 0x18006EAEC
 * Callers:
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 * Callees:
 *     sub_180042890 @ 0x180042890 (sub_180042890.c)
 */

__int64 __fastcall sub_18006EAEC(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_180042890((__int64)a1, a1[2] + 1LL);
  return sub_18006E820(a1, v2);
}
