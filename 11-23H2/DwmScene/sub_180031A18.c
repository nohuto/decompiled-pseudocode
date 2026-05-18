/*
 * XREFs of sub_180031A18 @ 0x180031A18
 * Callers:
 *     sub_180031A4C @ 0x180031A4C (sub_180031A4C.c)
 *     sub_1800325D0 @ 0x1800325D0 (sub_1800325D0.c)
 * Callees:
 *     sub_1800384B0 @ 0x1800384B0 (sub_1800384B0.c)
 */

__int64 __fastcall sub_180031A18(_QWORD *a1)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_1800384B0();
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
