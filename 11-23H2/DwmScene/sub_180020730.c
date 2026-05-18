/*
 * XREFs of sub_180020730 @ 0x180020730
 * Callers:
 *     sub_180020764 @ 0x180020764 (sub_180020764.c)
 *     sub_180020820 @ 0x180020820 (sub_180020820.c)
 *     sub_1800512CC @ 0x1800512CC (sub_1800512CC.c)
 * Callees:
 *     sub_1800209AC @ 0x1800209AC (sub_1800209AC.c)
 */

__int64 __fastcall sub_180020730(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  sub_1800209AC();
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
