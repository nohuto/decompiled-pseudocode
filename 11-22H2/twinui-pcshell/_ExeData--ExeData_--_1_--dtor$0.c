/*
 * XREFs of _ExeData::ExeData_::_1_::dtor$0 @ 0x180624D04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExeData::ExeData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 48) + 8LL),
    a2);
}
