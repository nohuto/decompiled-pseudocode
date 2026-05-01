/*
 * XREFs of _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$13 @ 0x180643BAA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 256), a2);
}
