/*
 * XREFs of ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180004928 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18000DE94 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x18000E104 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioe_ea_18000E104.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003158C (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEB.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC70 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x1800F7EA0 (-GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristi.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F801C (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F86F8 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x1800F9650 (-IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_A.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1801140B4 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180121AD0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1801229E0 (AudioServerGetSharedModeEnginePeriod.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18014AC48 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18000E418 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 */

__int64 __fastcall EffectPack::GetSharedModeEnginePeriodicity(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v10 = 3LL;
  if ( a2 != 3 )
    v10 = 0LL;
  v14 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 1536, v10);
  v15 = *(_QWORD *)(a1 + 1288);
  v17 = *a4;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64, int, __int64, __int64, __int64, __int64))CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode)(
           v15,
           a2,
           a3,
           &v17,
           v14,
           a5,
           a6,
           a7,
           a8,
           a9);
}
