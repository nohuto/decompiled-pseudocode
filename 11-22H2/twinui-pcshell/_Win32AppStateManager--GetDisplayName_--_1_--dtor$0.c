/*
 * XREFs of _Win32AppStateManager::GetDisplayName_::_1_::dtor$0 @ 0x180625A0D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::GetDisplayName_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 40), a2);
}
