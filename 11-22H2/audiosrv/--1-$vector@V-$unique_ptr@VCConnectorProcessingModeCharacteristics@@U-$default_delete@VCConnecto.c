/*
 * XREFs of ??1?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18014A7DC
 * Callers:
 *     _DeserializeProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180078522 (_DeserializeProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$0 @ 0x180079BA4 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$1 @ 0x180079BB6 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18007AC97 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::~vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
        __int64 **a1)
{
  return std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a1);
}
