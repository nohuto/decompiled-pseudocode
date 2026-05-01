/*
 * XREFs of _lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator() @ 0x180401B68
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d2a465ae199f4521f0e17712fd5e9c58___::Run @ 0x180403060 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d2a465ae199f4521f0e17712fd5e9c58___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FACB4 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  const char *v11; // r9
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *(_BYTE *)(*a1 + 248) = 0;
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 240) + 56LL))(*(_QWORD *)(v2 + 240));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v13);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 72LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 64));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 88LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 72));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        v13);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 104LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 80));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 152LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 88));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v7,
        v13);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 168LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 96));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v8,
        v13);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 136LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 104));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v13);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*a1 + 240));
    *(_BYTE *)(*a1 + 264) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(v10);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v11);
  }
  return 0LL;
}
