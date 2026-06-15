/*
 * XREFs of ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000BF30 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000ED90 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGrap.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18000F110 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800186B0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D5CD8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A40 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8700 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800F77A0 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtLeAudioResourceManager@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800FC9F8 (-ReleaseSaDevices@CBtLeAudioResourceManager@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDispla.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x18010685C (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x180108FE0 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1801096EC (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x18010A7E0 (-UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D120 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D2AC (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0LL;
  v3 = *v1;
  *v1 = 0LL;
  v5 = v3;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  return *a1;
}
