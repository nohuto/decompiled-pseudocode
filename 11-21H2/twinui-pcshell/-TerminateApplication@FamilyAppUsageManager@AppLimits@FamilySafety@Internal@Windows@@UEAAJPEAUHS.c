/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1805639E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z @ 0x180562328 (--$TerminateAppRequested@PEBGAEAE@AppUsageTelemetry@@SAX$$QEAPEBGAEAE@Z.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180563B68 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        RTL_SRWLOCK *a1,
        HSTRING a2,
        char a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // ebx
  PCWSTR StringRawBuffer; // rdx
  _QWORD *v11; // rax
  __int64 *Ptr; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _BYTE v16[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-60h] BYREF
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]

  v16[0] = a3;
  v8 = a1 + 18;
  AcquireSRWLockShared(a1 + 18);
  v18 = v8;
  v9 = 0;
  if ( a1[17].Ptr )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v19, StringRawBuffer);
    v11 = v19;
    if ( v20 >= 8 )
      v11 = (_QWORD *)v19[0];
    v17 = v11;
    AppUsageTelemetry::TerminateAppRequested<unsigned short const *,unsigned char &>((__int64 *)&v17, v16);
    Ptr = (__int64 *)a1[17].Ptr;
    v13 = *Ptr;
    v14 = v19;
    if ( a3 )
    {
      if ( v20 >= 8 )
        v14 = (_QWORD *)v19[0];
      LOBYTE(v9) = a4 != 0;
      (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(v13 + 64))(Ptr, v14, v9);
    }
    else
    {
      if ( v20 >= 8 )
        v14 = (_QWORD *)v19[0];
      (*(void (__fastcall **)(__int64 *, _QWORD *))(v13 + 72))(Ptr, v14);
    }
    std::wstring::_Tidy_deallocate((__int64)v19);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
  return 0LL;
}
