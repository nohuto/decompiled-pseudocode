/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D5738
 * Callers:
 *     _std::_Flist_insert_after_op2_std::allocator_std::_Flist_node_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__void_______::_Append_range_unchecked_std::_Flist_unchecked_const_iterator_std::_Flist_val_std::_Flist_simple_types_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy______std::_Iterator_base0__std::_Default_sentinel__::_1_::dtor$0 @ 0x18007A517 (_std--_Flist_insert_after_op2_std--allocator_std--_Flist_node_wil--com_ptr_t_CEndpointStore_wil-.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$69 @ 0x18007A750 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$69.c)
 *     _CCustomAudioEndpointResourceManagerCache::TryGetResourceManagerService_::_1_::dtor$23 @ 0x18007C51B (_CCustomAudioEndpointResourceManagerCache--TryGetResourceManagerService_--_1_--dtor$23.c)
 *     _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$28 @ 0x1800D6021 (_AudioEffectsWatcherFactory--GetWatcher_--_1_--dtor$28.c)
 *     _CAudioSession::AddDuckingManagerGainStage_::_1_::dtor$4 @ 0x1800DF0D2 (_CAudioSession--AddDuckingManagerGainStage_--_1_--dtor$4.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$23 @ 0x1800F7E43 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E43.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$25 @ 0x1800F7E4F (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1800F7E4F.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$37 @ 0x1800FA7BB (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$37.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$23 @ 0x1800FCFE6 (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$23.c)
 *     _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$25 @ 0x1800FCFF2 (_CBtLeAudioResourceManager--ReleaseSaDevices_--_1_--dtor$25.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
