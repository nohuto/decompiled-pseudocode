/*
 * XREFs of sub_18003445C @ 0x18003445C
 * Callers:
 *     sub_180034080 @ 0x180034080 (sub_180034080.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180032B0C @ 0x180032B0C (sub_180032B0C.c)
 */

void *__fastcall sub_18003445C(__int64 a1, char a2)
{
  void *v2; // rsi
  __int64 v5; // r8

  v2 = (void *)(a1 - 152);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  v5 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v5 + a1 - 156) = v5 - 152;
  sub_180032B0C(a1 - 128);
  std::wiostream::~basic_iostream<wchar_t,std::char_traits<wchar_t>>(a1 - 120);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    sub_18000B998(v2);
  return v2;
}
