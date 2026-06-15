/*
 * XREFs of ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50
 * Callers:
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005690C (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1BC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18011646C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014C49C (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CF68 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014D018 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029DE8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

__int64 __fastcall EffectPack::GetModeEffect(
        EffectPack *this,
        struct _GUID *a2,
        unsigned int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // rbp
  BOOL v12; // ebx
  __int64 v13; // rax
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a4) )
  {
    if ( a3 || (v15 = (__int128)*a2, (unsigned int)EffectPack::IsAPOModeSupported((__int64)this, 0, &v15, v8)) )
    {
      v15 = (__int128)*a2;
      v12 = EffectPack::IsConnectorModeSupported(this, v8, 0, (__int64)&v15) != 0;
      v13 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 146, v8);
      v15 = (__int128)*a2;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             v13,
                             2u,
                             v12,
                             &v15,
                             a3,
                             0,
                             v8,
                             (__int64 *)a5,
                             (__int64 *)a6,
                             (__int64 *)a7);
    }
  }
  return v7;
}
