/*
 * XREFs of ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18061EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180620604 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive(
        RTL_SRWLOCK *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  RTL_SRWLOCK *v6; // rbx
  PCWSTR StringRawBuffer; // rdx
  _QWORD *v8; // rdx
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-48h]
  _QWORD v11[4]; // [rsp+28h] [rbp-40h] BYREF

  *a3 = 0;
  v6 = this + 18;
  AcquireSRWLockShared(this + 18);
  v10 = v6;
  if ( this[17].Ptr )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v11, StringRawBuffer);
    v8 = v11;
    if ( v11[3] >= 8uLL )
      v8 = (_QWORD *)v11[0];
    *a3 = (*(__int64 (__fastcall **)(PVOID, _QWORD *))(*(_QWORD *)this[17].Ptr + 56LL))(this[17].Ptr, v8);
    std::wstring::_Tidy_deallocate((__int64)v11);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
