/*
 * XREFs of _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$0 @ 0x18062728E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 184), a2);
}
