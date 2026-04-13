/*
 * XREFs of atexit @ 0x180022964
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180004100 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for__classic_locale__ @ 0x180004130 (std--_dynamic_initializer_for__classic_locale__.c)
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180004150 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180004170 (std--_dynamic_initializer_for__initlocks___0.c)
 *     _dynamic_atexit_destructor_for__init_atexit__ @ 0x1800041A0 (_dynamic_atexit_destructor_for__init_atexit__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Generic_object__ @ 0x1800041C0 (_dynamic_initializer_for__std--_Error_objects_int_--_Generic_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_Iostream_object__ @ 0x1800041E0 (_dynamic_initializer_for__std--_Error_objects_int_--_Iostream_object__.c)
 *     _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180004200 (_dynamic_initializer_for__std--_Error_objects_int_--_System_object__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180004220 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180004240 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180004260 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1800044A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800044C0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800044E0 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings__ @ 0x180004580 (ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings__.c)
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x1800045A0 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     _dynamic_initializer_for__ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak__ @ 0x1800045D0 (_dynamic_initializer_for__ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl-.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping__ @ 0x180004640 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerStateTransition.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap__ @ 0x180004660 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicateKindHandlerMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap__ @ 0x180004680 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_registerTaskHandlerMap.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap__ @ 0x1800046A0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerPredicateKindMa.c)
 *     Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerTypeTaskHandlerMap__ @ 0x1800046C0 (Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerTypeTaskHandler.c)
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x1800046E0 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     _dynamic_initializer_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x180004710 (_dynamic_initializer_for__UniqueExtendedExecutionSession--s_weakSharedExtendedExecutionSession__.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x180037C10 (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AXXZ@Z @ 0x180043BC0 (-get@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAAPEAVDelayAllocateTLSLogging@@P6AX.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180043C60 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPEAVMobilityExperienceLogging@Telemetry@MobilityExperience@@P6AXXZ@Z @ 0x180043D00 (-get@-$static_lazy@VMobilityExperienceLogging@Telemetry@MobilityExperience@@@details@wil@@QEAAPE.c)
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x180043DA0 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180049250 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 *     ?get@?$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerLogging@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x18004B9D8 (-get@-$static_lazy@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@@details@wi.c)
 *     ?get@?$static_lazy@VShellPlacementLogging@Logging@CreativeFramework@@@details@wil@@QEAAPEAVShellPlacementLogging@Logging@CreativeFramework@@P6AXXZ@Z @ 0x18006475C (-get@-$static_lazy@VShellPlacementLogging@Logging@CreativeFramework@@@details@wil@@QEAAPEAVShell.c)
 *     ?get@?$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z @ 0x1800A7F98 (-get@-$static_lazy@VCDMUtilsUnlockLogging@@@details@wil@@QEAAPEAVCDMUtilsUnlockLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit_0 @ 0x1800228C4 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
