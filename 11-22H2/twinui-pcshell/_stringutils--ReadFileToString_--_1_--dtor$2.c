/*
 * XREFs of _stringutils::ReadFileToString_::_1_::dtor$2 @ 0x1806E358B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall stringutils::ReadFileToString_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 384), a2);
}
