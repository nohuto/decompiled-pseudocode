/*
 * XREFs of _lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator() @ 0x1804D8078
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run @ 0x1804DA1D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // rbx
  BOOL v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v11);
  v4 = v3(v2, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (RTL_SRWLOCK *)(a1[1] + 31);
    AcquireSRWLockShared(v7);
    v8 = *((_BYTE *)a1[1] + 200) == 0;
    if ( v7 )
      ReleaseSRWLockShared(v7);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, BOOL))(*(_QWORD *)a1[1][35] + 128LL))(a1[1][35], v11, v8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v6 = 639LL;
  }
  else
  {
    v6 = 632LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return v5;
}
