/*
 * XREFs of _ForegroundManager::SetInputDelegation_::_1_::dtor$0 @ 0x1800A3484
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ForegroundManager::SetInputDelegation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 144));
}
