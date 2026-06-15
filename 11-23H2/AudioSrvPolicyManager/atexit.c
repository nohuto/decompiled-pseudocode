/*
 * XREFs of atexit @ 0x180016C08
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001E70 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001F90 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001FF0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180002030 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180002180 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800021C0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180002200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180002230 (_dynamic_initializer_for__TsSessionList__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180002260 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180002280 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800022A0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x1800022C0 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800022E0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011530 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180016D30 (__scrt_initialize_thread_safe_statics.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180044BD8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     _onexit @ 0x180016BC8 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
