/*
 * XREFs of ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18004728C
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180047814 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180047350 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV-$vector@V-$unique_ptr@VCConnectorProcess.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::ReadProcessingModeCharacteristics(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  int v5; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v9 = PKEY_AudioEngine_ConnectorSignalProcessingMode_Specific_Characteristics;
  v10 = 200 * a2 + 2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(v3, &v9, pvar);
  if ( v5 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 65 )
      v5 = DeserializeProcessingModeCharacteristics(LODWORD(pvar[1]), v8, a3);
    else
      v5 = -2147023728;
  }
  PropVariantClear(pvar);
  return (unsigned int)v5;
}
