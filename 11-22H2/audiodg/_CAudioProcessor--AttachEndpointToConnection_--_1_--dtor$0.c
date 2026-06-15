/*
 * XREFs of _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x1400360B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioProcessor::AttachEndpointToConnection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAudioPump::operator delete(*(void **)(a2 + 80));
}
