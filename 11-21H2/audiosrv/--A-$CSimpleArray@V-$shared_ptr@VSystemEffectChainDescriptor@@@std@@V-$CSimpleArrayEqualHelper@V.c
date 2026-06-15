/*
 * XREFs of ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002C3F0 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002EC80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18002FEE0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180030430 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180032E20 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18005178C (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18014FD28 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    __debugbreak();
  }
  return *(_QWORD *)a1 + 16LL * a2;
}
