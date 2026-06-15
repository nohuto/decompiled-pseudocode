/*
 * XREFs of ??1?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@QEAA@XZ @ 0x1801442BC
 * Callers:
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$3 @ 0x1801477E3 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$9 @ 0x18014870D (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$9.c)
 * Callees:
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x180144B2C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>(
        CConnectorProcessingModeCharacteristics **a1,
        unsigned int a2)
{
  CConnectorProcessingModeCharacteristics *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v2, a2);
  return result;
}
