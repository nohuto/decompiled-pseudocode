/*
 * XREFs of ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1801453FC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18014DB90 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 31) == *((_QWORD *)this + 32)
    || (v1 = CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 3LL), v1 >= 0) )
  {
    if ( *((_QWORD *)this + 28) != *((_QWORD *)this + 29) )
      return (unsigned int)CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 0LL);
  }
  return (unsigned int)v1;
}
