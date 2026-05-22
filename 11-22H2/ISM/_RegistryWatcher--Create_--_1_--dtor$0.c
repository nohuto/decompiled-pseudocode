/*
 * XREFs of _RegistryWatcher::Create_::_1_::dtor$0 @ 0x1800807D7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RegistryWatcher::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((void *)(a2 + 64));
}
