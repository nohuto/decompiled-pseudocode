/*
 * XREFs of ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180004928
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003158C (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEB.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800049A8 (-GetDefaultConnectorProcessingModeForSpatialStream@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800321B8 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsCompressedFormatSupported@EffectPack@@AEAA_NAEBU_GUID@@@Z @ 0x18014D34C (-IsCompressedFormatSupported@EffectPack@@AEAA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall EffectPack::IsFormatSupportedOnHostConnector(EffectPack *this, const struct WAVEFORMATEXTENSIBLE *a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // r8d
  struct _GUID v6; // [rsp+50h] [rbp-18h] BYREF

  if ( IsCompressedSpatialFormat(&a2->Format) )
    return EffectPack::IsCompressedFormatSupported(this, &a2->SubFormat);
  EffectPack::GetDefaultConnectorProcessingModeForSpatialStream(this, &v6, v4);
  return (int)EffectPack::GetSharedModeEnginePeriodicity(this, 0LL, a2, &v6, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
