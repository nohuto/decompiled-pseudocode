/*
 * XREFs of atexit @ 0x180002AA8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001CC0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001CE0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x180001D00 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001D20 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001D80 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001DA0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001DE0 (_dynamic_initializer_for__TsSessionList__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180001E80 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001F00 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001F50 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001F70 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001FA0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180002BD0 (__scrt_initialize_thread_safe_statics.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18004006C (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     _onexit @ 0x180002A68 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
