/*
 * XREFs of _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x14008E8BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateSpatialCrossProcessEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAudioProcessor::operator delete(*(void **)(a2 + 32));
}
