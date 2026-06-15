/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D2B14
 * Callers:
 *     _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$10 @ 0x18006D330 (_CEndpointStoreCache--ForEachEndpoint_--_1_--dtor$10.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$70 @ 0x18006EAA0 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$70.c)
 *     _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$28 @ 0x1800D34AF (_AudioEffectsWatcherFactory--GetWatcher_--_1_--dtor$28.c)
 *     _CAudioSession::AddDuckingManagerGainStage_::_1_::dtor$4 @ 0x1800D66D8 (_CAudioSession--AddDuckingManagerGainStage_--_1_--dtor$4.c)
 *     _std::_Flist_insert_after_op2_std::allocator_std::_Flist_node_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__void_______::_Append_range_unchecked_std::_Flist_unchecked_const_iterator_std::_Flist_val_std::_Flist_simple_types_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy______std::_Iterator_base0__std::_Default_sentinel__::_1_::dtor$0 @ 0x180112FDA (_std--_Flist_insert_after_op2_std--allocator_std--_Flist_node_wil--com_ptr_t_CEndpointStore_wil-.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$23 @ 0x18011591F (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$23.c)
 *     _CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$25 @ 0x18011592B (_CBtAudioResourceManager--FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups_--_1_--dtor$25.c)
 *     _CBtAudioResourceManagerCache::GetBtAudioResourceManager_::_1_::dtor$35 @ 0x180115C5E (_CBtAudioResourceManagerCache--GetBtAudioResourceManager_--_1_--dtor$35.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$37 @ 0x180117509 (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$37.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
