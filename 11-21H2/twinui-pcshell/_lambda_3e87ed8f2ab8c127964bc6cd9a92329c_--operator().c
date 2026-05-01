/*
 * XREFs of _lambda_3e87ed8f2ab8c127964bc6cd9a92329c_::operator() @ 0x180409874
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___::Run @ 0x18040BE70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3e87ed8f2ab8c127964bc6cd9a92329c_::operator()(_QWORD **a1)
{
  void (*v2)(void); // rbx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = *(void (**)(void))(**a1 + 248LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v8);
  try
  {
    v2();
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, *a1[1]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E5,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
