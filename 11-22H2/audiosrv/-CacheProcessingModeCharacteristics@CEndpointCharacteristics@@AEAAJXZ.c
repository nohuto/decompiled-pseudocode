/*
 * XREFs of ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180020EAC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD60 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18001D544 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 33) == *((_QWORD *)this + 34)
    || (v1 = CEndpointCharacteristics::WriteProcessingModeCharacteristics((__int64)this, 3, (__int64)this + 264), v1 >= 0) )
  {
    if ( *((_QWORD *)this + 30) != *((_QWORD *)this + 31) )
      return (unsigned int)CEndpointCharacteristics::WriteProcessingModeCharacteristics(
                             (__int64)this,
                             0,
                             (__int64)this + 240);
  }
  return (unsigned int)v1;
}
