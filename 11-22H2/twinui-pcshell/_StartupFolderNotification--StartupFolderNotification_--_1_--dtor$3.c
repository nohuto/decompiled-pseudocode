/*
 * XREFs of _StartupFolderNotification::StartupFolderNotification_::_1_::dtor$3 @ 0x180642119
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::StartupFolderNotification_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 40) + 64LL),
    a2);
}
