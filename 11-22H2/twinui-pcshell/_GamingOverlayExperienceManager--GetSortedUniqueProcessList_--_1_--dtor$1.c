/*
 * XREFs of _GamingOverlayExperienceManager::GetSortedUniqueProcessList_::_1_::dtor$1 @ 0x1803FF910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GamingOverlayExperienceManager::GetSortedUniqueProcessList_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 64), a2);
}
