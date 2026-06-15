/*
 * XREFs of ??1?$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DF138
 * Callers:
 *     __lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator()_::_1_::dtor$1 @ 0x180065BF2 (__lambda_9f1ed336c6f1042f8318a1cd576b00ef_--operator()_--_1_--dtor$1.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$3 @ 0x180071BE0 (_CAudioResourceManager--DestroyStream_--_1_--dtor$3.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$1 @ 0x180072100 (_AtmosCheck--AtmosCheck_--_1_--dtor$1.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$5 @ 0x1800E037D (_CAudioSessionManager--Disconnect_--_1_--dtor$5.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::dtor$0 @ 0x1800F9BE1 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$0 @ 0x1800F9E4C (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$0.c)
 *     __lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator()_::_1_::dtor$1 @ 0x1800FC1F8 (__lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator()_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$3 @ 0x1800FC6E8 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$3 @ 0x1800FC9B6 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$3.c)
 *     _CDeviceGraphObjectsStore::GetOffloadStreamGroups_::_1_::dtor$3 @ 0x1800FCD8B (_CDeviceGraphObjectsStore--GetOffloadStreamGroups_--_1_--dtor$3.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$1 @ 0x1801024BD (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::MoveDisplacedA2dpStreamGroupsToSaDevice_::_1_::dtor$1 @ 0x180116B57 (_CBtAudioResourceManager--MoveDisplacedA2dpStreamGroupsToSaDevice_--_1_--dtor$1.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$3 @ 0x1801174CD (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$3.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$10 @ 0x18011752D (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(a1);
}
