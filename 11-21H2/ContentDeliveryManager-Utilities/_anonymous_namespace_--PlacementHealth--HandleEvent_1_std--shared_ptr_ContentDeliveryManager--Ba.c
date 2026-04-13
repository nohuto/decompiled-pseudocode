/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x1800526D8
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052258 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800523D8 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_1800523D8.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052558 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180052558.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005B438 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005F0BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     _anonymous_namespace_::StartsWith @ 0x180065AE4 (_anonymous_namespace_--StartsWith.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(
        _WORD *Src,
        CreativeFramework::Health::details::BaseScenarioEvents *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int128 v17; // [rsp+38h] [rbp-71h] BYREF
  __int128 v18; // [rsp+48h] [rbp-61h] BYREF
  __int128 v19; // [rsp+58h] [rbp-51h] BYREF
  __int128 v20; // [rsp+68h] [rbp-41h] BYREF
  __int128 v21; // [rsp+78h] [rbp-31h] BYREF
  __int128 *v22; // [rsp+88h] [rbp-21h]
  CreativeFramework::Health::details::BaseScenarioEvents *v23[4]; // [rsp+90h] [rbp-19h] BYREF
  void *v24[3]; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 v25; // [rsp+C8h] [rbp+1Fh]

  v23[2] = a2;
  v4 = -1LL;
  if ( CompareStringOrdinal(Src, -1, L"LockScreen", -1, 1) == 2 )
  {
    v17 = 0LL;
    v5 = *((_QWORD *)a2 + 1);
    v6 = *(_QWORD *)a2;
    if ( v5 )
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v17, v6);
    CreativeFramework::Health::details::OffersHealthTracker<1,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>((CreativeFramework::Health::details::BaseScenarioEvents *)&v17);
  }
  else if ( CompareStringOrdinal(Src, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    v17 = 0LL;
    v7 = *((_QWORD *)a2 + 1);
    v8 = *(_QWORD *)a2;
    if ( v7 )
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v17, v8);
    CreativeFramework::Health::details::OffersHealthTracker<2,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>((CreativeFramework::Health::details::BaseScenarioEvents *)&v17);
  }
  else if ( CompareStringOrdinal(Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    v17 = 0LL;
    v9 = *((_QWORD *)a2 + 1);
    v10 = *(_QWORD *)a2;
    if ( v9 )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v17, v10);
    CreativeFramework::Health::details::OffersHealthTracker<3,1>::HandleEvent<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>((CreativeFramework::Health::details::BaseScenarioEvents *)&v17);
  }
  else if ( (unsigned __int8)anonymous_namespace_::StartsWith(Src) )
  {
    v20 = 0LL;
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(_QWORD *)a2;
    if ( v11 )
      _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v20, v12);
    v23[3] = (CreativeFramework::Health::details::BaseScenarioEvents *)&v20;
    v25 = 7LL;
    v24[2] = 0LL;
    LOWORD(v24[0]) = 0;
    if ( *Src )
    {
      do
        ++v4;
      while ( Src[v4] );
    }
    std::wstring::assign(v24, Src);
    v19 = 0LL;
    v13 = v20;
    if ( *((_QWORD *)&v20 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v19, v13);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(v23, v24);
    v18 = 0LL;
    v14 = v19;
    if ( *((_QWORD *)&v19 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v18, v14);
    v22 = &v18;
    v21 = 0LL;
    v15 = v18;
    if ( *((_QWORD *)&v18 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 1u);
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v21, v15);
    CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(v23[0]);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v18);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v23);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v19);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(&v20);
    if ( v25 >= 8 )
      operator delete(v24[0]);
  }
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2);
}
