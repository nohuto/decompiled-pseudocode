/*
 * XREFs of ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180025A84
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call @ 0x18002B010 (std--_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180014C60 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcess::AsyncProcessTerminatedNotifications(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 ***v3; // rdi
  __int64 **i; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = v2;
  v3 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    v5 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                &v5) >= 0 )
      (*(void (__fastcall **)(void *, CProcess *))(*(_QWORD *)v5 + 80LL))(v5, this);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v5);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
}
