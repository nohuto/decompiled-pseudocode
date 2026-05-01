/*
 * XREFs of _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x1803FA32C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___::Run @ 0x1803FAB40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9030 (--$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FACB4 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *(_BYTE *)(v2 + 200) = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 192) + 56LL))(
         *(_QWORD *)(v2 + 192),
         *(_QWORD *)(v2 + 208));
  if ( v3 < 0 )
  {
    v4 = 612LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 192) + 72LL))(
         *(_QWORD *)(*a1 + 192),
         *(_QWORD *)(*a1 + 216));
  if ( v3 < 0 )
  {
    v4 = 613LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 192) + 88LL))(
         *(_QWORD *)(*a1 + 192),
         *(_QWORD *)(*a1 + 224));
  if ( v3 < 0 )
  {
    v4 = 614LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 192) + 104LL))(
         *(_QWORD *)(*a1 + 192),
         *(_QWORD *)(*a1 + 232));
  if ( v3 < 0 )
  {
    v4 = 615LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_Input>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 192),
    &v10);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, *(_QWORD *)(*a1 + 240));
  v3 = v5;
  if ( v5 >= 0 )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 192);
    *(_QWORD *)(*a1 + 192) = 0LL;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = *a1;
    }
    *(_BYTE *)(v6 + 256) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  return (unsigned int)v3;
}
