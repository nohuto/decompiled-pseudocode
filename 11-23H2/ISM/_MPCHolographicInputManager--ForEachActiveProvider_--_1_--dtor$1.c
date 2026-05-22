/*
 * XREFs of _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$1 @ 0x1800B4A23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((__int64 *)(a2 + 64));
}
