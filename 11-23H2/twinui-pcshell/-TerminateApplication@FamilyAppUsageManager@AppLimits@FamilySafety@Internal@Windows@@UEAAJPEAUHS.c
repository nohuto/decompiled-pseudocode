/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x180620470
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x18061B1A4 (--$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180620604 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        RTL_SRWLOCK *a1,
        HSTRING a2,
        char a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rbx
  PCWSTR StringRawBuffer; // rdx
  _QWORD *v10; // rax
  __int64 *Ptr; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _BYTE v15[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16[2]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]

  v15[0] = a3;
  v8 = a1 + 18;
  AcquireSRWLockShared(a1 + 18);
  v16[1] = (__int64)v8;
  if ( a1[17].Ptr )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v17, StringRawBuffer);
    v10 = v17;
    if ( v18 >= 8 )
      v10 = (_QWORD *)v17[0];
    v16[0] = (__int64)v10;
    AppUsageTelemetry::TerminateAppRequested<unsigned short const *,unsigned char &>(v16, v15);
    Ptr = (__int64 *)a1[17].Ptr;
    v12 = *Ptr;
    v13 = v17;
    if ( a3 )
    {
      if ( v18 >= 8 )
        v13 = (_QWORD *)v17[0];
      (*(void (__fastcall **)(__int64 *, _QWORD *, bool))(v12 + 64))(Ptr, v13, a4 != 0);
    }
    else
    {
      if ( v18 >= 8 )
        v13 = (_QWORD *)v17[0];
      (*(void (__fastcall **)(__int64 *, _QWORD *))(v12 + 72))(Ptr, v13);
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
  }
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return 0LL;
}
