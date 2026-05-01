/*
 * XREFs of ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1806203A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1801992A0 (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 18;
  AcquireSRWLockShared(this + 18);
  try
  {
    if ( this[17].Ptr )
    {
      AppUsageTelemetry::StopUsageTracking(v3);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[17].Ptr + 40LL))(this[17].Ptr);
    }
    if ( v2 )
      ReleaseSRWLockShared(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7A,
                           (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v4);
  }
  return result;
}
