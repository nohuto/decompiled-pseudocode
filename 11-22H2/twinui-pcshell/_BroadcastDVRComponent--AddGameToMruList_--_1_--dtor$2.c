/*
 * XREFs of _BroadcastDVRComponent::AddGameToMruList_::_1_::dtor$2 @ 0x1803D56A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BroadcastDVRComponent::AddGameToMruList_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 200), a2);
}
