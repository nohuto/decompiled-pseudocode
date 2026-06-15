/*
 * XREFs of ??1?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAA@XZ @ 0x1800CFB5C
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x180072533 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800D0171 (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::~vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
