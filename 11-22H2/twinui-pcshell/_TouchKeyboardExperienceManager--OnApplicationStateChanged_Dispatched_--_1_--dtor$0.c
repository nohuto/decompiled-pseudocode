/*
 * XREFs of _TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched_::_1_::dtor$0 @ 0x18020AA49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 32), a2);
}
