/*
 * XREFs of ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800DF298
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x18006FA92 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x1800E034D (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     __lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()_::_1_::dtor$0 @ 0x1800F7C8C (__lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator()_--_1_--dtor$0.c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$1 @ 0x1800FC0CD (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$1.c)
 *     __lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator()_::_1_::dtor$0 @ 0x1800FE6B1 (__lambda_51b537ae7010953ae74a8f2f5f133c3e_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$0 @ 0x180100108 (_CAudioResourceManager--DisconnectOffloadStreams_--_1_--dtor$0.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$2 @ 0x18010045B (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$6 @ 0x180101414 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$6.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x18010206C (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::DoHfpRenderStreamGroupsExist_::_1_::dtor$1 @ 0x180115188 (_CBtAudioResourceManager--DoHfpRenderStreamGroupsExist_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$3 @ 0x180115937 (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$3.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$5 @ 0x180115943 (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$5.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$7 @ 0x1801174FD (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(
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
