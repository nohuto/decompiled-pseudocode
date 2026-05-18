/*
 * XREFs of sub_180031A4C @ 0x180031A4C
 * Callers:
 *     sub_1800321F8 @ 0x1800321F8 (sub_1800321F8.c)
 * Callees:
 *     sub_180031A18 @ 0x180031A18 (sub_180031A18.c)
 */

__int64 __fastcall sub_180031A4C(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_180031A18((_QWORD *)(a1 - 128));
  return std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
}
