/*
 * XREFs of _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x140034274
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessingData::CopyEndpointList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAudioPump::operator delete(*(void **)(a2 + 104));
}
