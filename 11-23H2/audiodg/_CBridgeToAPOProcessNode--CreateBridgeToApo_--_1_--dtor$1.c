/*
 * XREFs of _CBridgeToAPOProcessNode::CreateBridgeToApo_::_1_::dtor$1 @ 0x14005D9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CEndpointInstance *__fastcall CBridgeToAPOProcessNode::CreateBridgeToApo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<CEndpointInstance>>::~out_param_t<std::unique_ptr<CEndpointInstance>>(a2 + 96);
}
