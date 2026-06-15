/*
 * XREFs of atexit @ 0x180016DF8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001E70 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001F90 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180002040 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180002080 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180002190 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800021D0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002210 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180002240 (_dynamic_initializer_for__TsSessionList__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180002270 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180002290 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800022B0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800022D0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x1800022F0 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180002310 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180016F20 (__scrt_initialize_thread_safe_statics.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180046068 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     _onexit @ 0x180016DB8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
