/*
 * XREFs of ?IsSFXModeSupported@EffectPack@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180055EC8
 * Callers:
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 * Callees:
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180029E80 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

bool __fastcall EffectPack::IsSFXModeSupported(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3)
{
  __int64 v6; // rbp
  BOOL v7; // eax
  int v8; // r8d
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 144, a2);
  v7 = CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)this + 161));
  v8 = 0;
  if ( v7 || a2 == eKeywordDetectorConnector )
    v8 = 1;
  v10 = (__int128)*a3;
  return SystemEffectDescriptor::IsModeSupportedForStreaming(v6, &v10, v8);
}
