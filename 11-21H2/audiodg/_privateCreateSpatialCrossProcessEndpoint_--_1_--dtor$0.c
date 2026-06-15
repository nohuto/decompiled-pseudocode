/*
 * XREFs of _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x14008E8B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateSpatialCrossProcessEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAudioProcessor::operator delete(*(void **)(a2 + 32));
}
