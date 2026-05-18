/*
 * XREFs of sub_1800512CC @ 0x1800512CC
 * Callers:
 *     sub_1800515C4 @ 0x1800515C4 (sub_1800515C4.c)
 * Callees:
 *     sub_180020730 @ 0x180020730 (sub_180020730.c)
 */

__int64 __fastcall sub_1800512CC(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  sub_180020730((_QWORD *)(a1 - 128));
  return std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
}
