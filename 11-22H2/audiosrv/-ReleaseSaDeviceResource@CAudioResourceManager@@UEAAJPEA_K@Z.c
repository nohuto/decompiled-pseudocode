/*
 * XREFs of ?ReleaseSaDeviceResource@CAudioResourceManager@@UEAAJPEA_K@Z @ 0x18004B4D0
 * Callers:
 *     wil::details::lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___::_lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___ @ 0x18006B088 (wil--details--lambda_call__lambda_b7df69669159a99ed8745bd0cd0c9065___--_lambda_call__lambda_b7df.c)
 *     _lambda_52036531a809c6efb737b3592d012028_::operator() @ 0x18006B250 (_lambda_52036531a809c6efb737b3592d012028_--operator().c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReleaseSaDeviceResource(CAudioResourceManager *this, unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 5) + 80LL))(
           *((_QWORD *)this + 5),
           a2);
}
