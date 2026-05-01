/*
 * XREFs of _lambda_c0f08dfecf23d4c97e456f7dc771f40c_::operator() @ 0x1803EAFB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0f08dfecf23d4c97e456f7dc771f40c___::Run @ 0x1803F1030 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c0f08dfecf23d4c97e456f7dc771f40c___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c0f08dfecf23d4c97e456f7dc771f40c_::operator()(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v5 = (_QWORD *)(*a1)[46];
  v6 = (_QWORD *)(*a1)[47];
  try
  {
    while ( v5 != v6 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5) == *a1[1] )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v5 + 288LL))(*v5, &v14);
        v15 = 0LL;
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 56LL))((*a1)[39], &v16);
        v8 = *(_QWORD *)v7;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v7 + 64LL);
        wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v15);
        v10 = v9(v8, v14, &v15);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x866,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v10,
            v12);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
        break;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x86B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
