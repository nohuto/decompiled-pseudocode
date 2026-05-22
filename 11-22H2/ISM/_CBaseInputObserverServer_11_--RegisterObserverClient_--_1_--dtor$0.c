/*
 * XREFs of _CBaseInputObserverServer_11_::RegisterObserverClient_::_1_::dtor$0 @ 0x180157169
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CBaseInputObserverServer_11_::RegisterObserverClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>((_QWORD *)(a2 + 32));
}
