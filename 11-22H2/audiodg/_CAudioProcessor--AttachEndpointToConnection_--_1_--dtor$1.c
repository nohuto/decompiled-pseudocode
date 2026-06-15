/*
 * XREFs of _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$1 @ 0x1400360C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::AttachEndpointToConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>(a2 + 40);
}
