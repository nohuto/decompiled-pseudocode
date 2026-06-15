/*
 * XREFs of _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$2 @ 0x18007ACA9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(a2 + 72);
}
