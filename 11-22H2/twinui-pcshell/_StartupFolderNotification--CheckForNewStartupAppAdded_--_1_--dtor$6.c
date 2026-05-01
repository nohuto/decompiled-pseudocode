/*
 * XREFs of _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$6 @ 0x180643201
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 528), a2);
}
