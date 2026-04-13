/*
 * XREFs of ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004E9C4
 * Callers:
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CC6C (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CD70 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CD70.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CE74 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CE74.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18004CF78 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180055EC4 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<1,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
         v6,
         a2);
  CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(a1, v4);
  v5 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
