/*
 * XREFs of _Util::FileMappingHelpers::CreateFileMappingName_::_1_::dtor$6 @ 0x18071012D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Util::FileMappingHelpers::CreateFileMappingName_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
