/*
 * XREFs of ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004A948
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800154C4 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180029E80 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 */

__int64 __fastcall EffectPack::GetRawModePostMixEffect(
        EffectPack *this,
        __int64 a2,
        __int32 a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5)
{
  unsigned int v5; // ebx
  GUID v10; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(
                       this,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3) )
  {
    v10 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( SystemEffectDescriptor::IsModeSupportedForStreaming((__int64)this + 1648, (__int128 *)&v10, 1) )
    {
      v10 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             (__int64)this + 1648,
                             2u,
                             1,
                             (__int128 *)&v10,
                             0,
                             0,
                             a3,
                             (__int64 *)a4,
                             (__int64 *)a5,
                             0LL);
    }
  }
  return v5;
}
