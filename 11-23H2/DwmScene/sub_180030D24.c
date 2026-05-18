/*
 * XREFs of sub_180030D24 @ 0x180030D24
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180030D24(__int64 a1)
{
  *(_QWORD *)a1 = &unk_180106CE8;
  *(_QWORD *)(a1 + 16) = &unk_180106CE0;
  std::wios::wios(a1 + 152);
  std::wiostream::basic_iostream<wchar_t>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::wstreambuf::wstreambuf(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::wstringbuf::`vftable';
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  return a1;
}
