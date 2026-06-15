/*
 * XREFs of _CBridgeSinkProcessNode::CreateStreamInstance_::_1_::dtor$0 @ 0x14005DC6E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CEndpointInstance *__fastcall CBridgeSinkProcessNode::CreateStreamInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>((CEndpointInstance **)(a2 + 120));
}
