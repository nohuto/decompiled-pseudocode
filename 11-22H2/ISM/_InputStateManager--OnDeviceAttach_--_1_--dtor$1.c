/*
 * XREFs of _InputStateManager::OnDeviceAttach_::_1_::dtor$1 @ 0x180082483
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((void *)(a2 + 144));
}
