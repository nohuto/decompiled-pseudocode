/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$1 @ 0x18010912D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>((__int64 *)(a2 + 56));
}
