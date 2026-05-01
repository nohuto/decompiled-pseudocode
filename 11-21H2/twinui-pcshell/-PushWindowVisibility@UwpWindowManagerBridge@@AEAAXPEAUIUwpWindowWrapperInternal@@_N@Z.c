/*
 * XREFs of ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x180402958
 * Callers:
 *     _lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator() @ 0x1803FFC58 (_lambda_00182c6ee200e78e0959b7edcc3d9c9f_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UwpWindowManagerBridge::PushWindowVisibility(
        UwpWindowManagerBridge *this,
        struct IUwpWindowWrapperInternal *a2,
        unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64 *); // rdi
  int v12; // eax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  if ( v5 )
  {
    v15 = 0LL;
    v6 = v3;
    v7 = *((_QWORD *)this + 21);
    v16 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 136LL);
    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v15);
    v9 = v8(v7, v5, v6, &v15);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x11C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v13);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v15);
    v10 = *((_QWORD *)this + 6);
    v16 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10 + 224LL);
    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v15);
    v12 = v11(v10, v5, v6, &v15);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x120,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v12,
        v13);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
  }
}
