/*
 * XREFs of ??1?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18014A78C
 * Callers:
 *     _DeserializeProcessingModeCharacteristics_::_1_::dtor$0 @ 0x1800784F2 (_DeserializeProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$0 @ 0x180079B74 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$1 @ 0x180079B86 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$0 @ 0x18007AC67 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::~vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
        __int64 **a1)
{
  return std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a1);
}
