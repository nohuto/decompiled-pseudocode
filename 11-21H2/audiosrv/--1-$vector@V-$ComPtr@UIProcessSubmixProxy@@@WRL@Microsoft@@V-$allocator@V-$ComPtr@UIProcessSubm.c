/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800ED980
 * Callers:
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x18006FA44 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18006FA68 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x180070320 (_UseSupportedConnectorMode_--_1_--dtor$2.c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$0 @ 0x1800FC0C1 (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$0.c)
 *     __lambda_b2b2edcacba8310f83e1be2040a50861_::operator()_::_1_::dtor$2 @ 0x1800FC0D9 (__lambda_b2b2edcacba8310f83e1be2040a50861_--operator()_--_1_--dtor$2.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x18010044F (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x1801013E4 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::DoExclusiveModeA2dpSaDevicesExist_::_1_::dtor$0 @ 0x180114F91 (_CBtAudioResourceManager--DoExclusiveModeA2dpSaDevicesExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::DoHfpRenderStreamGroupsExist_::_1_::dtor$0 @ 0x18011517C (_CBtAudioResourceManager--DoHfpRenderStreamGroupsExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::DoHfpSharedModeRenderSaDevicesExist_::_1_::dtor$0 @ 0x1801152C9 (_CBtAudioResourceManager--DoHfpSharedModeRenderSaDevicesExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::DoMicrophoneSaDevicesExist_::_1_::dtor$0 @ 0x18011537F (_CBtAudioResourceManager--DoMicrophoneSaDevicesExist_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$2 @ 0x180115913 (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$6 @ 0x1801174F1 (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
