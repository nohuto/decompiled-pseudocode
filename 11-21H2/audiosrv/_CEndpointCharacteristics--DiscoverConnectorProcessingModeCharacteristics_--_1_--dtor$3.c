/*
 * XREFs of _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$3 @ 0x1801477E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(
           (CConnectorProcessingModeCharacteristics **)(a2 + 72),
           a2);
}
