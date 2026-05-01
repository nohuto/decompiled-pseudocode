/*
 * XREFs of _StartupNotification::StartupNotification_::_1_::dtor$2 @ 0x180642291
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupNotification::StartupNotification_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 80) + 24LL),
    a2);
}
