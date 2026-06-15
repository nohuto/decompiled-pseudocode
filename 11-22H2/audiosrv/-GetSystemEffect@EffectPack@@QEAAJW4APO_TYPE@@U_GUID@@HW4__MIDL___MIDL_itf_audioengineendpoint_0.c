/*
 * XREFs of ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CF68
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D681C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 */

__int64 __fastcall EffectPack::GetSystemEffect(
        EffectPack *a1,
        int a2,
        struct _GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct IAudioSystemEffects2 **a8)
{
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF

  switch ( a2 )
  {
    case 1:
      v9 = *a3;
      return EffectPack::GetStreamEffect(a1, &v9, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    case 2:
      v9 = *a3;
      return EffectPack::GetModeEffect(a1, &v9, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    case 3:
      return EffectPack::GetEndpointEffect(a1, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    default:
      if ( a8 )
        *a8 = 0LL;
      return 2147942487LL;
  }
}
