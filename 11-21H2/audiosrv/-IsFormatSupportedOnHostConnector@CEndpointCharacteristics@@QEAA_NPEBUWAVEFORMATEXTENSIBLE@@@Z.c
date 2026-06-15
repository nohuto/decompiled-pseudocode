/*
 * XREFs of ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540C0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180148CC0 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18014A3D4 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 */

char __fastcall CEndpointCharacteristics::IsFormatSupportedOnHostConnector(
        CEndpointCharacteristics *this,
        const struct WAVEFORMATEXTENSIBLE *a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // r8d
  struct _GUID v6; // [rsp+50h] [rbp-18h] BYREF

  if ( IsCompressedSpatialFormat(&a2->Format) )
    return CEndpointCharacteristics::IsCompressedFormatSupported(this, &a2->SubFormat);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v6, v4);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                (__int64)this,
                0,
                &a2->Format,
                (__int128 *)&v6,
                0,
                0LL,
                0LL,
                0LL,
                0LL) >= 0;
}
