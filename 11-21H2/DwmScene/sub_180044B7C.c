/*
 * XREFs of sub_180044B7C @ 0x180044B7C
 * Callers:
 *     sub_180101E9E @ 0x180101E9E (sub_180101E9E.c)
 *     sub_1801071BA @ 0x1801071BA (sub_1801071BA.c)
 *     sub_18010D0B0 @ 0x18010D0B0 (sub_18010D0B0.c)
 *     sub_18010D4A2 @ 0x18010D4A2 (sub_18010D4A2.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180044B7C(__int64 a1)
{
  __int64 result; // rax

  sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
