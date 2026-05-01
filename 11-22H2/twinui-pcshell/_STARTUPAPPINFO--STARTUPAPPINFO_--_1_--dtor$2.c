/*
 * XREFs of _STARTUPAPPINFO::STARTUPAPPINFO_::_1_::dtor$2 @ 0x1802E8A06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall STARTUPAPPINFO::STARTUPAPPINFO_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 48) + 72LL),
    a2);
}
