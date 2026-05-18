/*
 * XREFs of sub_180034000 @ 0x180034000
 * Callers:
 *     sub_1801011CC @ 0x1801011CC (sub_1801011CC.c)
 * Callees:
 *     sub_180032B0C @ 0x180032B0C (sub_180032B0C.c)
 */

__int64 __fastcall sub_180034000(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 156) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  sub_180032B0C(a1 + 24);
  std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(v1 - 120);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
