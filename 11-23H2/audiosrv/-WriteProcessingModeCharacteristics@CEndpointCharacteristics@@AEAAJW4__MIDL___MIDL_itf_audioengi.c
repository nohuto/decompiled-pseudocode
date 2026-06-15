/*
 * XREFs of ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18001D544
 * Callers:
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180020EAC (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?SerializeProcessingModeCharacteristics@@YAJAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAKPEAPEAE@Z @ 0x18003C21C (-SerializeProcessingModeCharacteristics@@YAJAEAV-$vector@V-$unique_ptr@VCConnectorProcessingMode.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::WriteProcessingModeCharacteristics(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v9 = PKEY_AudioEngine_ConnectorSignalProcessingMode_Specific_Characteristics;
  v10 = 200 * a2 + 2;
  v4 = SerializeProcessingModeCharacteristics(a3, &pvar[1], &v8);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    LOWORD(pvar[0]) = 65;
    v4 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v5 + 48LL))(v5, &v9, pvar);
  }
  PropVariantClear(pvar);
  return (unsigned int)v4;
}
