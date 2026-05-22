/*
 * XREFs of _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$1 @ 0x1800855B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 120));
}
