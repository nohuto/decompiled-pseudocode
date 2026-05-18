/*
 * XREFs of sub_1800515C4 @ 0x1800515C4
 * Callers:
 *     sub_180051654 @ 0x180051654 (sub_180051654.c)
 *     sub_1800900BC @ 0x1800900BC (sub_1800900BC.c)
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_1800EA952 @ 0x1800EA952 (sub_1800EA952.c)
 *     sub_1800EA976 @ 0x1800EA976 (sub_1800EA976.c)
 *     sub_1800EA99A @ 0x1800EA99A (sub_1800EA99A.c)
 * Callees:
 *     sub_1800512CC @ 0x1800512CC (sub_1800512CC.c)
 */

__int64 __fastcall sub_1800515C4(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_1800512CC(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
