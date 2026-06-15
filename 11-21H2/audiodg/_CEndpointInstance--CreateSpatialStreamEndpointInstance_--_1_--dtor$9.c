/*
 * XREFs of _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$9 @ 0x14005D1D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CEndpointInstance *__fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>((CEndpointInstance **)(a2 + 104));
}
