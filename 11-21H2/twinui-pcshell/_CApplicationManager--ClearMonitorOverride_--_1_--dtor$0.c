/*
 * XREFs of _CApplicationManager::ClearMonitorOverride_::_1_::dtor$0 @ 0x1802E1D84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ClearMonitorOverride_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
