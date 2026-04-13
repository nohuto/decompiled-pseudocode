/*
 * XREFs of ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052258
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x1800526D8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005B438 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005EED8 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18006C3DC (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
        CreativeFramework::Health::details::BaseScenarioEvents *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-49h] BYREF
  __int128 v9; // [rsp+30h] [rbp-39h] BYREF
  __int128 v10; // [rsp+40h] [rbp-29h] BYREF
  __int128 v11; // [rsp+50h] [rbp-19h] BYREF
  __int128 *v12; // [rsp+60h] [rbp-9h]
  __int128 *v13; // [rsp+68h] [rbp-1h]
  __int128 *v14; // [rsp+70h] [rbp+7h]
  CreativeFramework::Health::details::BaseScenarioEvents *v15[3]; // [rsp+78h] [rbp+Fh] BYREF
  void *v16[3]; // [rsp+90h] [rbp+27h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+3Fh]

  v15[2] = a1;
  std::to_wstring(v16);
  v10 = 0LL;
  v2 = *((_QWORD *)a1 + 1);
  v3 = *(_QWORD *)a1;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v10, v3);
  v12 = &v10;
  v9 = 0LL;
  v4 = v10;
  if ( *((_QWORD *)&v10 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v9, v4);
  v13 = &v9;
  CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(v15, v16);
  v8 = 0LL;
  v5 = v9;
  if ( *((_QWORD *)&v9 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v8, v5);
  v14 = &v8;
  v11 = 0LL;
  v6 = v8;
  if ( *((_QWORD *)&v8 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v11, v6);
  CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(v15[0]);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v8);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v15);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v9);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v10);
  if ( v17 >= 8 )
    operator delete(v16[0]);
  v17 = 7LL;
  v16[2] = 0LL;
  LOWORD(v16[0]) = 0;
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a1);
}
