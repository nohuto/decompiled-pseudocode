/*
 * XREFs of _InputSystemInternalClientConnection::SetBootstrapProxy_::_1_::dtor$1 @ 0x180120B86
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputSystemInternalClientConnection::SetBootstrapProxy_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>((__int64 *)(a2 + 88));
}
