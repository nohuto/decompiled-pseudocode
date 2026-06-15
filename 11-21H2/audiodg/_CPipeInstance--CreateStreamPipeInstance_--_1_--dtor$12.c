/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x14003858C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(a2 + 64);
}
