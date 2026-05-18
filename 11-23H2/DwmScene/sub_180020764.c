/*
 * XREFs of sub_180020764 @ 0x180020764
 * Callers:
 *     sub_1800207C8 @ 0x1800207C8 (sub_1800207C8.c)
 * Callees:
 *     sub_180020730 @ 0x180020730 (sub_180020730.c)
 */

__int64 __fastcall sub_180020764(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_180020730((_QWORD *)(a1 - 128));
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
