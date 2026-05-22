/*
 * XREFs of _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$3 @ 0x18009C6C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 128));
}
