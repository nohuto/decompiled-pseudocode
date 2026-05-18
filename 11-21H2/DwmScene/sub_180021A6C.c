/*
 * XREFs of sub_180021A6C @ 0x180021A6C
 * Callers:
 *     sub_180021B4C @ 0x180021B4C (sub_180021B4C.c)
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E63A4 @ 0x1800E63A4 (sub_1800E63A4.c)
 *     sub_18010CDB7 @ 0x18010CDB7 (sub_18010CDB7.c)
 *     sub_18010CDC9 @ 0x18010CDC9 (sub_18010CDC9.c)
 * Callees:
 *     sub_1800219CC @ 0x1800219CC (sub_1800219CC.c)
 */

__int64 __fastcall sub_180021A6C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 156) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  sub_1800219CC(a1 + 24);
  std::iostream::~basic_iostream<char,std::char_traits<char>>(v1 - 120);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
