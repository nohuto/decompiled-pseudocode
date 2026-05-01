/*
 * XREFs of _lambda_840f656ae392d3edda757dfeed14128c_::operator() @ 0x18040116C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_840f656ae392d3edda757dfeed14128c___::Run @ 0x180402ED0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_840f656ae392d3edda757dfeed14128c___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A9030 (--$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FACB4 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_840f656ae392d3edda757dfeed14128c_::operator()(__int64 *a1)
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
  *(_BYTE *)(v2 + 192) = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 176) + 56LL))(
         *(_QWORD *)(v2 + 176),
         *(_QWORD *)(v2 + 200));
  if ( v3 < 0 )
  {
    v4 = 597LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 176) + 72LL))(
         *(_QWORD *)(*a1 + 176),
         *(_QWORD *)(*a1 + 208));
  if ( v3 < 0 )
  {
    v4 = 598LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 176) + 104LL))(
         *(_QWORD *)(*a1 + 176),
         *(_QWORD *)(*a1 + 216));
  if ( v3 < 0 )
  {
    v4 = 599LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 200LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 112));
  if ( v3 < 0 )
  {
    v4 = 601LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 232LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 120));
  if ( v3 < 0 )
  {
    v4 = 602LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 248LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 128));
  if ( v3 < 0 )
  {
    v4 = 603LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 72LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 144));
  if ( v3 < 0 )
  {
    v4 = 604LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 120LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 152));
  if ( v3 < 0 )
  {
    v4 = 605LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 184) + 104LL))(
         *(_QWORD *)(*a1 + 184),
         *(_QWORD *)(*a1 + 160));
  if ( v3 < 0 )
  {
    v4 = 606LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_Input>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*a1 + 176),
    &v10);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, *(_QWORD *)(*a1 + 224));
  v3 = v5;
  if ( v5 >= 0 )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 176);
    *(_QWORD *)(*a1 + 176) = 0LL;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = *a1;
    }
    *(_BYTE *)(v6 + 264) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(v7);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x262,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  return (unsigned int)v3;
}
