/*
 * XREFs of ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x18002B3B8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800FFFEF (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$16.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$19 @ 0x180100013 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$19.c)
 *     ?CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x180113BC4 (-CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharac.c)
 *     _CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x180113CD4 (_CBtAudioResourceManager--CreateA2dpRenderSaDeviceWithDefaultParameters_--_1_--dtor$0.c)
 *     ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0 (-CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProx.c)
 *     _CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x180114297 (_CBtAudioResourceManager--CreateHfpRenderSaDeviceWithDefaultParameters_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$6 @ 0x18011594F (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$6.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
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
