/*
 * XREFs of _CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor$1 @ 0x1801272D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 128));
}
