/*
 * XREFs of sub_180058E60 @ 0x180058E60
 * Callers:
 *     sub_180058F34 @ 0x180058F34 (sub_180058F34.c)
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 *     sub_18009FCC0 @ 0x18009FCC0 (sub_18009FCC0.c)
 *     sub_1800A0210 @ 0x1800A0210 (sub_1800A0210.c)
 *     sub_180106C87 @ 0x180106C87 (sub_180106C87.c)
 *     sub_180106CBD @ 0x180106CBD (sub_180106CBD.c)
 *     sub_180106CE1 @ 0x180106CE1 (sub_180106CE1.c)
 * Callees:
 *     sub_1800219CC @ 0x1800219CC (sub_1800219CC.c)
 */

__int64 __fastcall sub_180058E60(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 144) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 148) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_1800219CC(a1 + 16);
  std::istream::~istream<char,std::char_traits<char>>(v1 - 120);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
