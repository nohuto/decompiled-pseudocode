/*
 * XREFs of _Init_thread_header @ 0x180096398
 * Callers:
 *     ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z @ 0x1800844B8 (-SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z.c)
 *     ?SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundation@4@@Z @ 0x180088240 (-SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundati.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 *     ?SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x1800B5C70 (-SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Founda.c)
 *     ?SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x18010C2C8 (-SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@.c)
 *     ?Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ @ 0x18016C57C (-Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ.c)
 * Callees:
 *     _Init_thread_wait @ 0x18009645C (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
