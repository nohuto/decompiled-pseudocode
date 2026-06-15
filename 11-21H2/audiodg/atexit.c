/*
 * XREFs of atexit @ 0x14002FBF8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1400010D0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1400010F0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001110 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x140001140 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140001160 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001180 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_csMapVpoContext__ @ 0x140001200 (_dynamic_initializer_for__CVpoContext--s_csMapVpoContext__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001240 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140001260 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001280 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x1400012C0 (_dynamic_atexit_destructor_for__g_AudioHistoryManager__.c)
 *     _dynamic_initializer_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x1400012E0 (_dynamic_initializer_for__CAudioPump--s_AudioPumpTimerResolutionCountLock__.c)
 *     _dynamic_initializer_for__gRTThreadManager__ @ 0x140001320 (_dynamic_initializer_for__gRTThreadManager__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001340 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x140001370 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400013C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400013F0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001420 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001450 (_dynamic_initializer_for__gEventList__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001470 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001550 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140001580 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x1400088E4 (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140020CE8 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     pre_c_initialization @ 0x14002F2C0 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14002FD90 (__scrt_initialize_thread_safe_statics.c)
 *     ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x1400678F4 (-get@-$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessin.c)
 * Callees:
 *     _onexit @ 0x14002FBB8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
