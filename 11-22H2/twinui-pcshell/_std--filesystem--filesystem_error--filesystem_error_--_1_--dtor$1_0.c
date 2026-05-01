/*
 * XREFs of _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$1_0 @ 0x1803D45F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::filesystem_error::filesystem_error_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 48) + 40LL),
    a2);
}
