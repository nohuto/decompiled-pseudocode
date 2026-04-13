/*
 * XREFs of ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F7CC
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x1800900AC (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18009379C (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180096090 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ??0?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@AEBU01@@Z @ 0x18009AF50 (--0-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ??4?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009B3CC (--4-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_2547995382f4e95e159e6de1c858c05c_::operator() @ 0x18009B528 (_lambda_2547995382f4e95e159e6de1c858c05c_--operator().c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18009BC88 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009C698 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18009CE70 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x18009DD88 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E2DC (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18009F04C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x180096A38 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 */

_QWORD *__fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>(
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
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, v4);
  return a1;
}
