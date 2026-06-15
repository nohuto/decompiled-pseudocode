/*
 * XREFs of ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x18002673C
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query_to@UIAudioSessionPolicyControl@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioSessionPolicyControl@@@Z @ 0x1800120E0 (--$query_to@UIAudioSessionPolicyControl@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcess::DisconnectExclusiveModeStreams(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = v2;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = 0LL;
    if ( (int)wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<IAudioSessionPolicyControl>(
                i + 3,
                &v5) >= 0
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 160LL))(v5, 1LL);
    }
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v5);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
}
