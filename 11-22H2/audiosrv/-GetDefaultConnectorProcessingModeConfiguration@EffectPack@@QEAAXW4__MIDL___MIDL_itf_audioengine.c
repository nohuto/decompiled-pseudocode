/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060678 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E974 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF6C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029DE8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

void __fastcall EffectPack::GetDefaultConnectorProcessingModeConfiguration(
        EffectPack *this,
        int a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  GUID v6; // xmm6
  GUID v10; // xmm7
  int IsAPOModeSupported; // eax
  GUID *v12; // rcx
  GUID v13; // [rsp+20h] [rbp-88h] BYREF
  GUID v14; // [rsp+30h] [rbp-78h] BYREF

  v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v10 = *EffectPack::GetDefaultConnectorProcessingModeInternal(this, &v13, a2, 0);
  v14 = v10;
  if ( a4 )
  {
    v13 = v10;
    IsAPOModeSupported = EffectPack::IsAPOModeSupported((__int64)this, 0, (__int128 *)&v13, a2);
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
