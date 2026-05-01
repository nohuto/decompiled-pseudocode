/*
 * XREFs of _TouchKeyboardExperienceManager::CreateModalExperienceAsync_::_1_::dtor$1 @ 0x18050F1E9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::CreateModalExperienceAsync_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 48), a2);
}
