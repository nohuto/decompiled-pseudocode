/*
 * XREFs of sub_140AABA50 @ 0x140AABA50
 * Callers:
 *     sub_1403A7A98 @ 0x1403A7A98 (sub_1403A7A98.c)
 * Callees:
 *     sub_1403A7AF8 @ 0x1403A7AF8 (sub_1403A7AF8.c)
 */

__int64 __fastcall sub_140AABA50(int a1, int a2, int a3)
{
  return (((unsigned int)sub_1403A7AF8(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32;
}
