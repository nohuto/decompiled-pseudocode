/*
 * XREFs of sub_140B52AA8 @ 0x140B52AA8
 * Callers:
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_1406EBA70 @ 0x1406EBA70 (sub_1406EBA70.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 */

void __fastcall sub_140B52AA8(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  sub_1406EBA70();
  sub_14076200C(0, v3, a2);
}
