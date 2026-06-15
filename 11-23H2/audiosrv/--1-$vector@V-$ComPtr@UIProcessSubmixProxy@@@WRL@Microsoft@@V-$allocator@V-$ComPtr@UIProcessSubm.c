/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8720
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x180048B18 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x18007BCD0 (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$15 @ 0x18007BE10 (_CAudioSessionManager--Disconnect_--_1_--dtor$15.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$16 @ 0x18007BE30 (_CAudioSessionManager--Disconnect_--_1_--dtor$16.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$6 @ 0x18007C440 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$6.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x18007C5D8 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18007C5EA (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$2 @ 0x18007DB64 (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$2.c)
 *     __lambda_f0b6db72f90930fb0e220606623a5dd0_::operator()_::_1_::dtor$0 @ 0x1800D8AED (__lambda_f0b6db72f90930fb0e220606623a5dd0_--operator()_--_1_--dtor$0.c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800DA990 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$0 @ 0x1800DAA6F (_CAudioResourceManager--DisconnectOffloadStreams_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x1800DC45E (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$6 @ 0x1800DC48E (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$6.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800DC5D0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1800DD2C6 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 *     ?DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7214 (-DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointSto.c)
 *     _CBtAudioResourceManagerBase::DoExclusiveModePrimaryProfileSaDevicesExist_::_1_::dtor$0 @ 0x1800F7348 (_CBtAudioResourceManagerBase--DoExclusiveModePrimaryProfileSaDevicesExist_--_1_--dtor$0.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F735C (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 *     _CBtAudioResourceManagerBase::DoMicrophoneSaDevicesExist_::_1_::dtor$0 @ 0x1800F7404 (_CBtAudioResourceManagerBase--DoMicrophoneSaDevicesExist_--_1_--dtor$0.c)
 *     ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7418 (-DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore.c)
 *     _CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist_::_1_::dtor$0 @ 0x1800F7621 (_CBtAudioResourceManagerBase--DoSecondaryProfileRenderStreamGroupsExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist_::_1_::dtor$1 @ 0x1800F762D (_CBtAudioResourceManagerBase--DoSecondaryProfileRenderStreamGroupsExist_--_1_--dtor$1.c)
 *     ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7640 (-DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpoi.c)
 *     _CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist_::_1_::dtor$0 @ 0x1800F778B (_CBtAudioResourceManagerBase--DoSecondaryProfileSharedModeRenderSaDevicesExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$2 @ 0x1800F7DE7 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7DE7.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$3 @ 0x1800F7E0B (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E0B.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$5 @ 0x1800F7E17 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E17.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$6 @ 0x1800FA753 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$7 @ 0x1800FA75F (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$7.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$2 @ 0x1800FCF8A (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$2.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$3 @ 0x1800FCFAE (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$3.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$5 @ 0x1800FCFBA (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$5.c)
 *     __lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()_::_1_::dtor$0 @ 0x1801051DC (__lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator()_--_1_--dtor$0.c)
 *     _lambda_b2b2edcacba8310f83e1be2040a50861_::operator() @ 0x18010B37C (_lambda_b2b2edcacba8310f83e1be2040a50861_--operator().c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$0 @ 0x18010B69A (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$0.c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$1 @ 0x18010B6A6 (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$1.c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$2 @ 0x18010B6B2 (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$2.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
