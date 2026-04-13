/*
 * XREFs of ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x18004C834 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CCBC (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CDC0 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CDC0.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004CEC4 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_18004CEC4.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18004CFC8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004EA14 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18005B880 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     _lambda_5773ffaa2db481c158d119d5445c3ad2_::operator() @ 0x180090578 (_lambda_5773ffaa2db481c158d119d5445c3ad2_--operator().c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180091F30 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180093380 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180093560 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18009379C (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180095C80 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x180095E70 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096090 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800987B0 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800989C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180099398 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ??$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@std@@YA?AV?$shared_ptr@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@0@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@@Z @ 0x1800A1658 (--$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV-$shared_ptr@VCor.c)
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800D2858 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800D2D28 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800D3374 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x180062534 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 */

_QWORD *__fastcall std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(a1, v4, v3);
  return a1;
}
