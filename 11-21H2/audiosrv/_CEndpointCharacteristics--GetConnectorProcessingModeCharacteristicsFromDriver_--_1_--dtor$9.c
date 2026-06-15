/*
 * XREFs of _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$9 @ 0x18014870D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(
           (CConnectorProcessingModeCharacteristics **)(a2 + 208),
           a2);
}
