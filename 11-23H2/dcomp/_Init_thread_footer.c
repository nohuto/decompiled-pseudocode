/*
 * XREFs of _Init_thread_footer @ 0x180096330
 * Callers:
 *     ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z @ 0x1800844B8 (-SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z.c)
 *     ?SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundation@4@@Z @ 0x180088240 (-SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundati.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     ?SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x1800B5C70 (-SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Founda.c)
 *     ?SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x18010C2C8 (-SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@.c)
 *     ?Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ @ 0x18016C57C (-Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
