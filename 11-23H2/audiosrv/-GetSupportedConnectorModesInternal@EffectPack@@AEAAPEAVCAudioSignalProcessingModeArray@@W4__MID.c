/*
 * XREFs of ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18002C594
 * Callers:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800049A8 (-GetDefaultConnectorProcessingModeForSpatialStream@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003158C (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEB.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048168 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetConnectorProcessingMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x180065A5C (-GetConnectorProcessingMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     _lambda_abb61ebb95f9f74c760f57157f67c392_::operator() @ 0x180074E28 (_lambda_abb61ebb95f9f74c760f57157f67c392_--operator().c)
 *     ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014C3DC (-GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033DE4 (-ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 */

__int64 __fastcall EffectPack::GetSupportedConnectorModesInternal(EffectPack *a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  CEndpointCharacteristics *v8; // rcx

  v4 = a2;
  if ( !a2 )
  {
    v8 = (CEndpointCharacteristics *)*((_QWORD *)a1 + 161);
    if ( !*((_BYTE *)v8 + 8235) && !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v8) && a3 != 1 )
      return (__int64)a1 + 1632;
  }
  if ( !a4 )
    EffectPack::ResolveAllOverridingChains(a1, (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4);
  return gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)a1 + 1392, v4);
}
