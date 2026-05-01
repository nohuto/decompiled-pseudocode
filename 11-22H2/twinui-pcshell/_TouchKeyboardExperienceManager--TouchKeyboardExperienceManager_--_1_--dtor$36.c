/*
 * XREFs of _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$36 @ 0x1802B6E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor_36(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 96) + 2080LL),
    a2);
}
