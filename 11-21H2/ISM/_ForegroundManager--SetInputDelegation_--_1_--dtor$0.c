/*
 * XREFs of _ForegroundManager::SetInputDelegation_::_1_::dtor$0 @ 0x18008C39C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ForegroundManager::SetInputDelegation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 144));
}
