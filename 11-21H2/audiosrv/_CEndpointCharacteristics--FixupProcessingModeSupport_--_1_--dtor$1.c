/*
 * XREFs of _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$1 @ 0x18006F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<PacketSizeConstraints>::~CComHeapPtr<PacketSizeConstraints>((LPVOID *)(a2 + 80));
}
