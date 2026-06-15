/*
 * XREFs of ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78
 * Callers:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180047814 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x180144968 (_lambda_9db93a4360823e3555de44b3b523347b_--operator().c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180147248 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180147FD4 (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BC54 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18014B6D8 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
        __int64 a1,
        struct _GUID *a2,
        int a3,
        struct _GUID *a4,
        int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r9d
  struct _GUID *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  CAudioSignalProcessingModeMap *v17; // rax
  struct _GUID v18; // [rsp+20h] [rbp-48h] BYREF
  struct _GUID v19; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v6 = a1 + 1856;
  v9 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 1856, a3);
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 16);
  if ( v11 <= 0 )
    goto LABEL_2;
  v15 = *(_QWORD *)v9;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v15 + 16LL * v10) - *(_QWORD *)&a4->Data1;
    if ( !v16 )
      v16 = *(_QWORD *)(v15 + 16LL * v10 + 8) - *(_QWORD *)a4->Data4;
    if ( !v16 )
      break;
    if ( ++v10 >= v11 )
      goto LABEL_2;
  }
  if ( v10 == -1 )
  {
LABEL_2:
    v12 = &v18;
    v18 = *a4;
  }
  else
  {
    v17 = (CAudioSignalProcessingModeMap *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v6, v5);
    v18 = *a4;
    v12 = CAudioSignalProcessingModeMap::Lookup(v17, &v19, &v18);
  }
  *a2 = *v12;
  if ( !a5 )
  {
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v13 )
      *a2 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  return a2;
}
