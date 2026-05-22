/*
 * XREFs of _MPCHolographicInputManager::AddPrimaryInputProvider_::_1_::dtor$0 @ 0x180080D52
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((void *)(a2 + 128));
}
