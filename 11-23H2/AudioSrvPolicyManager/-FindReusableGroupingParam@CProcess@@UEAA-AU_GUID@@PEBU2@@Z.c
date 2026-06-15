/*
 * XREFs of ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800268D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180014C60 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct _GUID *__fastcall CProcess::FindReusableGroupingParam(
        CProcess *this,
        struct _GUID *__return_ptr retstr,
        const struct _GUID *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  int v8; // esi
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  GUID v13; // xmm0
  void *v15; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+28h] [rbp-28h] BYREF
  GUID v17; // [rsp+30h] [rbp-20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v16 = v6;
  v7 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a3->Data1;
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a3->Data1 )
    v7 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a3->Data4;
  v8 = v7 != 0;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
  {
    v15 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)i[3],
                &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b,
                &v15) >= 0
      && !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v15 + 128LL))(v15)
      && (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v15 + 32LL))(v15) != 2 )
    {
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 120LL))(v15);
      v12 = *v11 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *v11 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v12 = v11[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v12 )
      {
        if ( (unsigned int)++v8 > 1 )
        {
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v15);
          v13 = GUID_00000000_0000_0000_0000_000000000000;
          goto LABEL_15;
        }
      }
      (*(void (__fastcall **)(void *, GUID *))(*(_QWORD *)v15 + 104LL))(v15, &v17);
    }
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v15);
  }
  v13 = v17;
LABEL_15:
  *retstr = v13;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  return retstr;
}
