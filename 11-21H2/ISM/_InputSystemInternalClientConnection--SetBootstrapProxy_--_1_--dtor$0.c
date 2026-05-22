/*
 * XREFs of _InputSystemInternalClientConnection::SetBootstrapProxy_::_1_::dtor$0 @ 0x180120B7A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InputSystemInternalClientConnection::SetBootstrapProxy_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 104));
}
