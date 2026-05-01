/*
 * XREFs of ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801991F0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1801992A0 (-StopUsageTracking@AppUsageTelemetry@@SAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::UnsubscribeFromServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v3; // rdi
  const char *v4; // r9
  PVOID Ptr; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = this + 27;
  AcquireSRWLockExclusive(this + 27);
  try
  {
    if ( this[26].Ptr )
    {
      AppUsageTelemetry::StopUsageTracking();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)this[26].Ptr + 40LL))(this[26].Ptr);
      Ptr = this[26].Ptr;
      this[26].Ptr = 0LL;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v4);
  }
  return result;
}
