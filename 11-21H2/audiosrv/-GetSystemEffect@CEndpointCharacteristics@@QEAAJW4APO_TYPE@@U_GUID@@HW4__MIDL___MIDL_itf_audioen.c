/*
 * XREFs of ?GetSystemEffect@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149EC8
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D403C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180148D80 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1801490E0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149B64 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSystemEffect(
        CEndpointCharacteristics *a1,
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
      return CEndpointCharacteristics::GetStreamEffect(a1, &v9, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    case 2:
      v9 = *a3;
      return CEndpointCharacteristics::GetModeEffect(a1, &v9, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    case 3:
      return CEndpointCharacteristics::GetEndpointEffect(a1, 1u, eHostProcessConnector, 0LL, 0LL, a8);
    default:
      if ( a8 )
        *a8 = 0LL;
      return 2147942487LL;
  }
}
