/*
 * XREFs of sub_1800207C8 @ 0x1800207C8
 * Callers:
 *     sub_18002085C @ 0x18002085C (sub_18002085C.c)
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     sub_1800CF1C0 @ 0x1800CF1C0 (sub_1800CF1C0.c)
 *     sub_1800F1A44 @ 0x1800F1A44 (sub_1800F1A44.c)
 * Callees:
 *     sub_180020764 @ 0x180020764 (sub_180020764.c)
 */

__int64 __fastcall sub_1800207C8(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_180020764(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
