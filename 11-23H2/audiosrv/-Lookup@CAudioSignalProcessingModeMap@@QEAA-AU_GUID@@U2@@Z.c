/*
 * XREFs of ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180054774
 * Callers:
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18000E418 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18000E580 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000E654 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0F78 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

struct _GUID *__fastcall CAudioSignalProcessingModeMap::Lookup(
        CAudioSignalProcessingModeMap *this,
        struct _GUID *__return_ptr retstr,
        struct _GUID *a3)
{
  int Key; // eax
  unsigned int v5; // edx
  GUID *v6; // r11
  GUID v7; // xmm0

  Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey((__int64 *)this, a3);
  if ( Key == -1 )
  {
    v7 = GUID_00000000_0000_0000_0000_000000000000;
  }
  else
  {
    if ( Key < 0 || Key >= *((_DWORD *)this + 4) )
    {
      ATL::_AtlRaiseException(0xC000008C, v5);
      JUMPOUT(0x1800547C5LL);
    }
    v7 = *(GUID *)(*((_QWORD *)this + 1) + 16LL * Key);
  }
  *v6 = v7;
  return v6;
}
