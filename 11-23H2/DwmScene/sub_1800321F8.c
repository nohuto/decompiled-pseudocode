/*
 * XREFs of sub_1800321F8 @ 0x1800321F8
 * Callers:
 *     sub_18003260C @ 0x18003260C (sub_18003260C.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_1800E5C97 @ 0x1800E5C97 (sub_1800E5C97.c)
 * Callees:
 *     sub_180031A4C @ 0x180031A4C (sub_180031A4C.c)
 */

__int64 __fastcall sub_1800321F8(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_180031A4C(a1 + 152);
  return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(v1);
}
