/*
 * XREFs of _CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor$2 @ 0x1802E61E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 160));
}
