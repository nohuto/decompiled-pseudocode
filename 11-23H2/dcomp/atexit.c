/*
 * XREFs of atexit @ 0x1800961FC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001490 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800014C0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001630 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001650 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__DirectComposition::CDelegatedInkTrailCookieTracker::s_trackers__ @ 0x180001670 (_dynamic_initializer_for__DirectComposition--CDelegatedInkTrailCookieTracker--s_trackers__.c)
 *     _dynamic_initializer_for__DirectComposition::CProxyTable::s_csProxyTableCreation__ @ 0x1800016B0 (_dynamic_initializer_for__DirectComposition--CProxyTable--s_csProxyTableCreation__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x1800016E0 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001720 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland__ @ 0x180001750 (_dynamic_initializer_for__Windows--UI--Composition--CompositionIsland--s_mapWeakPeerToWeakIsland.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite__ @ 0x180001780 (_dynamic_initializer_for__Windows--UI--Composition--CompositionIsland--s_mapWeakPee_ea_180001780.c)
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionIsland::s_sharedLock__ @ 0x1800017B0 (_dynamic_atexit_destructor_for__Windows--UI--Composition--CompositionIsland--s_sharedLock__.c)
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::CompositorCommon::s_lockCompositors__ @ 0x1800017D0 (_dynamic_atexit_destructor_for__Windows--UI--Composition--CompositorCommon--s_lockCompositors__.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::Diagnostics::CompositionDebugSettingsFactory::s_debugSettingsMap__ @ 0x1800017F0 (_dynamic_initializer_for__Windows--UI--Composition--Diagnostics--CompositionDebugSettingsFactory.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__ @ 0x180001820 (_dynamic_initializer_for__Windows--UI--Composition--CompositionCapabilities--s_capabilitiesLock_.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilitiesRegistration::s_eventSourceMap__ @ 0x180001850 (_dynamic_initializer_for__Windows--UI--Composition--CompositionCapabilitiesRegistration--s_event.c)
 *     _dynamic_atexit_destructor_for__Windows::UI::Composition::CoreHelper::s_lock__ @ 0x180001880 (_dynamic_atexit_destructor_for__Windows--UI--Composition--CoreHelper--s_lock__.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::PropertyValueHelper::s_propertyValueFactory__ @ 0x1800018C0 (_dynamic_initializer_for__Windows--UI--Composition--PropertyValueHelper--s_propertyValueFactory_.c)
 *     _dynamic_initializer_for__Windows::UI::Composition::ExpressionAnimationParser::s_spFunctionParser__ @ 0x1800018E0 (_dynamic_initializer_for__Windows--UI--Composition--ExpressionAnimationParser--s_spFunctionParse.c)
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x180001930 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180084734 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180096220 (__scrt_initialize_thread_safe_statics.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18009A10C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     ?Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ @ 0x18016C57C (-Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ.c)
 * Callees:
 *     _onexit @ 0x1800961BC (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
