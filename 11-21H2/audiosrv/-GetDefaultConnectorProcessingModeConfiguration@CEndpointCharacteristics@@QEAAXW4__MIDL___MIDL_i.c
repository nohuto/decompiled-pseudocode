/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180145170 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180147248 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BC54 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000CB2C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014A354 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

void __fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  GUID v6; // xmm6
  GUID v10; // xmm7
  int IsAPOModeSupported; // eax
  GUID *v12; // rcx
  struct _GUID v13; // [rsp+20h] [rbp-88h] BYREF
  GUID v14; // [rsp+30h] [rbp-78h] BYREF

  v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v10 = *CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal((__int64)this, &v13, a2, 0);
  v14 = v10;
  if ( a4 )
  {
    v13 = v10;
    IsAPOModeSupported = CEndpointCharacteristics::IsAPOModeSupported(
                           this,
                           &v13,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2);
    v12 = &v14;
    if ( !IsAPOModeSupported )
      v12 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v6 = *v12;
  }
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v6;
  if ( a5 )
    *a5 = v10;
}
