/*
 * XREFs of atexit @ 0x180022154
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180003A40 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x180003A70 (std--_dynamic_initializer_for__classic_locale__.c)
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180003A90 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180003AB0 (std--_dynamic_initializer_for__initlocks___0.c)
 *     _dynamic_atexit_destructor_for__init_atexit__ @ 0x180003AE0 (_dynamic_atexit_destructor_for__init_atexit__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x180003B00 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x180003B20 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180003B40 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180003B60 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180003B80 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003BA0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180003DF0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180003E10 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x180003E30 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings__ @ 0x180003EF0 (ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings__.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x180003F10 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x180003F40 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping__ @ 0x180003FB0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransition.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap__ @ 0x180003FD0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap__ @ 0x180003FF0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMap.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap__ @ 0x180004010 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap__ @ 0x180004030 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerTypeTaskHandler.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180004050 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     _dynamic_initializer_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x180004080 (_dynamic_initializer_for__UniqueExtendedExecutionSession--s_weakSharedExtendedExecutionSession__.c)
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x18002403C (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 *     ??$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z @ 0x180025DD8 (--$TaskbarOutOfSpaceForPin@AEBQEBG@TaskbarContentDeliveryPinningTelemetry@@SAXAEBQEBG@Z.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18003A288 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C030 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C0DC (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18004DBB0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x18004F2FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x1800627C8 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B63B4 (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     _onexit_0 @ 0x1800220B4 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
