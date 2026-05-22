/*
 * XREFs of _InputStateManager::OnDeviceRemoval_::_1_::dtor$0 @ 0x1800CC007
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::OnDeviceRemoval_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((__int64 *)(a2 + 80));
}
