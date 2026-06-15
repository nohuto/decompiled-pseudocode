/*
 * XREFs of ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180045580
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$15 @ 0x1800DA952 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$15.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x1800DA976 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$18.c)
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F5FE0 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 *     _CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x1800F60FE (_CBtAudioResourceManagerBase--CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_--_1_--dto.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7050 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x1800F7237 (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_1800F7237.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$6 @ 0x1800F7E73 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E73.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$6 @ 0x1800FD016 (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$6.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(SaDeviceParams **a1, unsigned int a2)
{
  SaDeviceParams *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return SaDeviceParams::`scalar deleting destructor'(v2, a2);
  return result;
}
