/*
 * XREFs of _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x14003731E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessingData::CopyEndpointList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAudioProcessor::operator delete(*(void **)(a2 + 88));
}
