/*
 * XREFs of _lambda_69bbfac175da7369ff64947ef3e1264d_::operator() @ 0x1800331A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run @ 0x180033180 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_69bbfac175da7369ff64947ef3e1264d_::operator()(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(*a1)[46];
  v3 = (_QWORD *)(*a1)[47];
  while ( v2 != v3 )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 296LL))(*v2) == *a1[1] )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 288LL))(*v2);
      v12 = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 40LL))((*a1)[39], &v13);
      v6 = *(_QWORD *)v5;
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v5 + 56LL);
      wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v12);
      v8 = v7(v6, v4, &v12);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x78E,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8,
          v10);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
      return 0LL;
    }
    ++v2;
  }
  return 0LL;
}
