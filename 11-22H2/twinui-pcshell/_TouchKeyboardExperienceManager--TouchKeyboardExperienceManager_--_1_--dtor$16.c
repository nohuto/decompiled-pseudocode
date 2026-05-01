/*
 * XREFs of _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$16 @ 0x1802B6C9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(
    (void *)(*(_QWORD *)(a2 + 96) + 488LL),
    a2);
}
