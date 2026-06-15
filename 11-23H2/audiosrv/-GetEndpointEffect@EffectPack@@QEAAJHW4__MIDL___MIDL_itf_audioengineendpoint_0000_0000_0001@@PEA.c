/*
 * XREFs of ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0C4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014C44C (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CF18 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014CFC8 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180029E80 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18002C594 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

__int64 __fastcall EffectPack::GetEndpointEffect(
        EffectPack *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  GUID v13; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0;
  v8 = a3;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    if ( a2
      || (v10 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 148, v8),
          v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3,
          SystemEffectDescriptor::IsModeSupportedForStreaming(v10, (__int128 *)&v13, 1))
      && *(_DWORD *)(EffectPack::GetSupportedConnectorModesInternal(this, v8, 0, 0) + 8) <= 1u )
    {
      v11 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 148, v8);
      v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             v11,
                             3u,
                             1,
                             (__int128 *)&v13,
                             a2,
                             0,
                             v8,
                             (__int64 *)a4,
                             (__int64 *)a5,
                             (__int64 *)a6);
    }
  }
  return v6;
}
