/*
 * XREFs of ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x180620290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1806201F0 (-StartUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StartUsageTracking(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 18;
  AcquireSRWLockShared(this + 18);
  if ( this[17].Ptr )
  {
    AppUsageTelemetry::StartUsageTracking(v3);
    try
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[17].Ptr + 24LL))(this[17].Ptr);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[17].Ptr + 32LL))(this[17].Ptr);
      if ( v2 )
        ReleaseSRWLockShared(v2);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6E,
                             (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                             v5);
    }
  }
  else
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 2147500037LL;
  }
  return result;
}
