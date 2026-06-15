/*
 * XREFs of _lambda_c39c375cc353a820071102aacff3912a_::operator() @ 0x180119D6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c39c375cc353a820071102aacff3912a__void_::_Do_call @ 0x18011A8E0 (std--_Func_impl_no_alloc__lambda_c39c375cc353a820071102aacff3912a__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18011A434 (-EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_c39c375cc353a820071102aacff3912a_::operator()(CPowerReferenceManager **a1)
{
  char result; // al
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CPowerReferenceManager *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  result = CPowerReferenceManager::EnsureCamMicUsageInitialized(a1[3]);
  if ( result )
  {
    v13 = 0LL;
    v3 = (__int64 *)*((_QWORD *)a1[3] + 82);
    v4 = *v3;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v4 + 48))(v3, *(unsigned int *)a1, 0LL, &v13);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        v9 = a1[1];
        v10 = v13;
        v11 = *(_QWORD *)v9;
        *(_QWORD *)v9 = v13;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
      }
      v7 = 101LL;
    }
    else
    {
      v7 = 100LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)(unsigned int)v5);
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)a1[3] + 616);
    EnterCriticalSection(v8);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)a1[3] + 82);
    if ( v8 )
      LeaveCriticalSection(v8);
    return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
  }
  return result;
}
