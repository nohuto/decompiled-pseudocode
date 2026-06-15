/*
 * XREFs of ??1?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAA@XZ @ 0x18012A594
 * Callers:
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x180078346 (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$6 @ 0x18007DAAF (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
